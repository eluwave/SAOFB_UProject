#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGCharacterSetup.h"
#include "VGCharacterParam.generated.h"

class UVGAvatarCustomizeParam;
class UVGEquipmentParam;
class UVGMasteryParam;
class UVGSkillParam;
class UVGStatusParam;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGCharacterParam : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGCharacterSetup m_setup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGEquipmentParam* m_equipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGStatusParam* m_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSkillParam* m_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeParam* m_avatar_customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGMasteryParam* m_mastery;
    
public:
    UVGCharacterParam();

};

