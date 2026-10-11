#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGTitleMenuItem.h"
#include "VGTitleMenuPage.generated.h"

USTRUCT(BlueprintType)
struct FVGTitleMenuPage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTitleMenuItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 index;
    
    VOS_PRODUCT_API FVGTitleMenuPage();
};

