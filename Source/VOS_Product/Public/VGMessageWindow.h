#pragma once
#include "CoreMinimal.h"
#include "VGAdvanceMessageDelegate.h"
#include "VGWidget.h"
#include "VGMessageWindow.generated.h"

class UVGRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGMessageWindow : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAdvanceMessage AdvanceMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_message_wait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RemoveWhenClosed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRichTextBlock* m_tb_caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRichTextBlock* m_tb_body;
    
public:
    UVGMessageWindow();

    UFUNCTION(BlueprintCallable)
    void SetText(FText Body);
    
    UFUNCTION(BlueprintCallable)
    void SetCaption(FText Caption);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoCloseTime(float Time);
    
    UFUNCTION(BlueprintCallable)
    void Open(bool isInteractive);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateMessage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnReachMessage();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpened() const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

