#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGAimAccuracyAction.h"
#include "VGAimAccuracyState.h"
#include "VGAimAccuracy.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAimAccuracy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAimAccuracyAction> action_params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAimAccuracyState> state_params;
    
    UVGAimAccuracy();

};

