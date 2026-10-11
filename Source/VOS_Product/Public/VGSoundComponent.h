#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EVGSoundAttribute.h"
#include "VGSoundComponent.generated.h"

class USoundAtomCueSheet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSoundComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> CueSheetsSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCueSheet*> CueSheetsVoice;
    
public:
    UVGSoundComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectorLabel(EVGSoundAttribute::Type Type, const FString& SelectorName, const FString& LabelName);
    
    UFUNCTION(BlueprintCallable)
    void SetCueSheet(EVGSoundAttribute::Type Type, USoundAtomCueSheet* InCueSheet, int32 CueSheetIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentVolume(EVGSoundAttribute::Type Type, float Volume);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeActionOwner();
    
    UFUNCTION(BlueprintCallable)
    int32 AddCueSheet(EVGSoundAttribute::Type Type, USoundAtomCueSheet* InCueSheet);
    
};

