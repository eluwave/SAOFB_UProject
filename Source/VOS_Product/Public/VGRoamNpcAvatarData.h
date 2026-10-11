#pragma once
#include "CoreMinimal.h"
#include "EVGCharaGender.h"
#include "VGRoamNpcFlagMessageData.h"
#include "VGTextSymbol.h"
#include "VGRoamNpcAvatarData.generated.h"

class UVGAvatarCustomizeSetting;

USTRUCT(BlueprintType)
struct FVGRoamNpcAvatarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* avatar_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol caption_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTextSymbol> normal_message_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRoamNpcFlagMessageData> flag_message_data;
    
    VOS_PRODUCT_API FVGRoamNpcAvatarData();
};

