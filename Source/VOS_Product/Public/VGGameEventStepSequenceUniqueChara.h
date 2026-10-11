#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "VGGameEventStepSequence.h"
#include "VGInventoryEntryId.h"
#include "VGGameEventStepSequenceUniqueChara.generated.h"

UCLASS(Blueprintable)
class UVGGameEventStepSequenceUniqueChara : public UVGGameEventStepSequence {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAvatarCustomizeCompleted);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAvatarCustomizeCompleted m_avatar_customize_completed;
    
public:
    UVGGameEventStepSequenceUniqueChara();

    UFUNCTION(BlueprintCallable)
    void SetCharacterCostume(EVGCharaUnique Chara, const FVGInventoryEntryId& Item);
    
    UFUNCTION(BlueprintCallable)
    void SetAvatarCustomizeSetting(EVGCharaUnique Chara);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterCostume(EVGCharaUnique Chara);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInventoryAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCustomCostume(EVGCharaUnique Chara) const;
    
};

