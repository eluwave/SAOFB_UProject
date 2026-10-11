#pragma once
#include "CoreMinimal.h"
#include "DonNavigationVoxel.h"
#include "DonNavigationDynamicCollisionPayload.generated.h"

USTRUCT(BlueprintType)
struct FDonNavigationDynamicCollisionPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDonNavigationVoxel Voxel;
    
    DONAINAVIGATION_API FDonNavigationDynamicCollisionPayload();
};

