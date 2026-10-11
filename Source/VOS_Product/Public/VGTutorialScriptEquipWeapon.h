#pragma once
#include "CoreMinimal.h"
#include "VGTutorialScriptBase.h"
#include "VGTutorialScriptEquipWeapon.generated.h"

class AVGArmed;
class AVGWeaponActor;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTutorialScriptEquipWeapon : public UVGTutorialScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGArmed* m_armed_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGWeaponActor* m_weapon_actor;
    
public:
    UVGTutorialScriptEquipWeapon();

};

