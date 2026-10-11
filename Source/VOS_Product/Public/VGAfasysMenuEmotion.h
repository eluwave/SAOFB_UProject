#pragma once
#include "CoreMinimal.h"

#include "Misc/StringAssetReference.h"
#include "Templates/SubclassOf.h"
#include "VGAfasysMenuBase.h"
#include "VGAfasysMenuMessage.h"
#include "VGAfasysMenuSelectMessage.h"
#include "VGTextSymbol.h"
#include "VGAfasysMenuEmotion.generated.h"

class UDataTable;
class UVGAfasysEmotionAsset;
class UVGAfasysEmotionSetAsset;
class UVGAfasysMenuWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuEmotion : public AVGAfasysMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAfasysMenuWidget> m_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysEmotionAsset* m_emotion_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_emotion_set_table_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_main_index_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_sub_index_simple_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_sub_index_detail_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_setting_index_simple_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_set_text_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_start_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_detail_lock_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_detail_unlock_message;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuSelectMessage m_emotion_mode_select_message[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_situation_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_emotion_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_simple_check_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuSelectMessage> m_simple_check_select_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_simple_end_message;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAfasysMenuWidget* m_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_set_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGAfasysEmotionSetAsset*> m_emotion_set_assets;
    
public:
    AVGAfasysMenuEmotion(const FObjectInitializer& ObjectInitializer);

};

