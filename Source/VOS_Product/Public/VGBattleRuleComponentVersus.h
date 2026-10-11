#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentVersus.generated.h"

class UVGBattleAggregatorVersus;
class UVGDialog;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentVersus : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleAggregatorVersus* m_aggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_wait_dialog;
    
public:
    UVGBattleRuleComponentVersus(const FObjectInitializer& ObjectInitializer);

};

