#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "VGRandomSpawnSpawner.h"
#include "VGRandomSpawner.h"
#include "VGAIRandomSpawnerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGAIRandomSpawnerComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRandomSpawnSpawner> m_difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_between;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRandomSpawner> m_spawner_list;
    
public:
    UVGAIRandomSpawnerComponent(const FObjectInitializer& ObjectInitializer);

};

