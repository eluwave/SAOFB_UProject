#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Templates/SubclassOf.h"
#include "VGBRResultParam.h"
#include "VGUIActor.h"
#include "VGBRResultAgent.generated.h"

class UVGBRResult;
class UVGQuestRecord;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGBRResultAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_widget_class_references;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGBRResult> m_result_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGBRResult* m_result_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_initialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVGQuestRecord> m_quest_record;
    
public:
    AVGBRResultAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool Start();
    
    UFUNCTION(BlueprintCallable)
    void SetResultParameters(const FVGBRResultParam& param, UVGQuestRecord* QuestRecord);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    void Exit();
    
};

