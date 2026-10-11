#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGCharacterIconReferences.h"
#include "VGWidget.h"
#include "VGBRBattleHUDWidget.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGBRBattleHUDWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> m_icons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVGCharaUnique, FVGCharacterIconReferences> m_icon_list;
    
public:
    UVGBRBattleHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTimerString(const FString& time_str);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScore(int32 index, const FString& score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayer(int32 index, bool is_player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetName(int32 index, const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetKillGoal(const FString& Goal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterIcon(int32 index, UTexture2D* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ScoreCollapse(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayScoreUp(int32 index, const FString& score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayScoreDown(int32 index, const FString& score);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveScore(int32 index, int32 row, int32 column);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

