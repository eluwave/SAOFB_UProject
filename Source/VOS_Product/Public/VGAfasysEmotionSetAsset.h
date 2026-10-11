#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAfasysEmotion.h"
#include "VGTextSymbol.h"
#include "VGAfasysEmotionSetAsset.generated.h"

UCLASS(Blueprintable)
class UVGAfasysEmotionSetAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName emotion_set_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysEmotion> emotions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol emotion_set_name;
    
    UVGAfasysEmotionSetAsset();

};

