#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGFacialExpressionPatternEntry.h"
#include "VGFacialAnimSequencePack.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGFacialAnimSequencePack : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGFacialExpressionPatternEntry> expression_pattern_entries;
    
    UVGFacialAnimSequencePack();

};

