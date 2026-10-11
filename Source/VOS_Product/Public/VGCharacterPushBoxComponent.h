#pragma once
#include "CoreMinimal.h"

#include "Components/BoxComponent.h"
#include "VGCharacterPushBoxComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGCharacterPushBoxComponent : public UBoxComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_velocity;
    
public:
    UVGCharacterPushBoxComponent(const FObjectInitializer& ObjectInitializer);

};

