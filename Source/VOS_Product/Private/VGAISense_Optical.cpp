#include "VGAISense_Optical.h"

UVGAISense_Optical::UVGAISense_Optical() {
    this->SpeedOfSoundSq = 0.00f;
}

void UVGAISense_Optical::ReportOpticalEvent(UObject* WorldContext, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName tag, float LoudnessScale) {
}

