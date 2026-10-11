#include "VGRichTextBlock.h"

UVGRichTextBlock::UVGRichTextBlock() {
    this->Justification = ETextJustify::Left;
    this->AutoWrapText = false;
    this->WrapTextAt = 0.00f;
    this->MinDesiredWidth = 0.00f;
    this->LineHeightPercentage = 1.00f;
    this->Decorators.AddDefaulted(1);
    this->UseTextSymbol = false;
}

void UVGRichTextBlock::SetText(FText InText) {
}

void UVGRichTextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UVGRichTextBlock::SetColor(FLinearColor InColor) {
}

