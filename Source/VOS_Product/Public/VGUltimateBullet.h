#pragma once
#include "CoreMinimal.h"
#include "VGBulletData.h"
#include "VGHitBox.h"
#include "VGUltimateBullet.generated.h"

class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGUltimateBullet : public AVGHitBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGBulletData m_bullet_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_begin_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_end_vfx;
    
public:
    AVGUltimateBullet(const FObjectInitializer& ObjectInitializer);

};

