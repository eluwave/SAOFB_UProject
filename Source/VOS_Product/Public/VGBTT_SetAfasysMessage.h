#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "VGBTT_SetAfasysMessage.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBTT_SetAfasysMessage : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_life_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_data_table_ptr;
    
public:
    UVGBTT_SetAfasysMessage();

};

