#include "VGDungeonRoom.h"

UVGDungeonRoom::UVGDungeonRoom() {
    this->m_dungeon = NULL;
    this->m_warp_search_height = 0.00f;
}

AActor* UVGDungeonRoom::SpawnActorFromClass(UClass* Class, const FTransform& Transform, bool addObject) {
    return NULL;
}

void UVGDungeonRoom::SetDoorActor(int32 roomPosX, int32 roomPosY, AActor* Actor) {
}

void UVGDungeonRoom::SetBossWarpoutPosition(const FVector& Position) {
}

void UVGDungeonRoom::SetBossEnemyPosition(const FVector& Position) {
}

void UVGDungeonRoom::OnTeamExterminated(AVGAITeam* Team) {
}

bool UVGDungeonRoom::IsStartRoom() const {
    return false;
}

bool UVGDungeonRoom::IsGoalRoom() const {
    return false;
}

bool UVGDungeonRoom::IsBossRoom() const {
    return false;
}

bool UVGDungeonRoom::IsBlank(int32 roomPosX, int32 roomPosY) const {
    return false;
}

EVGDungeonRoomType UVGDungeonRoom::GetType() const {
    return EVGDungeonRoomType::Blank;
}

int32 UVGDungeonRoom::GetSizeY() const {
    return 0;
}

int32 UVGDungeonRoom::GetSizeX() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomSizeY() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomSizeX() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomRectMinY() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomRectMinX() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomRectMaxY() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomRectMaxX() const {
    return 0;
}

void UVGDungeonRoom::GetRoomRectCenter(FVector& pos) const {
}

void UVGDungeonRoom::GetRoomRect(int32& minX, int32& minY, int32& maxX, int32& maxY) const {
}

bool UVGDungeonRoom::GetRoomPos(const FVector& pos, int32& PosX, int32& PosY) const {
    return false;
}

int32 UVGDungeonRoom::GetRoomID() const {
    return 0;
}

int32 UVGDungeonRoom::GetRoomArea() const {
    return 0;
}

int32 UVGDungeonRoom::GetRectMinY() const {
    return 0;
}

int32 UVGDungeonRoom::GetRectMinX() const {
    return 0;
}

int32 UVGDungeonRoom::GetRectMaxY() const {
    return 0;
}

int32 UVGDungeonRoom::GetRectMaxX() const {
    return 0;
}

void UVGDungeonRoom::GetRect(int32& minX, int32& minY, int32& maxX, int32& maxY) const {
}

float UVGDungeonRoom::GetRandomF() {
    return 0.0f;
}

bool UVGDungeonRoom::GetRandomB(float probability) {
    return false;
}

int32 UVGDungeonRoom::GetRandom(int32 bits) {
    return 0;
}

int32 UVGDungeonRoom::GetPortalNum() const {
    return 0;
}

int32 UVGDungeonRoom::GetPortalDirection(int32 roomPosX, int32 roomPosY, EVGDungeonDirection& dirA, EVGDungeonDirection& dirB) const {
    return 0;
}

void UVGDungeonRoom::GetLocation(FVector& Location) const {
}

AVGDungeon* UVGDungeonRoom::GetDungeon() const {
    return NULL;
}

void UVGDungeonRoom::GetBossWarpoutTransform(FTransform& Transform) {
}

void UVGDungeonRoom::GetBossWarpoutPosition(FVector& Position) {
}

int32 UVGDungeonRoom::GetArea() const {
    return 0;
}

void UVGDungeonRoom::CreateStackArray(TArray<int32>& stackArray, float stack1Rate, float stack2Rate) {
}

