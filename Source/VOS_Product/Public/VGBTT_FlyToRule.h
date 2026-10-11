#pragma once
#include "CoreMinimal.h"
#include "BTTask_FlyTo.h"
#include "VGBTT_FlyToRule.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_FlyToRule : public UBTTask_FlyTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_refresh_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stagnate_wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_stagnate_range;
    
public:
    UVGBTT_FlyToRule();

};

