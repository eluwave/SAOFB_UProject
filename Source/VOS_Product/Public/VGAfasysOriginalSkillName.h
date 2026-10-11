#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGAfasysOriginalSkillNameTrend.h"
#include "VGAfasysOriginalSkillName.generated.h"

USTRUCT(BlueprintType)
struct FVGAfasysOriginalSkillName : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName name_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVGAfasysOriginalSkillNameTrend::Type> trend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_front;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_back;
    
    VOS_PRODUCT_API FVGAfasysOriginalSkillName();
};

