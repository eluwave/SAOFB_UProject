#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGPrizeInfo.h"
#include "VGPrizeReputation.h"
#include "VGPrizeCollection.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGPrizeCollection : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGPrizeInfo m_prize_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPrizeReputation> m_add_reputations;
    
public:
    AVGPrizeCollection(const FObjectInitializer& ObjectInitializer);

};

