#pragma once
#include "CoreMinimal.h"
#include "VGBattleHUD.h"
#include "VGAbyssDefenceBattleHUD.generated.h"

class UVGAbyssDefenceBattleHUDWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGAbyssDefenceBattleHUD : public AVGBattleHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGAbyssDefenceBattleHUDWidget* m_rule_hud_widget;
    
public:
    AVGAbyssDefenceBattleHUD(const FObjectInitializer& ObjectInitializer);

};

