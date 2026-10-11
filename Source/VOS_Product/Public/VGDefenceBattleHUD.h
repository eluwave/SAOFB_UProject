#pragma once
#include "CoreMinimal.h"
#include "VGBattleHUD.h"
#include "VGDefenceBattleHUD.generated.h"

class UVGDefenceBattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGDefenceBattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGDefenceBattleHUDWidget* m_rule_hud_widget;
    
public:
    AVGDefenceBattleHUD(const FObjectInitializer& ObjectInitializer);

};

