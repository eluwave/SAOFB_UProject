#pragma once
#include "CoreMinimal.h"
#include "VGGameEventHuman.h"
#include "VGGameEventMobHuman.generated.h"

class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventMobHuman : public AVGGameEventHuman {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_avatar_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
public:
    AVGGameEventMobHuman(const FObjectInitializer& ObjectInitializer);

};

