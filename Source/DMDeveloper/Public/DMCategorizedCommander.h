#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "DMCategorizedCommander.generated.h"

USTRUCT(BlueprintType)
struct FDMCategorizedCommander {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Categories;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference commander;
    
    DMDEVELOPER_API FDMCategorizedCommander();
};

