#pragma once
#include "CoreMinimal.h"
#include "VGGameEventHuman.h"
#include "VGGameEventFakeAfasys.generated.h"

class UVGAvatarCustomizeSetting;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventFakeAfasys : public AVGGameEventHuman {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_avatar_setting_male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_avatar_setting_female;
    
public:
    AVGGameEventFakeAfasys(const FObjectInitializer& ObjectInitializer);

};

