#pragma once
#include "CoreMinimal.h"
#include "VGBattleRuleComponentBase.h"
#include "VGBattleRuleComponentTDM.generated.h"

class UVGBattleAggregatorTDM;
class UVGDialog;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGBattleRuleComponentTDM : public UVGBattleRuleComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleAggregatorTDM* m_aggregator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_wait_dialog;
    
public:
    UVGBattleRuleComponentTDM(const FObjectInitializer& ObjectInitializer);

};

