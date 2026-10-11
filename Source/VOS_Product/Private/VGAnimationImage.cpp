#include "VGAnimationImage.h"

UVGAnimationImage::UVGAnimationImage() {
    this->Texture = NULL;
    this->Material = NULL;
    this->FrameNumX = 1;
    this->FrameNumY = 1;
    this->Frame = 0.00f;
    this->MaterialInstanceDynamic = NULL;
    this->PrevMaterial = NULL;
}

void UVGAnimationImage::SetTexture(UTexture* InTexture) {
}

void UVGAnimationImage::SetMaterial(UMaterialInterface* InMaterial) {
}

void UVGAnimationImage::SetFrameNumY(int32 InParam) {
}

void UVGAnimationImage::SetFrameNumX(int32 InParam) {
}

void UVGAnimationImage::SetFrame(float InParam) {
}

