#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "GadgetData.h"
#include "SkillData.h"
#include "FriendsData.generated.h"

USTRUCT(BlueprintType)
struct FFriendsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_friend_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_friend_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillData m_main_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkillData m_sub_weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGadgetData m_gadgets;
    
    VOS_PRODUCT_API FFriendsData();
};

