#pragma once
#include "CoreMinimal.h"
#include "EVGRoomSettingLocation.h"
#include "VGRoomItemID.generated.h"

USTRUCT(BlueprintType)
struct FVGRoomItemID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGRoomSettingLocation::Type> Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    VOS_PRODUCT_API FVGRoomItemID();
};

