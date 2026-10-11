#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGMeshMaterialOverrideManager.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMeshMaterialOverrideManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_object_holder;
    
public:
    UVGMeshMaterialOverrideManager();

};

