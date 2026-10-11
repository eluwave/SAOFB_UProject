#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGDeadReactionData.h"
#include "VGDeadReaction.generated.h"

UCLASS(Blueprintable)
class UVGDeadReaction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDeadReactionData> m_reaction;
    
public:
    UVGDeadReaction();

};

