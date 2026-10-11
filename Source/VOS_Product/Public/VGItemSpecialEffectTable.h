#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EVGItemSpecialEffectCurve.h"
#include "VGItemSpecialEffectMaxFactorTable.h"
#include "VGItemSpecialEffectRarityWeight.h"
#include "VGItemSpecialEffectTable.generated.h"

class UDataTable;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGItemSpecialEffectTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGItemSpecialEffectRarityWeight m_rarity_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_item_special_effect_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemSpecialEffectMaxFactorTable> m_weapon_special_effect_factor_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_attack_random_range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_attack_specialized_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGItemSpecialEffectCurve m_attack_random_curve;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weapon_cap_rank;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dlc_count;
    
    UVGItemSpecialEffectTable();

};

