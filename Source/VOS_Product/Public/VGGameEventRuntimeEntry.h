#pragma once
#include "CoreMinimal.h"
#include "VGGameEventEntry.h"
#include "VGGameEventRuntimeEntry.generated.h"

class AActor;
class AVGGameEventLocator;
class UVGGameEventBase;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGGameEventRuntimeEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventEntry Entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGGameEventLocator* locator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventBase* script;
    
    FVGGameEventRuntimeEntry();
};

