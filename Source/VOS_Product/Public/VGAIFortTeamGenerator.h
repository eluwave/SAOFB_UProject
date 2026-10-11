#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "VGAIFortTeamGenerator.generated.h"

class UVGVfxComponent;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIFortTeamGenerator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_generate_effects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_generate_offsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGVfxComponent* m_vfx_component;
    
public:
    AVGAIFortTeamGenerator(const FObjectInitializer& ObjectInitializer);

};

