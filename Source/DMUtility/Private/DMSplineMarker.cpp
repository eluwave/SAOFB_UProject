#include "DMSplineMarker.h"
#include "Components/ArrowComponent.h"
#include "Camera/CameraComponent.h"
ADMSplineMarker::ADMSplineMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Root"));
    this->Direction = (UArrowComponent*)RootComponent;
    this->CameraViewer = CreateDefaultSubobject<UCameraComponent>(TEXT("CamView"));
    this->DesiredFOV = 50.00f;
    this->CameraViewer->SetupAttachment(RootComponent);
}

