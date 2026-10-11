#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVGStatusAilment.h"
#include "VGSoundCueInfo.h"
#include "VGStatusAilment.h"
#include "VGStatusAilmentData.h"
#include "VGStatusAilmentComponent.generated.h"

class AVGBattleCharacter;
class AVGDamageCauser;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGStatusAilmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusAilment> k_tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusAilmentData> m_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo m_recovery_se;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGDamageCauser* m_self_causer;
    
public:
    UVGStatusAilmentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCount(EVGStatusAilment Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetCauser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTimerTerror() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTimerStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTimerPoison() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTimerBlaze() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamagePoison() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageIntervalPoison() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageIntervalBlaze() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcDamageBlaze() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcAccumulationTerror() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcAccumulationStun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcAccumulationPoison() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcAccumulationBlaze() const;
    
};

