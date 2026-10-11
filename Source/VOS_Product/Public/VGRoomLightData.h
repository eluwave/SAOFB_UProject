#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGRoomLightData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVGRoomLightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 light_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> actort_class;
    
    VOS_PRODUCT_API FVGRoomLightData();
};

