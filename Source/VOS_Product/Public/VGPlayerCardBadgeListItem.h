#pragma once
#include "CoreMinimal.h"
#include "VGGridViewItem.h"
#include "VGPlayerCardBadgeListItem.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPlayerCardBadgeListItem : public UVGGridViewItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_list;
    
public:
    UVGPlayerCardBadgeListItem();

};

