#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "EVGAfasysEmotionSituation.h"
#include "VGBTT_SetAfasysEmotion.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_SetAfasysEmotion : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysEmotionSituation::Type> situation;
    
public:
    UVGBTT_SetAfasysEmotion();

};

