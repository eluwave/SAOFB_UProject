#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGDeathMatchReleaseChecker.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGDeathMatchReleaseChecker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_released;
    
public:
    UVGDeathMatchReleaseChecker();

};

