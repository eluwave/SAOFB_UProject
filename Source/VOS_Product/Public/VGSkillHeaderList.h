#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGSkillHeaderList.generated.h"

class UVGSkillHeader;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGSkillHeaderList : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGSkillHeader*> headers;
    
    UVGSkillHeaderList();

};

