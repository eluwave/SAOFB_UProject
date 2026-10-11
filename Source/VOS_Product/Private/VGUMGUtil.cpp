#include "VGUMGUtil.h"

UVGUMGUtil::UVGUMGUtil() {
    this->m_text_asset_table.AddDefaulted(1);
    this->m_highlight_devtext = true;
}

FVGTextSymbol UVGUMGUtil::StringToTextSymbol(const FString& value) {
    return FVGTextSymbol{};
}

bool UVGUMGUtil::GetLocalizedText(const FVGTextSymbol& symbol, FText& OutVal) {
    return false;
}

void UVGUMGUtil::ChangeCurrentCulture(const FString& Culture) {
}

