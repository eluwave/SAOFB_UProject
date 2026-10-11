#pragma once
#include "CoreMinimal.h"
#include "Particles/Emitter.h"
#include "VGEmitter.generated.h"

class USceneComponent;
class UVGVfxComponent;

UCLASS(Blueprintable)
class AVGEmitter : public AEmitter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVGVfxComponent> m_vfx_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* m_attached;
    
public:
    AVGEmitter(const FObjectInitializer& ObjectInitializer);

};

