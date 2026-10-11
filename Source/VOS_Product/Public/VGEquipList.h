#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGEquipList.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGEquipList : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_equip_list;
    
public:
    UVGEquipList();

};

