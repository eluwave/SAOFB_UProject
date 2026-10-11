#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "VGRequestToLeaveInterface.h"
#include "VGGadgetInstallation.generated.h"

class UVGSkillHeader;
class UVGVfxComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGadgetInstallation : public AStaticMeshActor, public IVGRequestToLeaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGSkillHeader* m_skill_header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_life_span;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OwnerId, meta=(AllowPrivateAccess=true))
    int32 m_owner_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
public:
    AVGGadgetInstallation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_Remove();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OwnerId();
    

    // Fix for true pure virtual functions not being implemented
};

