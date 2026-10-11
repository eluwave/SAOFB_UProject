#pragma once
#include "CoreMinimal.h"
#include "VGColorCoordinateItem.h"
#include "VGColorCoordinatePage.generated.h"

USTRUCT(BlueprintType)
struct FVGColorCoordinatePage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parts_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 parts_param2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Caption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGColorCoordinateItem> Items;
    
    VOS_PRODUCT_API FVGColorCoordinatePage();
};

