#pragma once
#include "CoreMinimal.h"
#include "VGHitBox.h"
#include "VGUltimateLauncherArea.generated.h"

class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGUltimateLauncherArea : public AVGHitBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_life_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_end_vfx;
    
public:
    AVGUltimateLauncherArea(const FObjectInitializer& ObjectInitializer);

};

