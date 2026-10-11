#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "VGBreastSwingParam.h"
#include "VGBreastSwingParamAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGBreastSwingParamAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGBreastSwingParam> m_params;
    
public:
    UVGBreastSwingParamAssetUserData();

};

