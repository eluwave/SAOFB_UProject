#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGAnimNotify.h"
#include "VGANCameraShake.generated.h"

class UCameraShake;

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANCameraShake : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShake> shake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float inner_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float outer_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_local_user;
    
    UVGANCameraShake();

};

