#pragma once
#include "CoreMinimal.h"
#include "VGContentId.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGContentId {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_id;
    
public:
    FVGContentId();
};

