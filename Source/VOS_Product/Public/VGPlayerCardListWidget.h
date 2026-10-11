#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGPlayerCardListSortData.h"
#include "VGPlayerCardWidgetBase.h"
#include "VGPlayerCardListWidget.generated.h"

class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPlayerCardListWidget : public UVGPlayerCardWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_sort_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlayerCardListSortData> m_sort_param;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_items;
    
public:
    UVGPlayerCardListWidget();

};

