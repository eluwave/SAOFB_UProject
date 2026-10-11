#pragma once
#include "CoreMinimal.h"
#include "VGAvatarPreset.h"
#include "VGGameplayData.h"
#include "VGPlayerData.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGPlayerData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarPreset> m_avatar_presets_player_male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarPreset> m_avatar_presets_player_female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarPreset> m_avatar_presets_afasys_male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarPreset> m_avatar_presets_afasys_female;
    
public:
    UVGPlayerData();

};

