#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Templates/SubclassOf.h"
#include "VGParticleModuleEventReceiverDecal.generated.h"

class ADecalActor;

UCLASS(Blueprintable, EditInlineNew)
class UVGParticleModuleEventReceiverDecal : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADecalActor> DecalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DecalMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttach;
    
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ADecalActor>> m_decals;
    
public:
    UVGParticleModuleEventReceiverDecal();

};

