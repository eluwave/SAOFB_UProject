#pragma once
#include "CoreMinimal.h"
#include "EVGNetworkResultMedal.h"
#include "EVGNetworkResultTeamType.h"
#include "VGNetworkResultScoreBoardParam.generated.h"

USTRUCT(BlueprintType)
struct FVGNetworkResultScoreBoardParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString score_type_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGNetworkResultMedal medal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGNetworkResultTeamType team_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float value;
    
    VOS_PRODUCT_API FVGNetworkResultScoreBoardParam();
};

