#pragma once
#include "CoreMinimal.h"
#include "VGGameplayData.h"
#include "VGQuestData.generated.h"

class UVGQuestRecord;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGQuestData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGQuestRecord*> m_quest_records;
    
public:
    UVGQuestData();

};

