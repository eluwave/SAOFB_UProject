#pragma once
#include "CoreMinimal.h"
#include "EVGDodgeAction.h"
#include "Templates/SubclassOf.h"
#include "VGGadgetInstallation.h"
#include "VGSoundCueInfo.h"
#include "VGGadgetMine.generated.h"

class AVGGadgetExplodeArea;
class USphereComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGadgetMine : public AVGGadgetInstallation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_sensor_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_sensor_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGGadgetExplodeArea> m_explode_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_explode_timer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDodgeAction m_action;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_probability;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timing;
    
public:
    AVGGadgetMine(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Sensor();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Explode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Sensor();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_Explode();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Sensor();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Explode();
    
};

