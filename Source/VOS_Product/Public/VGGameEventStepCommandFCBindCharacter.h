#pragma once
#include "CoreMinimal.h"
#include "VGGameEventStepCommandFCBindCharacterEntry.h"
#include "VGGameEventStepCommandFCBindCharacter.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepCommandFCBindCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName step_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGameEventStepCommandFCBindCharacterEntry> entries;
    
    FVGGameEventStepCommandFCBindCharacter();
};

