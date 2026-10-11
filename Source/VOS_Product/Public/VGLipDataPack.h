#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGLipDataPack.generated.h"

class UDMLipsData;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGLipDataPack : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> lip_names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDMLipsData*> lip_data;
    
    UVGLipDataPack();

};

