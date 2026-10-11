#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGHitBox.h"
#include "VGSoundCueInfo.h"
#include "VGIcePillar.generated.h"

class AActor;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGIcePillar : public AVGHitBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGVfxSignalAsset*> m_end_vfx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> m_ice_pillar_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGHitBox> m_begin_hitbox_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundCueInfo> m_hitbox_end_se;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_ice_pillar;
    
public:
    AVGIcePillar(const FObjectInitializer& ObjectInitializer);

};

