#include "VGScrollBox.h"
#include "Layout/Clipping.h"
UVGScrollBox::UVGScrollBox() {
    this->bIsVariable = false;
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->Style = NULL;
    this->BarStyle = NULL;
    this->Orientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->AlwaysShowScrollbar = false;
    this->AllowOverscroll = true;
    this->LineFeedOffset = 0.00f;
    this->ScrollAreaOffset = 0.00f;
    this->ScrollAreaRange = 1.00f;
    this->NavigationDestination = EDescendantScrollDestination::IntoView;
    this->NavigationScrollPadding = 0.00f;
}

void UVGScrollBox::SetScrollOffset(float NewScrollOffset) {
}

void UVGScrollBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility) {
}

void UVGScrollBox::SetScrollbarThickness(const FVector2D& NewScrollbarThickness) {
}

void UVGScrollBox::SetScrollAreaRange(float NewScrollAreaRange) {
}

void UVGScrollBox::SetScrollAreaOffset(float NewScrollAreaOffset) {
}

void UVGScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation) {
}

void UVGScrollBox::SetLineFeedOffset(float NewLineFeedOffset) {
}

void UVGScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
}

void UVGScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
}

void UVGScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDesintion) {
}

void UVGScrollBox::ScrollToStart() {
}

void UVGScrollBox::ScrollToEnd() {
}

float UVGScrollBox::GetScrollOffsetLimit() const {
    return 0.0f;
}

float UVGScrollBox::GetScrollOffset() const {
    return 0.0f;
}

