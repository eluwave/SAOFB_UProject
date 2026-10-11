#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventStepSequenceMobCharacterEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventStepSequenceMobCharacterEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> character_class;
    
    FVGGameEventStepSequenceMobCharacterEntry();
};

