#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGMailAgent.generated.h"

class UDataTable;
class UVGMailWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMailAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMailWidget> m_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_mail_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMailWidget* m_widget;
    
public:
    AVGMailAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetMailID(FName ID);
    
};

