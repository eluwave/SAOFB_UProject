#pragma once
#include "CoreMinimal.h"
#include "EVGAvatarItemCategory.h"
#include "EVGAvatarItemGender.h"
#include "VGAvatarItemId.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarItemId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAvatarItemGender m_gender;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGAvatarItemCategory m_category;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_type;
    
    UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_index;
    
public:
    FVGAvatarItemId();
};

