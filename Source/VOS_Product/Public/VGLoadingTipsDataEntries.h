#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGLoadingTipsPageDataEntry.h"
#include "VGLoadingTipsDataEntries.generated.h"

UCLASS(Blueprintable)
class UVGLoadingTipsDataEntries : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLoadingTipsPageDataEntry> SkillEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLoadingTipsPageDataEntry> TutorialEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLoadingTipsPageDataEntry> WeaponEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGLoadingTipsPageDataEntry> MaterialEntries;
    
    UVGLoadingTipsDataEntries();

};

