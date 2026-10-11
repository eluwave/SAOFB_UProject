#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGMeshMaterialOverrideManagerTicker.generated.h"

class UVGMeshMaterialOverrideManager;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMeshMaterialOverrideManagerTicker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGMeshMaterialOverrideManager*> m_entries;
    
public:
    UVGMeshMaterialOverrideManagerTicker();

};

