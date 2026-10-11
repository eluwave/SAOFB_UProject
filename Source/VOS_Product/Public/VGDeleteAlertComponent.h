#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGDeleteAlertMaterialParam.h"
#include "VGDeleteAlertComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGDeleteAlertComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_frequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDeleteAlertMaterialParam> m_material_params;
    
public:
    UVGDeleteAlertComponent(const FObjectInitializer& ObjectInitializer);

};

