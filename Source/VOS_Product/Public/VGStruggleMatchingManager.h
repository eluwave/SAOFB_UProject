#pragma once
#include "CoreMinimal.h"
#include "VGMatchingManager.h"
#include "VGStruggleMatchingManager.generated.h"

class UVGCoopLobbySettingsWidget;
class UVGLobbyModeSelectionWidget;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API AVGStruggleMatchingManager : public AVGMatchingManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool k_is_hero_struggle_released;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGLobbyModeSelectionWidget* m_lobby_versus_selection_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingsWidget* m_lobby_quick_match_widget;
    
public:
    AVGStruggleMatchingManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

