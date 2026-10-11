#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraAnim.h"
#include "VGCameraAnim.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCameraAnim : public UCameraAnim {
    GENERATED_BODY()
public:
    virtual void PreSave(const class ITargetPlatform* TargetPlatform) override { UObject::PreSave(TargetPlatform); }
    virtual void PostLoad() override { UObject::PostLoad(); }
    virtual void GetResourceSizeEx(FResourceSizeEx& CumulativeResourceSize) override { UObject::GetResourceSizeEx(CumulativeResourceSize); }

public:
    UVGCameraAnim();

};

