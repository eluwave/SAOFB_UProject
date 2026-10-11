#pragma once
#include "CoreMinimal.h"
#include "VGPresetSelectPage.h"
#include "VGWidget.h"
#include "VGPresetSelectWidget.generated.h"

class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPresetSelectWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPresetSelectPage> m_pages;
    
public:
    UVGPresetSelectWidget();

};

