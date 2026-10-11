#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGActionLibrary.generated.h"

class UVGActionAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGActionLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGActionAsset*> m_actions;
    
    UVGActionLibrary();

};

