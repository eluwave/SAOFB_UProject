#pragma once
#include "CoreMinimal.h"
#include "VGMarkerWidgetItem.generated.h"

class AActor;
class UCanvasPanelSlot;
class UVGWidget;

USTRUCT(BlueprintType)
struct FVGMarkerWidgetItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* bind_actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* marker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    VOS_PRODUCT_API FVGMarkerWidgetItem();
};

