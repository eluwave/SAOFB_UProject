#pragma once
#include "CoreMinimal.h"

#include "Widgets/Layout/SScrollBox.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/ScrollBox.h"
#include "Components/PanelWidget.h"
#include "VGScrollBox.generated.h"

class USlateWidgetStyleAsset;
class UWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGScrollBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle WidgetBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* BarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScrollbarThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowOverscroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineFeedOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAreaOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScrollAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDescendantScrollDestination NavigationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationScrollPadding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserScrolledEvent OnUserScrolled;
    
    UVGScrollBox();

    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(float NewScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollAreaRange(float NewScrollAreaRange);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollAreaOffset(float NewScrollAreaOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetLineFeedOffset(float NewLineFeedOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowOverscroll(bool NewAllowOverscroll);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDesintion);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToStart();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffsetLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffset() const;
    
};

