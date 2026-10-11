#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAfasysAction.h"
#include "VGAfasysActionLibrary.generated.h"

UCLASS(Blueprintable)
class UVGAfasysActionLibrary : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysAction> m_actions;
    
    UVGAfasysActionLibrary();

};

