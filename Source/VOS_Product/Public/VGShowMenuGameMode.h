#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "FriendsParty.h"
#include "GadgetData.h"
#include "SkillData.h"
#include "SubQuestNames.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGShowMenuGameMode.generated.h"

class UDataTable;
class UVGAvatarCustomizeSetting;
class UVGQuestRecord;
class UVGShowMenuWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGShowMenuGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGShowMenuWidget> m_menu_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_menu_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillData> m_main_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSkillData> m_sub_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGadgetData> m_gadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendsParty> m_friends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSubQuestNames> m_party_quests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGAvatarCustomizeSetting*> m_customize_settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> m_customize_param;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGShowMenuWidget* m_menu_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGQuestRecord*> m_sub_quests_record;
    
public:
    AVGShowMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

