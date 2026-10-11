#pragma once
#include "CoreMinimal.h"

#include "VGHudMiniMapLine.generated.h"

USTRUCT(BlueprintType)
struct FVGHudMiniMapLine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector To;
    
    VOS_PRODUCT_API FVGHudMiniMapLine();
};

