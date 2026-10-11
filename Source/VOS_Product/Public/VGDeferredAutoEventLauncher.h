#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGDeferredAutoEventLauncher.generated.h"

class UVGDialog;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGDeferredAutoEventLauncher : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_notify_dialog;
    
public:
    UVGDeferredAutoEventLauncher();

};

