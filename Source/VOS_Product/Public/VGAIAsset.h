#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAIDifficulty.h"
#include "VGAIUltimateSkill.h"
#include "VGAIWarpConfig.h"
#include "VGAIAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAIAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGAIDifficulty> m_difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGAIUltimateSkill> m_ultimate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    FVGAIWarpConfig m_warp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_satelitescan_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_npc_fa_to_npc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_npc_fa_only_defence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_npc_fa_only_tank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_npc_fa_only_player;
    
    UVGAIAsset();

};

