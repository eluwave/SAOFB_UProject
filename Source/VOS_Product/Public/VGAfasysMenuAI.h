#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGAfasysMenuBase.h"
#include "VGAfasysMenuMessage.h"
#include "VGAfasysMenuSelectMessage.h"
#include "VGTextSymbol.h"
#include "VGAfasysMenuAI.generated.h"

class UVGAfasysAICustomizeAsset;
class UVGAfasysMenuWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuAI : public AVGAfasysMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAfasysMenuWidget> m_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysAICustomizeAsset* m_ai_customize_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_main_index_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_top_setting_index_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_start_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_end_check_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuSelectMessage> m_end_check_select_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_end_message;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAfasysMenuWidget* m_widget;
    
public:
    AVGAfasysMenuAI(const FObjectInitializer& ObjectInitializer);

};

