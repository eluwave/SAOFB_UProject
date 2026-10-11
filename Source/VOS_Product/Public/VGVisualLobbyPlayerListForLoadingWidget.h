#pragma once
#include "CoreMinimal.h"
#include "VGVisualLobbyPlayerListWidget.h"
#include "VGVisualLobbyPlayerListForLoadingWidget.generated.h"

class UVGHeroIconLoader;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyPlayerListForLoadingWidget : public UVGVisualLobbyPlayerListWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGHeroIconLoader* m_hero_icon_loader;
    
public:
    UVGVisualLobbyPlayerListForLoadingWidget();

};

