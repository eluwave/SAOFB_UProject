#pragma once
#include "CoreMinimal.h"
#include "EVGBattleType.h"
#include "EVGNetworkResultTeamType.h"
#include "VGNetworkResultIndividualParam.h"
#include "VGTDMResultParam.generated.h"

USTRUCT(BlueprintType)
struct FVGTDMResultParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGNetworkResultIndividualParam> params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleType battle_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float damage_red;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGNetworkResultTeamType team_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 life_blue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 life_red;
    
    VOS_PRODUCT_API FVGTDMResultParam();
};

