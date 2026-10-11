#include "VGGradationImage.h"

UVGGradationImage::UVGGradationImage() {
    this->Texture = NULL;
    this->Material = NULL;
    this->Angle = 0.00f;
    this->GradationWidth = 1.00f;
    this->ColorWidthA = 0.00f;
    this->MaterialInstanceDynamic = NULL;
    this->PrevMaterial = NULL;
}

void UVGGradationImage::SetTexture(UTexture* InTexture) {
}

void UVGGradationImage::SetMaterial(UMaterialInterface* InMaterial) {
}

void UVGGradationImage::SetGradationWidth(float InParam) {
}

void UVGGradationImage::SetColorWidthA(float InParam) {
}

void UVGGradationImage::SetColorB(FLinearColor InColor) {
}

void UVGGradationImage::SetColorA(FLinearColor InColor) {
}

void UVGGradationImage::SetAngle(float InParam) {
}

