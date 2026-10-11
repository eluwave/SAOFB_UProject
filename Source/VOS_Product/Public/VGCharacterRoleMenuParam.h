#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaRole.h"
#include "VGTextSymbol.h"
#include "VGCharacterRoleMenuParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterRoleMenuParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaRole Role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FVGCharacterRoleMenuParam();
};

