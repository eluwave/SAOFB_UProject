#pragma once
#include "CoreMinimal.h"
#include "VGTextSymbol.h"
#include "VGTutorialQuoteData.h"
#include "VGTutorialScript.h"
#include "VGTutorialScriptBase.generated.h"

class AActor;
class AVGAITeam;
class AVGBattleCharacter;
class AVGTutorialScreenAgent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTutorialScriptBase : public UVGTutorialScript {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTextSymbol> HelpTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHelpTextInitialVisiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialQuoteData> PreQuotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTutorialQuoteData> PostQuotes;
    
public:
    UVGTutorialScriptBase();

protected:
    UFUNCTION(BlueprintCallable)
    int32 ShowQuote(const FVGTutorialQuoteData& QuoteData, bool ShowImmediately);
    
    UFUNCTION(BlueprintCallable)
    void ShowInstructions();
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyTeamRespawnTimes(const FName& teamName, int32 Times);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptStep(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ScriptBegin();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInstructions();
    
    UFUNCTION(BlueprintCallable)
    AVGTutorialScreenAgent* OpenTutorialScreen(const FName& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTriggerBoxOverlapBegin(const FName& ScriptId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSubtitleCompleted(int32 SubtitleId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOtherScriptStarted(const FName& ScriptId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOtherScriptCompleted(const FName& ScriptId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShwoingPreQuote() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHudSubtitlesDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGAITeam* GetTeam(const FName& teamName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetBattleCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorByNameInWorld(const FString& Name) const;
    
    UFUNCTION(BlueprintCallable)
    void EndScriptWithPostQuote();
    
};

