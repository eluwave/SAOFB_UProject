#pragma once
#include "CoreMinimal.h"
#include "VGOnlineCloudQuestClearData.generated.h"

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGOnlineCloudQuestClearData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_quest_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_clear_time;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_user_data;
    
    FVGOnlineCloudQuestClearData();
};

