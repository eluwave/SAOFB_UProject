#pragma once
#include "CoreMinimal.h"

#include "VGAfasysMenuMessage.h"
#include "VGTextSymbol.h"
#include "VGAfasysMenuSelectMessage.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAfasysMenuSelectMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol select_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_new;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_change_select_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor select_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_decide_disable;
    
    FVGAfasysMenuSelectMessage();
};

