#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGShowMenuItem.h"
#include "VGShowMenuPage.generated.h"

USTRUCT(BlueprintType)
struct FVGShowMenuPage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGShowMenuItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 index;
    
    VOS_PRODUCT_API FVGShowMenuPage();
};

