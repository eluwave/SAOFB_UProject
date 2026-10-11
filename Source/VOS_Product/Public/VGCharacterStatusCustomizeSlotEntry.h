#pragma once
#include "CoreMinimal.h"
#include "VGFavoriteSkillSet.h"
#include "VGInventoryEntryId.h"
#include "VGSkillSetting.h"
#include "VGStatusCustomizePointAssignment.h"
#include "VGCharacterStatusCustomizeSlotEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterStatusCustomizeSlotEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 assigned_skill_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> skills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSkillSetting equip_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGFavoriteSkillSet favorite_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGStatusCustomizePointAssignment assigned_customize_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId main_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId sub_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId accessory0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGInventoryEntryId accessory1;
    
    FVGCharacterStatusCustomizeSlotEntry();
};

