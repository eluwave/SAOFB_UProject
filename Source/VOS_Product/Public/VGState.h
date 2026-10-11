#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGState.generated.h"

class UVGBehaviorComponent;

UCLASS(Abstract, Blueprintable)
class VOS_PRODUCT_API UVGState : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGBehaviorComponent* m_owner;
    
public:
    UVGState();

};

