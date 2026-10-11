#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGLevelSequencePreloadEntry.h"
#include "VGLevelSequencePreloadSetting.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGLevelSequencePreloadSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLevelSequencePreloadEntry> entries;
    
    UVGLevelSequencePreloadSetting();

};

