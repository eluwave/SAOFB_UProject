#pragma once
#include "CoreMinimal.h"
#include "VGGadgetPacket.generated.h"

USTRUCT(BlueprintType)
struct FVGGadgetPacket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 skill_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 obj_id;
    
    VOS_PRODUCT_API FVGGadgetPacket();
};

