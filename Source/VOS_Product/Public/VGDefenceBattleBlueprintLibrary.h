#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VGDefenceBattleBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGDefenceBattleBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGDefenceBattleBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetDefenceTeamLeave(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBossLiving(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static float GetMaxDistanceOfGoalAndBoss(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    static bool GetFriendParam(UObject* Context, FText& Name, float& hp_percent);
    
    UFUNCTION(BlueprintCallable)
    static float GetDistanceOfGoalAndBoss(UObject* Context);
    
};

