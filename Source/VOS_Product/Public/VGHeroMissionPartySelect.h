#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGHeroSelectableCharacter.h"
#include "VGHeroMissionPartySelect.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroMissionPartySelect : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGHeroSelectableCharacter> selectable_chara_ids;
    
    VOS_PRODUCT_API FVGHeroMissionPartySelect();
};

