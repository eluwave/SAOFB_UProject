#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGSoundPlayerBgmData.h"
#include "VGTextSymbol.h"
#include "VGSoundPlayerTabData.generated.h"

USTRUCT(BlueprintType)
struct FVGSoundPlayerTabData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol tab_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundPlayerBgmData> bgm_list;
    
    VOS_PRODUCT_API FVGSoundPlayerTabData();
};

