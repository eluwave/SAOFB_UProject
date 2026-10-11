#pragma once
#include "CoreMinimal.h"
#include "EVGGameEventInteractPromptType.h"
#include "VGWidget.h"
#include "VGGameEventPromptWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGGameEventPromptWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_transparency;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_decide_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* m_resurrect_icon;
    
public:
    UVGGameEventPromptWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPromptTypeChanged(EVGGameEventInteractPromptType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetResurrectIcon() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGGameEventInteractPromptType GetPromptType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetDecideIcon() const;
    
};

