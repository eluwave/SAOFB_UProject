#pragma once
#include "CoreMinimal.h"
#include "VGGridViewBase.h"
#include "VGTableGridView.generated.h"

class UObject;
class UVGGridItemImpl;
class UWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTableGridView : public UVGGridViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UVGGridItemImpl*> m_item_pool;
    
public:
    UVGTableGridView();

protected:
    UFUNCTION(BlueprintCallable)
    UWidget* OnGenerateRowUObjectEventHandler(UObject* Item);
    
};

