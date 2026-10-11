#pragma once
#include "CoreMinimal.h"
#include "EVGAfasysAIBattleStyle.h"
#include "VGAfasysAICustomizeBase.h"
#include "VGAfasysAICustomizeBattleStyle.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysAICustomizeBattleStyle : public FVGAfasysAICustomizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysAIBattleStyle::Type> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_first_attack;
    
    VOS_PRODUCT_API FVGAfasysAICustomizeBattleStyle();
};

