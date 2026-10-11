#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGGuidedMissileReserveSetting.h"
#include "VGGuidedMissileManagerComponent.generated.h"

class AVGGuidedMissile;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGGuidedMissileManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGGuidedMissile*> m_missiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGGuidedMissileReserveSetting> m_reserved_settings;
    
public:
    UVGGuidedMissileManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetReserveSettings(const TArray<FVGGuidedMissileReserveSetting>& Settings);
    
};

