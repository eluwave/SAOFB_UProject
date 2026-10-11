#pragma once
#include "CoreMinimal.h"
#include "BTTask_FlyTo.h"
#include "EVGBTActorTarget.h"
#include "EVGPadKey.h"
#include "VGBTT_FlyToKey.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_FlyToKey : public UBTTask_FlyTo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EVGPadKey::Type>> m_add_inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_abort_sensed_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_abort_damage_reaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_abort_damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_abort_dead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_exec_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_track_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTActorTarget m_track_target_type;
    
public:
    UVGBTT_FlyToKey();

};

