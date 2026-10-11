#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMapGameEventData.h"
#include "VGMapGameEventSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMapGameEventSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapGameEventData> GameEvent;
    
    UVGMapGameEventSetting();

};

