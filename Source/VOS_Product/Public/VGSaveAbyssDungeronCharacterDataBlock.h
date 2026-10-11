#pragma once
#include "CoreMinimal.h"
#include "VGSaveAvatarCustomizeSetting.h"
#include "VGSaveFavoriteSkillSet.h"
#include "VGSaveSkillSetting.h"
#include "VGStatusCustomizePointAssignment.h"
#include "VGSaveAbyssDungeronCharacterDataBlock.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGSaveAbyssDungeronCharacterDataBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 experience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customize_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGStatusCustomizePointAssignment assigned_customize_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveSkillSetting equip_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveFavoriteSkillSet favorite_skill_set;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSaveAvatarCustomizeSetting avatar_customize;
    
    FVGSaveAbyssDungeronCharacterDataBlock();
};

