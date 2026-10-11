#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "EVGCharaTeam.h"
#include "Templates/SubclassOf.h"
#include "VGAIDifficulty.h"
#include "VGAISpawnedInfo.h"
#include "VGBreakItemDropTableSet.h"
#include "VGCameraFrustum.h"
#include "VGWeaponSetting.h"
#include "VGAISpawner.generated.h"

class ATargetPoint;
class AVGAITeam;
class AVGCharacter;
class UVGAIUnit;
class UVGCharacterEquipmentTable;
class UVGItemDropTableSet;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAISpawner : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_regist_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_team_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_add_nearest_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAIUnit> m_unit_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_spawn_enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAIDifficulty> m_difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATargetPoint*> m_route_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropTableSet* m_item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropTableSet* m_ufg_item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBreakItemDropTableSet> m_break_item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_tag_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_auto_set_team_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaTeam m_team_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGAITeam* m_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGCharacter*> m_spawn_actors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> m_unique_id_and_lv_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_UniqueIdAndLevel, meta=(AllowPrivateAccess=true))
    TArray<FVGAISpawnedInfo> m_unique_id_and_lv_array;
    
public:
    AVGAISpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* SpawnActor();
    
    UFUNCTION(BlueprintCallable)
    void SetupPreviewMesh(UClass* characterClass, float Scale, const FVector& offsetLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetupActorByEquipmentTable(AActor* Actor, int32 lv, UVGCharacterEquipmentTable* Table);
    
    UFUNCTION(BlueprintCallable)
    void SetupActor(AActor* Actor, int32 lv, FVGWeaponSetting weaponSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayable(bool is_playable);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetActorInvisible(AVGCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegistTeam(AVGAITeam* Team);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedCharacter(AVGCharacter* Character, int32 Level);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_UniqueIdAndLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeleteActor(AActor* Actor, const TArray<FVGCameraFrustum>& cameraFrustums);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReserveUniqueIdAndLevel(int32 unique_id, int32 lv);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnEnable() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDifficultyData(FVGAIDifficulty& difficultyData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TSubclassOf<AActor> GetActorClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorByUniqueId(int32 unique_id) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateSpawnEffect(AVGCharacter* Character);
    
};

