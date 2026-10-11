#include "VGScrollImage.h"

UVGScrollImage::UVGScrollImage() {
    this->Texture = NULL;
    this->Material = NULL;
    this->ScrollAmount = 0.00f;
    this->ScrollAngle = 0.00f;
    this->MaterialInstanceDynamic = NULL;
    this->PrevMaterial = NULL;
}

void UVGScrollImage::SetTexture(UTexture* InTexture) {
}

void UVGScrollImage::SetScrollAngle(float InScrollAngle) {
}

void UVGScrollImage::SetScrollAmount(float InScrollAmount) {
}

void UVGScrollImage::SetMaterial(UMaterialInterface* InMaterial) {
}

