#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventLicenseType.h"
#include "VGGameEventActivateCondition.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventActivateCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> required_flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> required_deferred_flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> supress_flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGGameEventLicenseType license_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> supress_dlc;
    
    FVGGameEventActivateCondition();
};

