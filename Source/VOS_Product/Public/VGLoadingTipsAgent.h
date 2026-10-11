#pragma once
#include "CoreMinimal.h"
#include "EVGLoadingTipsTypeId.h"
#include "VGUIActor.h"
#include "VGLoadingTipsAgent.generated.h"

class AVGLoadingTipsAgent;
class UObject;
class UTexture2D;
class UVGLoadingTips;
class UVGTipsAgentProxyBase;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGLoadingTipsAgent : public AVGUIActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGLoadingTips* m_tips_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGLoadingTipsTypeId m_tips_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTipsAgentProxyBase* m_tips_agent_proxy;
    
public:
    AVGLoadingTipsAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLoading();
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugMode(bool isEnable);
    
    UFUNCTION(BlueprintCallable)
    bool QueryOpen(int32 max_tips_display_num, UVGLoadingTips* tutorial_widget);
    
    UFUNCTION(BlueprintCallable)
    static AVGLoadingTipsAgent* OpenLoadingTips(UObject* Context, UVGLoadingTips* tips_widget, int32 max_tips_display_num, EVGLoadingTipsTypeId tips_type, const FName& ID, UTexture2D* tips_img);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyLoadingTipsUp(UObject* Context, bool StrictCheck);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

