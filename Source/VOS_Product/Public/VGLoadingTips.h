#pragma once
#include "CoreMinimal.h"
#include "EVGLoadingTipsTypeId.h"
#include "VGTipsDisplayInfo.h"
#include "VGWidget.h"
#include "VGLoadingTips.generated.h"

class AVGLoadingTipsAgent;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGLoadingTips : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float k_tips_display_sec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 k_max_tips_display_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_tips_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_title_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_description_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGLoadingTipsAgent* m_tips_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_mode_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGLoadingTipsTypeId m_register_tips_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_register_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_register_tips_img;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTipsDisplayInfo> m_display_tips_list;
    
public:
    UVGLoadingTips();

    UFUNCTION(BlueprintCallable)
    void StartTipsAutoChange();
    
    UFUNCTION(BlueprintCallable)
    void SpecifyTipsData(EVGLoadingTipsTypeId tips_type, const FName& ID, UTexture2D* tips_img);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Refresh();
    
};

