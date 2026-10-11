#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGObjectCache.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGObjectCache : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Objects;
    
    UVGObjectCache();

};

