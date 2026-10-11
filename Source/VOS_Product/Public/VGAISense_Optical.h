#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"

#include "VGAIOpticalEvent.h"
#include "VGAISense_Optical.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGAISense_Optical : public UAISense {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAIOpticalEvent> NoiseEvents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedOfSoundSq;
    
public:
    UVGAISense_Optical();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ReportOpticalEvent(UObject* WorldContext, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName tag, float LoudnessScale);
    
};

