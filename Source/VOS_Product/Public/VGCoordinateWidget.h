#pragma once
#include "CoreMinimal.h"
#include "VGColorCoordinatePage.h"
#include "VGWidget.h"
#include "VGCoordinateWidget.generated.h"

class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoordinateWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGColorCoordinatePage> m_pages;
    
public:
    UVGCoordinateWidget();

};

