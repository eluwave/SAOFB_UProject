#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "InputHorizontalCorsurDelegate.h"
#include "VGWidget.h"
#include "VGOptionSteamKeySet.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGOptionSteamKeySet : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputHorizontalCorsur OnInputHorizontalCorsur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_key_set_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey m_key_set;
    
    UVGOptionSteamKeySet();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnSelectKeySet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNoSymbolText(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyName(FName key_name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKeyIcon(UTexture2D* tex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectKeySet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetKeyIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void KeySetVisibility(bool flag);
    
    UFUNCTION(BlueprintCallable)
    void Init(int32 index);
    
};

