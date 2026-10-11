#pragma once
#include "CoreMinimal.h"
#include "BTTask_FlyTo.h"
#include "EVGBTHeightType.h"
#include "EVGPadKey.h"
#include "VGBTT_FlyToRoute.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_FlyToRoute : public UBTTask_FlyTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTHeightType m_height_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> m_add_inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_exec_time;
    
public:
    UVGBTT_FlyToRoute();

};

