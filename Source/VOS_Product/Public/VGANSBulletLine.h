#pragma once
#include "CoreMinimal.h"
#include "VGANSBulletLineBase.h"
#include "VGSoundCueInfo.h"
#include "VGANSBulletLine.generated.h"

class UVGVfxSignalAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSBulletLine : public UVGANSBulletLineBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* line;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* line_end;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* hit_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo line_sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGSoundCueInfo hit_sound;
    
public:
    UVGANSBulletLine();

};

