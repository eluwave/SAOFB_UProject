#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGCustomizeHeader.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCustomizeHeader : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_page;
    
public:
    UVGCustomizeHeader();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveIndex(int32 value);
    
};

