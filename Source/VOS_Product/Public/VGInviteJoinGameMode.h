#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGInviteJoinGameMode.generated.h"

class UVGDialog;
class UVGOnlineStartup;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGInviteJoinGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_connecting_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_error_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGOnlineStartup* m_online_startup;
    
public:
    AVGInviteJoinGameMode(const FObjectInitializer& ObjectInitializer);

};

