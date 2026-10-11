#pragma once
#include "CoreMinimal.h"
#include "EVGSpecialQuest.h"
#include "VGQuestAgent.h"
#include "VGSpecialQuestAgent.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGSpecialQuestAgent : public AVGQuestAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGSpecialQuest m_quest_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_close_after_wait_time;
    
    AVGSpecialQuestAgent(const FObjectInitializer& ObjectInitializer);

};

