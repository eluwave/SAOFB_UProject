#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAfasysSituation.h"
#include "VGAfasysEmotionAsset.generated.h"

UCLASS(Blueprintable)
class UVGAfasysEmotionAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysSituation> situations;
    
    UVGAfasysEmotionAsset();

};

