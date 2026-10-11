#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGEquipInfo.generated.h"

class UVGStatusMeter;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGEquipInfo : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGStatusMeter* m_weight_meter;
    
public:
    UVGEquipInfo();

};

