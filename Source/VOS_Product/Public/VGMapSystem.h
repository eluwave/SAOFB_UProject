#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "GameFramework/Actor.h"
#include "VGMapIconObjectInfo.h"
#include "VGMapSystem.generated.h"

class UDataTable;
class UTexture2D;
class UVGMapFixedObjectSetting;
class UVGMapGameEventSetting;
class UVGMapSetting;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMapSystem : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_map_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapSetting* m_map_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapFixedObjectSetting* m_map_fixed_obj_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* m_map_game_event_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* m_map_game_quest_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_map_texture_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_map_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FVGMapIconObjectInfo> m_actor_icons;
    
public:
    AVGMapSystem(const FObjectInitializer& ObjectInitializer);

};

