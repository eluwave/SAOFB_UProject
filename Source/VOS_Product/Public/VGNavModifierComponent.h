#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavModifierComponent.h"
#include "VGNavModifierComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGNavModifierComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_update_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_update_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_update_shape;
    
public:
    UVGNavModifierComponent(const FObjectInitializer& ObjectInitializer);

};

