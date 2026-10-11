#include "VGMyRoomLevelScriptActor.h"

AVGMyRoomLevelScriptActor::AVGMyRoomLevelScriptActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_activation_conditions.AddDefaulted(3);
}

