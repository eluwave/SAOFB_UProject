#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAvatarVoiceEntry.h"
#include "VGAvatarVoiceDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAvatarVoiceDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarVoiceEntry> player_male_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarVoiceEntry> player_female_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarVoiceEntry> afasys_male_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarVoiceEntry> afasys_female_entries;
    
    UVGAvatarVoiceDataAsset();

};

