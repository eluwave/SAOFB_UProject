#include "VGCameraActor.h"
#include "VGCameraComponent.h"

AVGCameraActor::AVGCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVGCameraComponent>(TEXT("CameraComponent"))) {
    const UProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

