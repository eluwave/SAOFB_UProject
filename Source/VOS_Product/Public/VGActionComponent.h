#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EVGActionState.h"
#include "VGActionSlot.h"
#include "VGBlendSpaceParam.h"
#include "VGActionComponent.generated.h"

class UVGActionLibrary;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGActionComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGActionLibrary*> m_action_libraries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGActionSlot> m_actions;
    
public:
    UVGActionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TriggerAction(int32 action_id, float blend_coeff, float play_rate);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void Server_SetBlendSpaceParam(uint8 flag, FVGBlendSpaceParam value);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_SetActionLibrary(UVGActionLibrary* action_library, int32 index);
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetAction(int32 action_layer);
    
    UFUNCTION(BlueprintCallable)
    void ReserveAction(int32 action_id, float delay_time, float blend_coeff, float play_rate, bool is_local);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_TriggerAction(int32 action_id, float blend_coeff, float play_rate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastSimulated_SetBlendSpaceParam(uint8 flag, FVGBlendSpaceParam value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSimulated_SetActionLibrary(UVGActionLibrary* action_library, int32 index);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_TriggerAction(int32 action_id, float blend_coeff, float play_rate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetPermissionBulletLine(bool enable);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_SetBlendSpaceParam(uint8 flag, FVGBlendSpaceParam value);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetAlertTime(float Time);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SetActionLibrary(UVGActionLibrary* action_library, int32 index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAction(int32 action_id) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyActionStates(const TArray<EVGActionState> states) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActionState(EVGActionState State) const;
    
};

