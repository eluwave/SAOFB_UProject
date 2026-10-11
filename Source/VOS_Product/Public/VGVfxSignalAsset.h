#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGVfxSignal.h"
#include "VGVfxSignalAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGVfxSignalAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName unique_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_static_mesh_only;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVfxSignal> signals;
    
    UVGVfxSignalAsset();

};

