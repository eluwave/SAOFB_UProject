#pragma once
#include "CoreMinimal.h"
#include "VGGridViewBase.h"
#include "VGGridView.generated.h"

class UVGGridItemImpl;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGridView : public UVGGridViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UVGGridItemImpl*> m_item_pool;
    
public:
    UVGGridView();

};

