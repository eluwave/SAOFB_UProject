#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMeshVisualCustomizeFacePaintPattern.h"
#include "VGFacePaintDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGFacePaintDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeFacePaintPattern> face_paint_patterns;
    
    UVGFacePaintDataAsset();

};

