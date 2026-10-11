#pragma once
#include "CoreMinimal.h"
#include "EVGBTTargetMask.h"
#include "EVGBTTargetRole.h"
#include "EVGBTTargetRule.h"
#include "EVGBTTargetTeam.h"
#include "VGAIUnitSearch.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAIUnitSearch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTTargetTeam m_target_team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTTargetRole m_target_role;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGBTTargetMask> m_target_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_target_rule_none;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBTTargetRule m_target_rule;
    
    FVGAIUnitSearch();
};

