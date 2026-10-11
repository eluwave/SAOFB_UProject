#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "VGTextSymbol.h"
#include "VGMapData.generated.h"

class UVGMapFixedObjectSetting;
class UVGMapGameEventSetting;
class UVGMapSetting;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName situation_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapSetting* map_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapFixedObjectSetting* fixed_object_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting_kirito_mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting_dlc01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting_dlc02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting_dlc03;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting_dlc04;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* game_event_setting_abyss_mode;
    
    FVGMapData();
};

