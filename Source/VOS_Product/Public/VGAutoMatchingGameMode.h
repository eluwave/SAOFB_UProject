#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGAutoMatchingGameMode.generated.h"

class UVGDialog;
class UVGOnlineStartup;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGAutoMatchingGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_connecting_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_message_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGOnlineStartup* m_online_startup;
    
public:
    AVGAutoMatchingGameMode(const FObjectInitializer& ObjectInitializer);

};

