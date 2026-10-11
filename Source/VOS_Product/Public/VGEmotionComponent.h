#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VGEmotionComponent.generated.h"

class UVGQuestRecord;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGEmotionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UVGEmotionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnCompleteRegister(UVGQuestRecord* quest);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteQuest(const UVGQuestRecord* quest);
    
};

