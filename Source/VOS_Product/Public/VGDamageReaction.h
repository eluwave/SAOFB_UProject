#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGDamageReactionAilment.h"
#include "VGDamageReactionData.h"
#include "VGDamageReactionExtra.h"
#include "VGDamageReactionImpact.h"
#include "VGDamageReactionLock.h"
#include "VGDamageReaction.generated.h"

UCLASS(Blueprintable)
class UVGDamageReaction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_decrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDamageReactionData> m_reaction_basic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDamageReactionImpact> m_reaction_impact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDamageReactionAilment> m_reaction_ailment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDamageReactionLock> m_reaction_lock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDamageReactionExtra> m_reaction_extra;
    
public:
    UVGDamageReaction();

};

