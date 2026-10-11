#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VGGimmickBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGGimmickBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGGimmickBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void WarpTeamNPC(UObject* Context, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SpawnTeam(UObject* Context, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void RecoveryTeam(UObject* Context, const FName& Name);
    
};

