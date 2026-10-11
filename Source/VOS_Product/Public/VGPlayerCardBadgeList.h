#pragma once
#include "CoreMinimal.h"
#include "VGTabbedListView.h"
#include "VGPlayerCardBadgeList.generated.h"

class UVGPlayerCardBadgeListItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPlayerCardBadgeList : public UVGTabbedListView {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGPlayerCardBadgeListItem*> m_list_items;
    
public:
    UVGPlayerCardBadgeList();

};

