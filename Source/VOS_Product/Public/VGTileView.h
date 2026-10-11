#pragma once
#include "CoreMinimal.h"
#include "Framework/Views/ITypedTableView.h"
#include "Components/PanelWidget.h"
#include "VGTileView.generated.h"

class UWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTileView : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ItemHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UVGTileView();

    UFUNCTION(BlueprintCallable)
    void SetItemWidth(float Width);
    
    UFUNCTION(BlueprintCallable)
    void SetItemHeight(float Height);
    
    UFUNCTION(BlueprintCallable)
    void RequestListRefresh();
    
};

