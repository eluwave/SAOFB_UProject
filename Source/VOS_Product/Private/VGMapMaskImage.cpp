#include "VGMapMaskImage.h"

UVGMapMaskImage::UVGMapMaskImage() {
    this->Texture = NULL;
    this->Mask = NULL;
    this->FadeMask = NULL;
    this->threshold = 0.00f;
    this->Material = NULL;
    this->MaterialInstanceDynamic = NULL;
    this->PrevMaterial = NULL;
}

void UVGMapMaskImage::SetThreshold(float InThreshold) {
}

void UVGMapMaskImage::SetTexture(UTexture* InTexture) {
}

void UVGMapMaskImage::SetMaterial(UMaterialInterface* InMaterial) {
}

void UVGMapMaskImage::SetMask(UTexture* InMask) {
}

void UVGMapMaskImage::SetFadeMask(UTexture* InMask) {
}

