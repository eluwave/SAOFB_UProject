#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGDungeonPassageConfig.generated.h"

class UVGDungeonRoom;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGDungeonPassageConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDungeonRoom> room_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 weight;
    
    FVGDungeonPassageConfig();
};

