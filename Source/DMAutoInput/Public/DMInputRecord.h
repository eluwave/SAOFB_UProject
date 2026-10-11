#pragma once
#include "CoreMinimal.h"
#include "DMAnalogInput.h"
#include "EDMAutoInputKeyType.h"
#include "DMInputRecord.generated.h"

USTRUCT(BlueprintType)
struct FDMInputRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EDMAutoInputKeyType> push_key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDMAnalogInput analog_input;
    
    DMAUTOINPUT_API FDMInputRecord();
};

