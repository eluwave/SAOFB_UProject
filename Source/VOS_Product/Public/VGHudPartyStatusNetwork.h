#pragma once
#include "CoreMinimal.h"
#include "VGHudPartyStatus.h"
#include "VGHudPartyStatusNetwork.generated.h"

class UVGMarqueePanel;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudPartyStatusNetwork : public UVGHudPartyStatus {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGMarqueePanel*> m_MarqueePanels;
    
public:
    UVGHudPartyStatusNetwork();

};

