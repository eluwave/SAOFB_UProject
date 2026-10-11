#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "GameFramework/Actor.h"
#include "VGSkillAssetPool.generated.h"

class UVGSkillAssetList;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API AVGSkillAssetPool : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_skill_asset_list_asset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSkillAssetList* m_skill_asset_list;
    
public:
    AVGSkillAssetPool(const FObjectInitializer& ObjectInitializer);

};

