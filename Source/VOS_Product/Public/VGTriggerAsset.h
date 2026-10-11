#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGTriggerCondition.h"
#include "VGTriggerAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTriggerAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_uid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_action_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTriggerCondition> m_trigger_conditions;
    
public:
    UVGTriggerAsset();

};

