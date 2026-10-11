#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EVGStatusBuff.h"
#include "EVGStatusBuffOp.h"
#include "VGStatusBuffData.h"
#include "VGStatusBuffComponent.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGStatusBuffComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusBuffData> m_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGStatusBuffData> m_asset_weapon;
    
public:
    UVGStatusBuffComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGStatusBuff GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVGStatusBuffOp GetOp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVGBattleCharacter* GetCauser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float CalcTimer() const;
    
};

