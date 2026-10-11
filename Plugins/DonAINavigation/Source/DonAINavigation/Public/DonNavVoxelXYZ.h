#pragma once
#include "CoreMinimal.h"
#include "DonNavVoxelX.h"
#include "DonNavigationVoxel.h"
#include "DonNavVoxelXYZ.generated.h"

USTRUCT(BlueprintType)
struct FDonNavVoxelXYZ {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDonNavVoxelX> X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDonNavigationVoxel> Data;
    
    DONAINAVIGATION_API FDonNavVoxelXYZ();
};

