#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGHudEagleEyeBeaconInfo.h"
#include "VGWidget.h"
#include "VGHudCommonPanel.generated.h"

class UCanvasPanel;
class UVGHudEagleEyeBeacon;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudCommonPanel : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGHudEagleEyeBeacon> eagle_eye_beacon_class;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_eagle_eye_beacon_panel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FVGHudEagleEyeBeaconInfo> m_eagle_eye_beacon_map;
    
public:
    UVGHudCommonPanel();

};

