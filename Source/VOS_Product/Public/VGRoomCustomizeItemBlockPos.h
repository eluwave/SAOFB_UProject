#pragma once
#include "CoreMinimal.h"
#include "VGRoomCustomizeItemBlockPos.generated.h"

USTRUCT(BlueprintType)
struct FVGRoomCustomizeItemBlockPos {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Z;
    
    VOS_PRODUCT_API FVGRoomCustomizeItemBlockPos();
};

