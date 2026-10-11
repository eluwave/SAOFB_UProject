#include "VGRetainerBox.h"

UVGRetainerBox::UVGRetainerBox() {
    this->phase = 0;
    this->PhaseCount = 1;
    this->EffectMaterial = NULL;
    this->TextureParameter = TEXT("Texture");
}

void UVGRetainerBox::SetTextureParameter(FName NewTextureParameter) {
}

void UVGRetainerBox::SetEffectMaterial(UMaterialInterface* NewEffectMaterial) {
}

UMaterialInstanceDynamic* UVGRetainerBox::GetEffectMaterial() const {
    return NULL;
}

