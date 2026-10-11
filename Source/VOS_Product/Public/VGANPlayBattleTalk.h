#pragma once
#include "CoreMinimal.h"
#include "EVGBattleTalkTrigger.h"
#include "EVGTalkCharacter.h"
#include "VGAnimNotify.h"
#include "VGANPlayBattleTalk.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable, CollapseCategories)
class VOS_PRODUCT_API UVGANPlayBattleTalk : public UVGAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGBattleTalkTrigger m_talk_trigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTalkCharacter m_main_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_main_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTalkCharacter m_target_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_target_character;
    
    UVGANPlayBattleTalk();

};

