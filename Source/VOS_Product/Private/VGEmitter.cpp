#include "VGEmitter.h"

AVGEmitter::AVGEmitter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDestroyOnSystemFinish = true;
    this->m_attached = NULL;
}

