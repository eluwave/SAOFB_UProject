#include "VGProjectilePacketComponent.h"

UVGProjectilePacketComponent::UVGProjectilePacketComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_owner = NULL;
}

void UVGProjectilePacketComponent::Server_Destroy_Implementation(FVGNetSyncProjectileDestroyPacket packet) {
}
bool UVGProjectilePacketComponent::Server_Destroy_Validate(FVGNetSyncProjectileDestroyPacket packet) {
    return true;
}

void UVGProjectilePacketComponent::MulticastSimulated_Destroy_Implementation(FVGNetSyncProjectileDestroyPacket packet) {
}

void UVGProjectilePacketComponent::Multicast_Destroy_Implementation(FVGNetSyncProjectileDestroyPacket packet) {
}

