#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGNPCStatusEquipWidget.h"
#include "VGHeroStruggleNPCStatusEquipWidget.generated.h"

class UVGStatusMeter;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHeroStruggleNPCStatusEquipWidget : public UVGNPCStatusEquipWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGStatusMeter* m_hp_meter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_target_chara_id;
    
public:
    UVGHeroStruggleNPCStatusEquipWidget();

};

