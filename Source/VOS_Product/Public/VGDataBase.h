#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGDataBaseType.h"
#include "VGDataBase.generated.h"

USTRUCT(BlueprintType)
struct FVGDataBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName tutorial_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGDataBaseType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress_flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName dlc_content_id;
    
    VOS_PRODUCT_API FVGDataBase();
};

