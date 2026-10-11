#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AntiAliasingType.h"
#include "VGAntiAliasingQuality.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAntiAliasingQuality : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AntiAliasingType anti_aliasing_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 anti_aliasing_quality;
    
    FVGAntiAliasingQuality();
};

