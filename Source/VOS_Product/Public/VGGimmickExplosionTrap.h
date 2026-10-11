#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGimmickTrap.h"
#include "VGHitDesc.h"
#include "VGGimmickExplosionTrap.generated.h"

class AVGHitBox;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGimmickExplosionTrap : public AVGGimmickTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGHitBox> hit_box_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool b_hit_override;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHitDesc hit_desc;
    
public:
    AVGGimmickExplosionTrap(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AVGHitBox* SpawnExplosionHitBox();
    
};

