#pragma once
#include "CoreMinimal.h"
#include "VGRoomMaterialData.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FVGRoomMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 material_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* material_ref;
    
    VOS_PRODUCT_API FVGRoomMaterialData();
};

