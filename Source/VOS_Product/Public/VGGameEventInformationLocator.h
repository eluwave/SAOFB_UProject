#pragma once
#include "CoreMinimal.h"
#include "EVGDialogButtonStyle.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventSelfSetupLocator.h"
#include "VGGameEventInformationLocator.generated.h"

class UVGDialog;
class UVGGameEventInformationEvent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventInformationLocator : public AVGGameEventSelfSetupLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_dialog_open;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_dialog_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_dialog_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_dialog_body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGDialogButtonStyle::Type> m_dialog_style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameEventInformationEvent* m_event;
    
public:
    AVGGameEventInformationLocator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void NotifyEndEvent();
    
};

