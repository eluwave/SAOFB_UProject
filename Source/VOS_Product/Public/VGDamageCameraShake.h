#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGDamageCameraShake.generated.h"

class UCameraShake;

USTRUCT(BlueprintType)
struct FVGDamageCameraShake {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> shake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float inner_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float outer_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fall_off;
    
    VOS_PRODUCT_API FVGDamageCameraShake();
};

