#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGNameEntryWidget.generated.h"

class UVGGridViewBase;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGNameEntryWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridViewBase* m_gv_main;
    
public:
    UVGNameEntryWidget();

};

