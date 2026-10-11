#pragma once
#include "CoreMinimal.h"
#include "EVGTargetIconType.h"
#include "VGWidget.h"
#include "VGHudOffScreen.generated.h"

class UVGMapIcon;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudOffScreen : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMapIcon* m_MapIcon;
    
public:
    UVGHudOffScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGTargetIconType GetTargetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

