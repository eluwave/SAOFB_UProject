#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "VGGimmickFallCollision.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGimmickFallCollision : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damage_percentage;
    
public:
    AVGGimmickFallCollision(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool SetFallKill(AVGBattleCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    bool SetFallDamage(AVGBattleCharacter* Character);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerFall(AVGBattleCharacter* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHumanFall(AVGBattleCharacter* human);
    
    UFUNCTION(BlueprintCallable)
    void OnFall(AVGBattleCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyFall(AVGBattleCharacter* Enemy);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTransition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowResult() const;
    
    UFUNCTION(BlueprintCallable)
    FTransform GetReverseTransform(AVGBattleCharacter* Character);
    
};

