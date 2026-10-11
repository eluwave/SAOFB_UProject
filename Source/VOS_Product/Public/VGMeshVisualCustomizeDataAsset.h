#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGMeshVisualCustomize.h"
#include "VGMeshVisualCustomizeColorPalette.h"
#include "VGMeshVisualCustomizeColorPattern.h"
#include "VGMeshVisualCustomizeTexturePalette.h"
#include "VGMeshVisualCustomizeTexturePattern.h"
#include "VGMeshVisualCustomizeDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGMeshVisualCustomizeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomize> mesh_type_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeColorPalette> color_palettes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeColorPattern> color_patterns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeTexturePalette> texture_palettes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMeshVisualCustomizeTexturePattern> texture_patterns;
    
    UVGMeshVisualCustomizeDataAsset();

};

