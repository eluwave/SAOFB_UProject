#pragma once
#include "CoreMinimal.h"
#include "VGTitleStateBase.h"
#include "VGAdvertiseState.generated.h"

class UDataTable;
class UVGAdvertiseWidget;
class UVGDialog;

UCLASS(Blueprintable)
class AVGAdvertiseState : public AVGTitleStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> m_advertise_datas;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAdvertiseWidget* m_advertise_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
public:
    AVGAdvertiseState(const FObjectInitializer& ObjectInitializer);

};

