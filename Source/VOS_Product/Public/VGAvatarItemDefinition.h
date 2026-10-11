#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGAvatarItemId.h"
#include "VGGameVersion.h"
#include "VGTextSymbol.h"
#include "VGAvatarItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGAvatarItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAvatarItemId ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference mesh_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference anim_path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName attach_node;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 sub_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName item_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol text_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGGameVersion game_version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName dlc_id;
    
    FVGAvatarItemDefinition();
};

