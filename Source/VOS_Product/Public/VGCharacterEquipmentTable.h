#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAcquireWeaponArray.h"
#include "VGLearnSkillSet.h"
#include "VGCharacterEquipmentTable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterEquipmentTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAcquireWeaponArray> acquire_weapon_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLearnSkillSet> learn_skill_set;
    
    UVGCharacterEquipmentTable();

};

