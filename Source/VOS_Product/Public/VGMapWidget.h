#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGFastTravelArea.h"
#include "VGFastTravelMap.h"
#include "VGMapIconObject.h"
#include "VGTextSymbol.h"
#include "VGTravelTargetInfo.h"
#include "VGWidget.h"
#include "VGMapWidget.generated.h"

class AActor;
class UCanvasPanel;
class UDataTable;
class UTexture2D;
class UVGDialog;
class UVGMainMenuList;
class UVGMapFixedObjectSetting;
class UVGMapGameEventSetting;
class UVGMapIcon;
class UVGMapIconSetting;
class UVGMapMaskBox;
class UVGMapMaskImage;
class UVGMapSetting;
class UVGNavigationBar;
class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class VOS_PRODUCT_API UVGMapWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapSetting* m_map_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapFixedObjectSetting* m_map_fixed_obj_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* m_map_game_event_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapGameEventSetting* m_map_game_quest_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGMapIconSetting* m_map_icon_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMapIcon> m_map_icon_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGWidget> m_name_plate_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_map_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_location_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_fast_travel_areas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_fast_travel_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_fast_travel_locked_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_fast_travel_battle_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_player_position_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_event_icon_change_time;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMapMaskImage* m_map_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_map_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_under_icon_panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMapMaskBox* m_map_mask_box;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_scroll_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuList* m_travel_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_map_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_travel_dialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapIconObject> m_fixed_icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FVGMapIconObject> m_actor_icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGMapIconObject> m_target_icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_request_map_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_mask_texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGTravelTargetInfo> m_travel_targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGFastTravelArea> m_selected_fast_travel_areas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGFastTravelMap> m_selected_fast_travel_maps;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_fast_travel_is_valid;
    
public:
    UVGMapWidget();

    UFUNCTION(BlueprintCallable)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushRightShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushLeftShoulderButton();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayOutAnime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayInAnime();
    
    UFUNCTION(BlueprintCallable)
    bool IsClose();
    
    UFUNCTION(BlueprintCallable)
    void Decide(int32 in_index);
    
    UFUNCTION(BlueprintCallable)
    void Close(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

