#include "VGAIUnit.h"

UVGAIUnit::UVGAIUnit() {
    this->m_spawner = NULL;
    this->m_actor = NULL;
    this->m_team = NULL;
    this->m_radius = 0.00f;
    this->m_command = EVGUnitCommand::NONE;
    this->m_target_unit = NULL;
    this->m_attack_unit = NULL;
    this->m_attack_unit_cached = NULL;
    this->m_move_unit = NULL;
    this->m_last_attack_unit = NULL;
    this->m_last_damage_unit = NULL;
    this->m_aim_target_unit = NULL;
    this->m_grenade_target_unit = NULL;
}

bool UVGAIUnit::Warp(FVector Location, bool addCapsuleHeight) {
    return false;
}

void UVGAIUnit::UpdateStatus_Default(float DeltaTime) {
}

void UVGAIUnit::UpdateSkillData(float DeltaTime) {
}

void UVGAIUnit::UpdateRequest() {
}

void UVGAIUnit::SetUserRecastTime(EVGSkillType Layer, EVGPadKey::Type Key, float DeltaTime) {
}

void UVGAIUnit::SetThreatLevel(int32 value) {
}

void UVGAIUnit::SetSkillPriority(const TArray<FVGAISkillParam>& skillPriority) {
}

void UVGAIUnit::SetSkill(const FVGAISkillData& skill) {
}

void UVGAIUnit::SetRadius(float Radius) {
}

void UVGAIUnit::SetParam(const FVGAIUnitParam& param) {
}

void UVGAIUnit::SetCommand(const EVGUnitCommand Command, UVGAIUnit* targetUnit, FName NodeName) {
}

void UVGAIUnit::SetChargingSkill(EVGPadKey::Type Key) {
}

void UVGAIUnit::SetAttackLevel(int32 value) {
}

void UVGAIUnit::RequestCreateSkillData() {
}

bool UVGAIUnit::IsSelfRecoveryEnable() const {
    return false;
}

bool UVGAIUnit::IsSelfHealEnable() const {
    return false;
}

bool UVGAIUnit::IsSelfBuffEnable() const {
    return false;
}

bool UVGAIUnit::IsRescueTarget() const {
    return false;
}

bool UVGAIUnit::IsRescueEnable() const {
    return false;
}

bool UVGAIUnit::IsRequest() const {
    return false;
}

bool UVGAIUnit::IsRecoveryTarget() const {
    return false;
}

bool UVGAIUnit::IsRecoveryEnable() const {
    return false;
}

bool UVGAIUnit::IsPlayer() const {
    return false;
}

bool UVGAIUnit::IsOrder() const {
    return false;
}

bool UVGAIUnit::IsMoveEnable() const {
    return false;
}

bool UVGAIUnit::IsLongRangeAttackEnable() const {
    return false;
}

bool UVGAIUnit::IsLocalPlayer() const {
    return false;
}

bool UVGAIUnit::IsLargeSize() const {
    return false;
}

bool UVGAIUnit::IsIndependent() const {
    return false;
}

bool UVGAIUnit::IsInBlackHole() const {
    return false;
}

bool UVGAIUnit::IsHealEnable() const {
    return false;
}

bool UVGAIUnit::IsExist() const {
    return false;
}

bool UVGAIUnit::IsEffectiveCoverObject() {
    return false;
}

bool UVGAIUnit::IsDiscoveredFromUnit(const UVGAIUnit* fromUnit) const {
    return false;
}

bool UVGAIUnit::IsDiscoveredAlways() const {
    return false;
}

bool UVGAIUnit::IsDiscovered() const {
    return false;
}

bool UVGAIUnit::IsChargingSkill() const {
    return false;
}

bool UVGAIUnit::IsCharaRescueTarget() const {
    return false;
}

bool UVGAIUnit::IsCharaRecoveryTarget() const {
    return false;
}

bool UVGAIUnit::IsCharaRechargeTarget() const {
    return false;
}

bool UVGAIUnit::IsCharaHealTarget(float rate) const {
    return false;
}

bool UVGAIUnit::IsCharaFlying(float Height) const {
    return false;
}

bool UVGAIUnit::IsCharaDebuffTarget(EVGStatusBuff statusBuff) const {
    return false;
}

bool UVGAIUnit::IsCharaBuffTarget(EVGStatusBuff statusBuff) const {
    return false;
}

bool UVGAIUnit::IsCharaAttackableTarget() const {
    return false;
}

bool UVGAIUnit::IsCharaAlive() const {
    return false;
}

bool UVGAIUnit::IsCharaActive() const {
    return false;
}

bool UVGAIUnit::IsBuffTarget() const {
    return false;
}

bool UVGAIUnit::IsBuffEnable() const {
    return false;
}

bool UVGAIUnit::IsBoss() const {
    return false;
}

bool UVGAIUnit::IsAttackEnable() const {
    return false;
}

bool UVGAIUnit::IsAttackCancelBuff() const {
    return false;
}

bool UVGAIUnit::IsAttackableTarget() const {
    return false;
}

bool UVGAIUnit::IsAttackableHeight(float minHeight, float maxHeight) const {
    return false;
}

bool UVGAIUnit::InActionInput() const {
    return false;
}

bool UVGAIUnit::InActionDodgeInput() const {
    return false;
}

bool UVGAIUnit::HasCoverObject() const {
    return false;
}

int32 UVGAIUnit::GetUsedSkillId() const {
    return 0;
}

void UVGAIUnit::GetUnitsByHateRanking_Safe(TArray<UVGAIUnit*>& units, int32 Num, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) {
}

void UVGAIUnit::GetUnitsByHateRanking(TArray<UVGAIUnit*>& units, int32 Num, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) const {
}

void UVGAIUnit::GetUnitByHateIndex_Safe(UVGAIUnit*& unit, int32 index, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) {
}

void UVGAIUnit::GetUnitByHateIndex(UVGAIUnit*& unit, int32 index, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) const {
}

void UVGAIUnit::GetUnitByHate_Safe(UVGAIUnit*& unit, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) {
}

void UVGAIUnit::GetUnitByHate(UVGAIUnit*& unit, bool enableUnreachable, bool enableUnperception, bool enableUnknown, bool enableNpcFirstAttack) const {
}

void UVGAIUnit::GetTeam(AVGAITeam*& Team) const {
}

void UVGAIUnit::GetTargetUnit(const EVGBTActorTarget Target, UVGAIUnit*& targetUnit) const {
}

void UVGAIUnit::GetSpawner(AVGAISpawner*& spawner) const {
}

void UVGAIUnit::GetSkillData(TArray<FVGAISkillData>& SkillData, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

int32 UVGAIUnit::GetSkillBullet() const {
    return 0;
}

TArray<ATargetPoint*> UVGAIUnit::GetRoutePoint() const {
    return TArray<ATargetPoint*>();
}

void UVGAIUnit::GetRescueSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

void UVGAIUnit::GetRequestList(TArray<FVGAIAction>& requestList) {
}

EVGTeamRelation UVGAIUnit::GetRelation(const UVGAIUnit* unit) const {
    return EVGTeamRelation::NONE;
}

void UVGAIUnit::GetRecoverySkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

void UVGAIUnit::GetRechargeSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

float UVGAIUnit::GetRadius() const {
    return 0.0f;
}

void UVGAIUnit::GetPredictivePositionProjectile(FVector& Position, const FVector& sourcePosition, float Speed, float Gravity) const {
}

void UVGAIUnit::GetPredictivePosition(FVector& Position, float DeltaTime) const {
}

void UVGAIUnit::GetPredictiveActorPosition(FVector& Position, float DeltaTime) const {
}

void UVGAIUnit::GetPosition(FVector& Position) const {
}

void UVGAIUnit::GetPerceptionUnit_Safe(TArray<FVGAIPerceptionUnitInfo>& perceptionUnit) {
}

void UVGAIUnit::GetPerceptionUnit(TArray<FVGAIPerceptionUnitInfo>& perceptionUnit) const {
}

bool UVGAIUnit::GetPerceptionData(const UVGAIUnit* unit, FVGAIUnitInfo& perceptionData) const {
    return false;
}

void UVGAIUnit::GetPerceptionActor(TArray<AActor*>& perceptionActor) const {
}

void UVGAIUnit::GetParam(FVGAIUnitParam& param) {
}

bool UVGAIUnit::GetNavPosition(FVector& Position) const {
    return false;
}

void UVGAIUnit::GetName(FString& Name) const {
}

void UVGAIUnit::GetMoveUnit(UVGAIUnit*& unit) const {
}

void UVGAIUnit::GetMovePosition(FVector& Position) const {
}

void UVGAIUnit::GetLastDamageUnit(UVGAIUnit*& damageUnit) const {
}

void UVGAIUnit::GetLastAttackUnit(UVGAIUnit*& attackUnit, FName& NodeName) const {
}

bool UVGAIUnit::GetLastAttackTimer(float& Timer) const {
    return false;
}

void UVGAIUnit::GetHomePosition(FVector& Position) const {
}

void UVGAIUnit::GetHeightRange(float& minHeight, float& maxHeight) const {
}

float UVGAIUnit::GetHeight() const {
    return 0.0f;
}

float UVGAIUnit::GetHealthRate() const {
    return 0.0f;
}

void UVGAIUnit::GetHealSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

bool UVGAIUnit::GetHateByUnit_Safe(float& ret, const UVGAIUnit* targetUnit) {
    return false;
}

bool UVGAIUnit::GetHateByUnit(float& ret, const UVGAIUnit* targetUnit) const {
    return false;
}

bool UVGAIUnit::GetExecuteSkill(FVGAISkillData& SkillData) const {
    return false;
}

void UVGAIUnit::GetDodgeSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

AActor* UVGAIUnit::GetDodgeActor() const {
    return NULL;
}

EVGDodgeAction UVGAIUnit::GetDodgeAction() const {
    return EVGDodgeAction::Rolling;
}

float UVGAIUnit::GetDistance(const UVGAIUnit* unit) const {
    return 0.0f;
}

void UVGAIUnit::GetDirection2D(FVector2D& Direction) const {
}

void UVGAIUnit::GetDirection(FVector& Direction) const {
}

void UVGAIUnit::GetDifficultyData(FVGAIDifficulty& aiDifficulty) const {
}

void UVGAIUnit::GetDashSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

void UVGAIUnit::GetCommandUnit(UVGAIUnit*& unit) const {
}

void UVGAIUnit::GetCommandSkillName(FName& skillName) {
}

void UVGAIUnit::GetCommandSkill(FVGAISkillData& skill) {
}

void UVGAIUnit::GetCommand(EVGUnitCommand& Command) const {
}

float UVGAIUnit::GetCapsuleHalfHeight() const {
    return 0.0f;
}

void UVGAIUnit::GetBuffSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

void UVGAIUnit::GetBattleCharacter(AVGBattleCharacter*& Character) const {
}

void UVGAIUnit::GetAttackUnit(UVGAIUnit*& unit, FName& NodeName) const {
}

void UVGAIUnit::GetAttackSkillData(TArray<FVGAISkillData>& SkillData, EVGAISkillTarget Target, EVGUnitWeaponSelect select, bool checkRecast, bool checkCondition) const {
}

void UVGAIUnit::GetActorPosition(FVector& Position) const {
}

void UVGAIUnit::GetActor(AActor*& Actor) const {
}

UVGAIUnit* UVGAIUnit::FindPerceptionUnit(TArray<FVGAIPerceptionUnitInfo>& perceptionUnit, const FVGAIUnitSearch& condition, bool enableNpcFirstAttack) const {
    return NULL;
}

void UVGAIUnit::Dodge(bool Reset) {
}

void UVGAIUnit::DisableAttackTarget(const UVGAIUnit* unit) {
}

void UVGAIUnit::DelStatus(EVGUnitStatusBit status) {
}

void UVGAIUnit::CreateSkillData() {
}

bool UVGAIUnit::CheckSkillCondition(const FVGAISkillData& skill, UVGAIUnit* targetUnit) const {
    return false;
}

bool UVGAIUnit::CanDashInPath(float Distance) const {
    return false;
}

void UVGAIUnit::AddStatus(EVGUnitStatusBit status) {
}

void UVGAIUnit::AddRequest(const FVGAIAction& action) {
}

