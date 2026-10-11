#pragma once
#include "CoreMinimal.h"

#include "Fonts/SlateFontInfo.h"
#include "EVGHudLogType.h"
#include "EVGStatusAilment.h"
#include "EVGStatusBuff.h"
#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGHudLogWindow.generated.h"

class AVGBattleCharacter;
class UBorder;
class UCanvasPanel;
class UImage;
class UScrollBox;
class UVGStatusAilmentIcon;
class UVGStatusBuffIcon;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudLogWindow : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor CommonTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PriseTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BuffTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebuffTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor RecoveryTextColor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TextStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLogNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TopMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol ExpLogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol BuffLogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol DebuffLogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol RecoveryLogText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol LifeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol AilmentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGStatusAilmentIcon* AilmentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGStatusBuffIcon* BuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGStatusBuffIcon* DebuffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* m_WidgetRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_BasePanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* m_SbLogPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_LogBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_AppendLogBuffer;
    
public:
    UVGHudLogWindow();

    UFUNCTION(BlueprintCallable)
    void SetVisibleFlag(bool is_visible);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLogRemoved(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLogAdded(int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void AppendRecoveryLifeLog(AVGBattleCharacter* Owner, AVGBattleCharacter* Target);
    
    UFUNCTION(BlueprintCallable)
    void AppendRecoveryAilmentLog(AVGBattleCharacter* Owner, AVGBattleCharacter* Target, EVGStatusAilment ailment);
    
    UFUNCTION(BlueprintCallable)
    void AppendLog(FText Text, EVGHudLogType::Type Type);
    
    UFUNCTION(BlueprintCallable)
    void AppendGetExpLog(int32 Exp);
    
    UFUNCTION(BlueprintCallable)
    void AppendDebuffEffectLog(EVGStatusBuff debuff);
    
    UFUNCTION(BlueprintCallable)
    void AppendBuffEffectLog(EVGStatusBuff buff);
    
};

