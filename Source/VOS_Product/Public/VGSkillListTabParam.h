#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "EVGSkillListType.h"
#include "VGTextSymbol.h"
#include "VGSkillListTabParam.generated.h"

USTRUCT(BlueprintType)
struct FVGSkillListTabParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol tab_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference tab_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSkillListType skill_type;
    
    VOS_PRODUCT_API FVGSkillListTabParam();
};

