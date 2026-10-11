#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGStatusParam.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGStatusParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_experience_limit;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_avatar_enemy_level_max;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_experience_limit_trial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_reputation_limit_trial;
    
public:
    UVGStatusParam();

};

