#pragma once
#include "CoreMinimal.h"
#include "VGRoamPlayerState.h"
#include "VGRoomCustomizePlayerState.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRoomCustomizePlayerState : public AVGRoamPlayerState {
    GENERATED_BODY()
public:
    AVGRoomCustomizePlayerState(const FObjectInitializer& ObjectInitializer);

};

