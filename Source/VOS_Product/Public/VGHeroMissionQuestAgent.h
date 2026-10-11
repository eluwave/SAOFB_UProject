#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Misc/StringClassReference.h"
#include "EVGHeroMissionQuest.h"
#include "VGSpecialQuestAgent.h"
#include "VGHeroMissionQuestAgent.generated.h"

class AVGHSCharacterSelectAgent;
class UDataTable;
class UVGHeroIconLoader;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGHeroMissionQuestAgent : public AVGSpecialQuestAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGHeroMissionQuest m_mission_quest_type;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_hero_select_agent_class_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGHSCharacterSelectAgent* m_hero_select_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGHeroIconLoader* m_hero_icon_loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_hero_selectable_data_table_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_hero_selectable_data_table;
    
public:
    AVGHeroMissionQuestAgent(const FObjectInitializer& ObjectInitializer);

};

