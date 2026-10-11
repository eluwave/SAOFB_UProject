#pragma once
#include "CoreMinimal.h"
#include "VGStatusWidgetItem.generated.h"

class AActor;
class UCanvasPanelSlot;
class UVGHud3DStatus;

USTRUCT(BlueprintType)
struct FVGStatusWidgetItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* bind_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHud3DStatus* status_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    VOS_PRODUCT_API FVGStatusWidgetItem();
};

