#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "EVGDungeonDirection.h"
#include "EVGDungeonRoomType.h"
#include "VGDungeonRoom.generated.h"

class AActor;
class AVGAITeam;
class AVGDungeon;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGDungeonRoom : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGDungeon* m_dungeon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_objects;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_warp_search_height;
    
public:
    UVGDungeonRoom();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SpawnFloor(EVGDungeonRoomType Type, float x0, float y0, float z0, float gridSize, int32 rectX, int32 rectY);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorFromClass(UClass* Class, const FTransform& Transform, bool addObject);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorActor(int32 roomPosX, int32 roomPosY, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetBossWarpoutPosition(const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void SetBossEnemyPosition(const FVector& Position);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTeamExterminated(AVGAITeam* Team);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGoalRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossRoom() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlank(int32 roomPosX, int32 roomPosY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGDungeonRoomType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetStackData(TArray<int32>& stacks);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSizeY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSizeX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomSizeY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomSizeX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomRectMinY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomRectMinX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomRectMaxY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomRectMaxX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRoomRectCenter(FVector& pos) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRoomRect(int32& minX, int32& minY, int32& maxX, int32& maxY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRoomPos(const FVector& pos, int32& PosX, int32& PosY) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRoomArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRectMinY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRectMinX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRectMaxY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRectMaxX() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRect(int32& minX, int32& minY, int32& maxX, int32& maxY) const;
    
    UFUNCTION(BlueprintCallable)
    float GetRandomF();
    
    UFUNCTION(BlueprintCallable)
    bool GetRandomB(float probability);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRandom(int32 bits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPortalNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPortalDirection(int32 roomPosX, int32 roomPosY, EVGDungeonDirection& dirA, EVGDungeonDirection& dirB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetLocation(FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGDungeon* GetDungeon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBossWarpoutTransform(FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBossWarpoutPosition(FVector& Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArea() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateStackArray(TArray<int32>& stackArray, float stack1Rate, float stack2Rate);
    
};

