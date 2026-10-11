#pragma once
#include "CoreMinimal.h"
#include "VGHeroStruggleSetting.h"
#include "VGHeroStruggleCharaIconDisplayInfo.generated.h"

USTRUCT(BlueprintType)
struct FVGHeroStruggleCharaIconDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGHeroStruggleSetting HeroSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeroName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RoleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RoleIconPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseEnable;
    
    VOS_PRODUCT_API FVGHeroStruggleCharaIconDisplayInfo();
};

