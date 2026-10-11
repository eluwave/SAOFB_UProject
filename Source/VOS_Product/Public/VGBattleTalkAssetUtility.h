#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGBattleTalkAssetUtility.generated.h"

class UVGBattleTalkAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGBattleTalkAssetUtility : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_battle_talk_asset_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGBattleTalkAsset* m_battle_talk_asset;
    
public:
    UVGBattleTalkAssetUtility();

};

