#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGNetworkCleanupGameMode.generated.h"

class UVGDialog;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGNetworkCleanupGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_error_dialog;
    
public:
    AVGNetworkCleanupGameMode(const FObjectInitializer& ObjectInitializer);

};

