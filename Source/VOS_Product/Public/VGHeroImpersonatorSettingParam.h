#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaUnique.h"
#include "EVGHeroImpersonatorCharacter.h"
#include "EVGHeroImpersonatorRequiredContent.h"
#include "VGTextSymbol.h"
#include "VGHeroImpersonatorSettingParam.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGHeroImpersonatorSettingParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHeroImpersonatorCharacter character_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique character_unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customize_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol character_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_flag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHeroImpersonatorRequiredContent required_content;
    
    FVGHeroImpersonatorSettingParam();
};

