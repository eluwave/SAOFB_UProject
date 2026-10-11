#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGTutorialTaskData.h"
#include "VGTutorialScriptIndex.generated.h"

UCLASS(Blueprintable)
class UVGTutorialScriptIndex : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialTaskData> tasks;
    
    UVGTutorialScriptIndex();

};

