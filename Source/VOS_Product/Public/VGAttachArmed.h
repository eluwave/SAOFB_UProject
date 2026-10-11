#pragma once
#include "CoreMinimal.h"
#include "OnSpawnAttachedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "VGArmed.h"
#include "VGAttachArmed.generated.h"

class APawn;
class AVGBattleCharacter;
class UBehaviorTree;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAttachArmed : public AVGArmed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> attach_chara_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* attach_chara_behavior_tree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName attach_node;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> action_map;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSpawnAttachedDelegate OnSpawnAttachedDelegate;
    
    AVGAttachArmed(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_SendAttachCharaId(int32 ID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttachedActorUniqueId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetAttachedActor() const;
    
};

