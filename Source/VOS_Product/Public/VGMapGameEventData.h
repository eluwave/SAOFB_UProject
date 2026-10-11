#pragma once
#include "CoreMinimal.h"

#include "EVGMapGameEventRequiredContent.h"
#include "EVGMapIconType.h"
#include "VGGameEventActivateCondition.h"
#include "VGMapGameEventData.generated.h"

USTRUCT(BlueprintType)
struct FVGMapGameEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMapIconType icon_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameEventActivateCondition condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName quest_name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMapGameEventRequiredContent required_content;
    
    VOS_PRODUCT_API FVGMapGameEventData();
};

