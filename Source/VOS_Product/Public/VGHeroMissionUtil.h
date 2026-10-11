#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EVGHeroSelectableCharacter.h"
#include "VGHeroMissionUtil.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGHeroMissionUtil : public UObject {
    GENERATED_BODY()
public:
    UVGHeroMissionUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHeroMissionPartyReleased(UObject* Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertHeroSelectableIdToTextureIndex(EVGHeroSelectableCharacter hero_id);
    
};

