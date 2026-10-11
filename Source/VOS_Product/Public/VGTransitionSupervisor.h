#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "GameFramework/Actor.h"
#include "VGScreenFadeParam.h"
#include "VGTransitionDescBP.h"
#include "VGTransitionSupervisor.generated.h"

class UVGTransitionDescDecorator;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API AVGTransitionSupervisor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_desc_decorator_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGTransitionDescDecorator* m_desc_decorator;
    
public:
    AVGTransitionSupervisor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RequestTransition(const FVGTransitionDescBP& desc);
    
private:
    UFUNCTION(BlueprintCallable)
    void onFadeEnd();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetMulticast_ScreenFadeout(const FVGScreenFadeParam& param);
    
};

