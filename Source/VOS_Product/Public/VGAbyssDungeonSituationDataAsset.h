#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAbyssDungeonFloorList.h"
#include "VGAbyssDungeonSituationDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAbyssDungeonSituationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAbyssDungeonFloorList> AbyssDungeonSituation;
    
    UVGAbyssDungeonSituationDataAsset();

};

