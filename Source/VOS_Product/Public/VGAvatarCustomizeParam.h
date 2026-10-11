#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGAvatarCustomizeParam.generated.h"

class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAvatarCustomizeParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGAvatarCustomizeSetting*> m_avatar_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
public:
    UVGAvatarCustomizeParam();

};

