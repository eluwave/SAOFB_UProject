#pragma once
#include "CoreMinimal.h"
#include "VGGameplayData.h"
#include "VGPartyData.generated.h"

class UVGCharacterParam;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGPartyData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGCharacterParam*> m_members;
    
public:
    UVGPartyData();

};

