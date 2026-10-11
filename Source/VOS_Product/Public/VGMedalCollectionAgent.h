#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGMedalCollectionAgent.generated.h"

class AVGScorestreak;
class UVGMedalCollectionWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMedalCollectionAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMedalCollectionWidget> m_medal_collection_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGScorestreak> m_score_streak_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMedalCollectionWidget* m_medal_collection_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGScorestreak* m_score_streak;
    
public:
    AVGMedalCollectionAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

