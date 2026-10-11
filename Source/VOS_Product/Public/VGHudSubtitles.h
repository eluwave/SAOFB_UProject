#pragma once
#include "CoreMinimal.h"
#include "EVGHudSubtitlesState.h"
#include "VGHudSubtitlesInfo.h"
#include "VGWidget.h"
#include "VGHudSubtitles.generated.h"

class UVGRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudSubtitles : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHudSubtitlesState m_state;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRichTextBlock* m_chara_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGRichTextBlock* m_subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGHudSubtitlesInfo> m_subtitles_list;
    
public:
    UVGHudSubtitles();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

