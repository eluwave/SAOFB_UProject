#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGSituationEntry.h"
#include "VGSituationSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSituationSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSituationEntry> situation_entries;
    
    UVGSituationSetting();

};

