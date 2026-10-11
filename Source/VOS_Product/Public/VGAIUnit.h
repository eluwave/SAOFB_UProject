#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "EVGAISkillTarget.h"
#include "EVGBTActorTarget.h"
#include "EVGDodgeAction.h"
#include "EVGPadKey.h"
#include "EVGSkillType.h"
#include "EVGStatusBuff.h"
#include "EVGTeamRelation.h"
#include "EVGUnitCommand.h"
#include "EVGUnitStatusBit.h"
#include "EVGUnitWeaponSelect.h"
#include "VGAIAction.h"
#include "VGAIDifficulty.h"
#include "VGAIPerceptionUnitInfo.h"
#include "VGAISkillData.h"
#include "VGAISkillParam.h"
#include "VGAIUnitData.h"
#include "VGAIUnitInfo.h"
#include "VGAIUnitParam.h"
#include "VGAIUnitSearch.h"
#include "VGAIUnit.generated.h"

class AActor;
class ATargetPoint;
class AVGAISpawner;
class AVGAITeam;
class AVGBattleCharacter;
class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAIUnit : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAISpawner* m_spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAITeam* m_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGAIUnitParam m_unit_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UVGAIUnit*, FVGAIUnitData> m_unit_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UVGAIUnit*, FVGAIUnitData> m_unit_data_cached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAIUnit*> m_pathfinding_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGUnitCommand m_command;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_target_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_attack_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_attack_unit_cached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_move_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_last_attack_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_last_damage_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_aim_target_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAIUnit* m_grenade_target_unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ATargetPoint*> m_route_point;
    
public:
    UVGAIUnit();

    UFUNCTION(BlueprintCallable)
    bool Warp(FVector Location, bool addCapsuleHeight);
    
    UFUNCTION(BlueprintCallable)
    void UpdateStatus_Default(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool UpdateStatus(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSkillData(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRequest();
    
    UFUNCTION(BlueprintCallable)
    void SetUserRecastTime(EVGSkillType Layer, EVGPadKey::Type Key, float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetThreatLevel(int32 value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetSkillPriority(const TArray<FVGAISkillParam>& skillPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetSkill(const FVGAISkillData& skill);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float Radius);
    
    UFUNCTION(BlueprintCallable)
    void SetParam(const FVGAIUnitParam& param);
    
    UFUNCTION(BlueprintCallable)
    void SetCommand(const EVGUnitCommand Command, UVGAIUnit* targetUnit, FName NodeName);
    
    UFUNCTION(BlueprintCallable)
    void SetChargingSkill(EVGPadKey::Type Key);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackLevel(int32 value);
    
    UFUNCTION(BlueprintCallable)
    void RequestCreateSkillData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSkillData(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfRecoveryEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfHealEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfBuffEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRescueTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRescueEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveryTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecoveryEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOrder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLongRangeAttackEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLargeSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIndependent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInBlackHole() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHealEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExist() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEffectiveCoverObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiscoveredFromUnit(const UVGAIUnit* fromUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiscoveredAlways() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiscovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChargingSkill() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaRescueTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaRecoveryTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaRechargeTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaHealTarget(float rate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaFlying(float Height) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaDebuffTarget(EVGStatusBuff statusBuff) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaBuffTarget(EVGStatusBuff statusBuff) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaAttackableTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharaActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBuffEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBoss() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackCancelBuff() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackableTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackableHeight(float minHeight, float maxHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InActionInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool InActionDodgeInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCoverObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUsedSkillId() const;
    
    UFUNCTION(BlueprintCallable)
    void GetUnitsByHateRanking_Safe(TArray<UVGAIUnit*>& units, int32 Num, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnitsByHateRanking(TArray<UVGAIUnit*>& units, int32 Num, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) const;
    
    UFUNCTION(BlueprintCallable)
    void GetUnitByHateIndex_Safe(UVGAIUnit*& unit, int32 index, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnitByHateIndex(UVGAIUnit*& unit, int32 index, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) const;
    
    UFUNCTION(BlueprintCallable)
    void GetUnitByHate_Safe(UVGAIUnit*& unit, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUnitByHate(UVGAIUnit*& unit, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTeam(AVGAITeam*& Team) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTargetUnit(const EVGBTActorTarget Target, UVGAIUnit*& targetUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSpawner(AVGAISpawner*& spawner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkillData(TArray<FVGAISkillData>& SkillData, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillBullet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ATargetPoint*> GetRoutePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRescueSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRequestList(TArray<FVGAIAction>& requestList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGTeamRelation GetRelation(const UVGAIUnit* unit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRecoverySkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRechargeSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPredictivePositionProjectile(FVector& Position, const FVector& sourcePosition, float Speed, float Gravity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPredictivePosition(FVector& Position, float DeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPredictiveActorPosition(FVector& Position, float DeltaTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPosition(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable)
    void GetPerceptionUnit_Safe(TArray<FVGAIPerceptionUnitInfo>& perceptionUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerceptionUnit(TArray<FVGAIPerceptionUnitInfo>& perceptionUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPerceptionData(const UVGAIUnit* unit, FVGAIUnitInfo& perceptionData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPerceptionActor(TArray<AActor*>& perceptionActor) const;
    
    UFUNCTION(BlueprintCallable)
    void GetParam(FVGAIUnitParam& param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNavPosition(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetName(FString& Name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMoveUnit(UVGAIUnit*& unit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMovePosition(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastDamageUnit(UVGAIUnit*& damageUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLastAttackUnit(UVGAIUnit*& attackUnit, FName& NodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLastAttackTimer(float& Timer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHomePosition(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHeightRange(float& minHeight, float& maxHeight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHealSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHateByUnit_Safe(float& ret, const UVGAIUnit* targetUnit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHateByUnit(float& ret, const UVGAIUnit* targetUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetExecuteSkill(FVGAISkillData& SkillData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDodgeSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetDodgeActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGDodgeAction GetDodgeAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistance(const UVGAIUnit* unit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDirection2D(FVector2D& Direction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDirection(FVector& Direction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDifficultyData(FVGAIDifficulty& aiDifficulty) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDashSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCommandUnit(UVGAIUnit*& unit) const;
    
    UFUNCTION(BlueprintCallable)
    void GetCommandSkillName(FName& skillName);
    
    UFUNCTION(BlueprintCallable)
    void GetCommandSkill(FVGAISkillData& skill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCommand(EVGUnitCommand& Command) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCapsuleHalfHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBuffSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattleCharacter(AVGBattleCharacter*& Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttackUnit(UVGAIUnit*& unit, FName& NodeName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAttackSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActorPosition(FVector& Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActor(AActor*& Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGAIUnit* FindPerceptionUnit(TArray<FVGAIPerceptionUnitInfo>& perceptionUnit, const FVGAIUnitSearch& condition, bool enableNpcFirstAttack) const;
    
    UFUNCTION(BlueprintCallable)
    void Dodge(bool Reset);
    
    UFUNCTION(BlueprintCallable)
    void DisableAttackTarget(const UVGAIUnit* unit);
    
    UFUNCTION(BlueprintCallable)
    void DelStatus(EVGUnitStatusBit status);
    
    UFUNCTION(BlueprintCallable)
    void CreateSkillData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSkillCondition(const FVGAISkillData& skill, UVGAIUnit* targetUnit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDashInPath(float Distance) const;
    
    UFUNCTION(BlueprintCallable)
    void AddStatus(EVGUnitStatusBit status);
    
    UFUNCTION(BlueprintCallable)
    void AddRequest(const FVGAIAction& action);
    
};

