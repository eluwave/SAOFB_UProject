#pragma once
#include "CoreMinimal.h"
#include "VGBattleCallName.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGBattleCallName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName character_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString call_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString call_name_strong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString call_name_cry;
    
    FVGBattleCallName();
};

