#pragma once
#include "CoreMinimal.h"
#include "DMCommandCluster.generated.h"

USTRUCT(BlueprintType)
struct FDMCommandCluster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Identifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> commands;
    
    DMDEVELOPER_API FDMCommandCluster();
};

