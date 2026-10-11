#pragma once
#include "CoreMinimal.h"

#include "EVGGuidedMissileMode.h"
#include "VGGuidedMissileReserveSetting.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGuidedMissileReserveSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> homing_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> fix_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector fix_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGuidedMissileMode mode;
    
    FVGGuidedMissileReserveSetting();
};

