#pragma once
#include "CoreMinimal.h"
#include "VGDeadIconItem.generated.h"

class AActor;
class UCanvasPanelSlot;
class UVGWidget;

USTRUCT(BlueprintType)
struct FVGDeadIconItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* bind_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* dead_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    VOS_PRODUCT_API FVGDeadIconItem();
};

