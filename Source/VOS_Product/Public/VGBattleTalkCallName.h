#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGBattleCallName.h"
#include "VGBattleTalkCallName.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleTalkCallName : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleCallName> m_call_names;
    
    UVGBattleTalkCallName();

};

