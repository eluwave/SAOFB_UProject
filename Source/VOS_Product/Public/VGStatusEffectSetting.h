#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGStatusEffectSetting.generated.h"

UCLASS(Blueprintable, Config=Game)
class UVGStatusEffectSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_border_s;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_border_m;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_border_l;
    
    UVGStatusEffectSetting();

};

