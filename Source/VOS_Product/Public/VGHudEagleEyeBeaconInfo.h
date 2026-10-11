#pragma once
#include "CoreMinimal.h"
#include "VGHudEagleEyeBeaconInfo.generated.h"

class AVGSkillBulletBeacon;
class UCanvasPanelSlot;
class UVGHudEagleEyeBeacon;

USTRUCT(BlueprintType)
struct FVGHudEagleEyeBeaconInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSkillBulletBeacon* beacon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHudEagleEyeBeacon* beacon_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_search;
    
    VOS_PRODUCT_API FVGHudEagleEyeBeaconInfo();
};

