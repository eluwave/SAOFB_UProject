#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGFreeTextInputAgent.generated.h"

class UVGFreeTextInputWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGFreeTextInputAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGFreeTextInputWidget> m_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGFreeTextInputWidget* m_widget;
    
public:
    AVGFreeTextInputAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

