#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGAfasysMenuMessage.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysMenuMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol message_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 voice_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 add_rand_voice_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 action_id;
    
    FVGAfasysMenuMessage();
};

