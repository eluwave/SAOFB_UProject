#include "VGNetSyncProjectile.h"

AVGNetSyncProjectile::AVGNetSyncProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void AVGNetSyncProjectile::Multicast_State_Implementation(FVGNetSyncProjectileStatePacket packet) {
}

