#pragma once
#include "CoreMinimal.h"

#include "Misc/StringClassReference.h"

#include "Components/Image.h"
#include "Templates/SubclassOf.h"
#include "VGSubSceneImage.generated.h"

class AActor;
class ULevel;
class UParticleSystem;
class UParticleSystemComponent;
class UWorld;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSubSceneImage : public UImage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_actor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_actor_location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_actor_rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform m_view_transform;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_current_actor;
    
public:
    UVGSubSceneImage();

    UFUNCTION(BlueprintCallable)
    UParticleSystemComponent* SpawnEmitter(UParticleSystem* EmitterTemplate, const FTransform& SpawnTransform, bool bAutoDestroy);
    
    UFUNCTION(BlueprintCallable)
    AActor* Spawn(TSubclassOf<AActor> ActorClass);
    
private:
    UFUNCTION(BlueprintCallable)
    void SetViewRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetViewLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetViewLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetSubSceneWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentActor() const;
    
    UFUNCTION(BlueprintCallable)
    void AddLevel(ULevel* Level);
    
};

