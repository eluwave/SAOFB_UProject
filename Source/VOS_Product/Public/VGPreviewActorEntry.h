#pragma once
#include "CoreMinimal.h"

#include "Templates/SubclassOf.h"
#include "VGPreviewActorEntry.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FVGPreviewActorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName actor_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> actor_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hidden;
    
    VOS_PRODUCT_API FVGPreviewActorEntry();
};

