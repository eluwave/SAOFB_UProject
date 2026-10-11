#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGTeamCommand.h"
#include "VGTextSymbol.h"
#include "VGPartyCommandItem.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FVGPartyCommandItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTeamCommand Command;
    
    VOS_PRODUCT_API FVGPartyCommandItem();
};

