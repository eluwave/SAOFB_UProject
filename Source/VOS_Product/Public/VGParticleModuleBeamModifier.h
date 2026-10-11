#pragma once
#include "CoreMinimal.h"
#include "Particles/ParticleModule.h"
#include "Particles/Beam/ParticleModuleBeamModifier.h"
#include "VGParticleModuleBeamModifier.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UVGParticleModuleBeamModifier : public UParticleModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLocalToWorld;
    
    UVGParticleModuleBeamModifier();

};

