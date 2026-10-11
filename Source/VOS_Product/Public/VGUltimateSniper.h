#pragma once
#include "CoreMinimal.h"
#include "VGUltimateBullet.h"
#include "VGUltimateSniper.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGUltimateSniper : public AVGUltimateBullet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_penetrate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_part_hit_max;
    
public:
    AVGUltimateSniper(const FObjectInitializer& ObjectInitializer);

};

