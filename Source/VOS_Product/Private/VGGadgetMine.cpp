#include "VGGadgetMine.h"
#include "Components/SphereComponent.h"
AVGGadgetMine::AVGGadgetMine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_sensor_component = CreateDefaultSubobject<USphereComponent>(TEXT("Sensor"));
    this->m_explode_class = NULL;
    this->m_explode_timer = 2.00f;
    this->m_radius = 0.00f;
    this->m_action = EVGDodgeAction::None;
    this->m_probability = 100.00f;
    this->m_duration = 0.10f;
    this->m_timing = 0.50f;
}

void AVGGadgetMine::Server_Sensor_Implementation() {
}
bool AVGGadgetMine::Server_Sensor_Validate() {
    return true;
}

void AVGGadgetMine::Server_Explode_Implementation() {
}
bool AVGGadgetMine::Server_Explode_Validate() {
    return true;
}

void AVGGadgetMine::MulticastSimulated_Sensor_Implementation() {
}

void AVGGadgetMine::MulticastSimulated_Explode_Implementation() {
}

void AVGGadgetMine::Multicast_Sensor_Implementation() {
}

void AVGGadgetMine::Multicast_Explode_Implementation() {
}

