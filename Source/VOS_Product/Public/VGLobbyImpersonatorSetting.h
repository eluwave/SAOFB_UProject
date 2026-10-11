#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaUnique.h"
#include "EVGHeroImpersonatorCharacter.h"
#include "VGLobbyImpersonatorSetting.generated.h"

USTRUCT(BlueprintType)
struct FVGLobbyImpersonatorSetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHeroImpersonatorCharacter impersonator_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique chara_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 customize_index;
    
    VOS_PRODUCT_API FVGLobbyImpersonatorSetting();
};

