#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGTransitionDescBP.h"
#include "VGAbyssDungeonManager.generated.h"

class AActor;
class UDataTable;
class UVGAbyssDungeonSituationDataAsset;
class UVGOverrideItemDropAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAbyssDungeonManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_dungeon_level_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_dungeon_level_data;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_dungeon_special_level_enemy_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_dungeon_special_level_enemy_data;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_dungeon_situation_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAbyssDungeonSituationDataAsset* m_dungeon_situation_data;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_dungeon_override_drop_table_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGOverrideItemDropAsset* m_dungeon_override_drop_table_data;
    
public:
    UVGAbyssDungeonManager();

    UFUNCTION(BlueprintCallable)
    void SetAbyssDungeonProgressFlag(UObject* Context, int32 floorNum);
    
    UFUNCTION(BlueprintCallable)
    void ResetAbyssBoxDiscoveredFlags(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void InitAbyssDungeonFloorListInLobby(int32 SelectIndex, int32 ActiveIndexNum);
    
    UFUNCTION(BlueprintCallable)
    void InitAbyssDungeonFloorList(int32 NextFloor);
    
    UFUNCTION(BlueprintCallable)
    FVGTransitionDescBP GetRandomDungeonTransition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextFloorNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFloorNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbyssDungeonEnemyLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbyssDungeonCalcEnemyLevel(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void DiscardAbyssDungeonSubQuest();
    
};

