#pragma once
#include "CoreMinimal.h"
#include "VGHudStatusBase.h"
#include "VGHud3DPartyStatus.generated.h"

class AActor;
class UCanvasPanel;
class UTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHud3DPartyStatus : public UVGHudStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_OtherThanNameBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_OptionPanel;
    
public:
    UVGHud3DPartyStatus();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

