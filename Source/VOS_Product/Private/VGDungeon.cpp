#include "VGDungeon.h"
#include "Components/ArrowComponent.h"
#include "Net/UnrealNetwork.h"

AVGDungeon::AVGDungeon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const UProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Root"));
    this->m_seed = 0;
    this->m_visibility_controll = true;
    this->m_spawn_slice_num = 8;
    this->m_warp_portal = NULL;
    this->m_collision_actor = NULL;
    this->m_navmesh_actor = NULL;
}

AActor* AVGDungeon::SpawnActorFromClass(UClass* Class, const FTransform& Transform) {
    return NULL;
}

void AVGDungeon::Server_BuildFinished_Reliable_Implementation(AActor* Actor) {
}
bool AVGDungeon::Server_BuildFinished_Reliable_Validate(AActor* Actor) {
    return true;
}

void AVGDungeon::OnRep_Seed() {
}

void AVGDungeon::Multicast_WarpCharacter_Reliable_Implementation(int32 UniqueId) {
}

void AVGDungeon::Multicast_SetDoorLocked_Reliable_Implementation(int32 doorID, bool locked) {
}

void AVGDungeon::Multicast_BuildFinished_Reliable_Implementation() {
}

float AVGDungeon::GetWarpSearchHeight(const FVector& pos) const {
    return 0.0f;
}

float AVGDungeon::GetRandomF() {
    return 0.0f;
}

bool AVGDungeon::GetRandomB(float probability) {
    return false;
}

int32 AVGDungeon::GetRandom(int32 bits) {
    return 0;
}

void AVGDungeon::GetBossWarpoutTransform(FTransform& Transform) {
}

void AVGDungeon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVGDungeon, m_seed);
}

