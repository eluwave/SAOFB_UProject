#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGGimmickTrap.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGimmickTrap : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AActor*> m_reserved_chara;
    
public:
    AVGGimmickTrap(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveReservedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void ClearReservedActor();
    
    UFUNCTION(BlueprintCallable)
    void AddReservedActor(AActor* Actor);
    
};

