#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCBindCharacterEntry.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCBindCharacterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Window;
    
    FVGGameEventStepCommandFCBindCharacterEntry();
};

