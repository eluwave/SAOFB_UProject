#pragma once
#include "CoreMinimal.h"
#include "VGGadgetInstallation.h"
#include "VGSoundCueInfo.h"
#include "VGGadgetRevive.generated.h"

class UCapsuleComponent;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGadgetRevive : public AVGGadgetInstallation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_area_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* m_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* m_end_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_begin_se;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_end_se;
    
public:
    AVGGadgetRevive(const FObjectInitializer& ObjectInitializer);

};

