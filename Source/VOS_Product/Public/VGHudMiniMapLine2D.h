#pragma once
#include "CoreMinimal.h"

#include "VGHudMiniMapLine2D.generated.h"

USTRUCT(BlueprintType)
struct FVGHudMiniMapLine2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D To;
    
    VOS_PRODUCT_API FVGHudMiniMapLine2D();
};

