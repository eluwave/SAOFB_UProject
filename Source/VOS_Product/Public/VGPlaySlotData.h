#pragma once
#include "CoreMinimal.h"
#include "VGGameplayData.h"
#include "VGPlaySlotMetaData.h"
#include "VGPlaySlotData.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGPlaySlotData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPlaySlotMetaData> m_slot_metadata;
    
public:
    UVGPlaySlotData();

};

