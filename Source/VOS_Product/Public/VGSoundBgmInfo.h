#pragma once
#include "CoreMinimal.h"
#include "VGSoundBgmInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGSoundBgmInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BlockIndex;
    
    VOS_PRODUCT_API FVGSoundBgmInfo();
};

