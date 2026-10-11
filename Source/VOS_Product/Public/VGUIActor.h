#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "VGUIActorDelegateDelegate.h"
#include "VGUIActor.generated.h"

class UVGDialog;
class UVGNavigationBar;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGUIActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_use_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGNavigationBar> m_navigation_bar_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_blur_effect_ui_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_bg_effect_material;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGUIActorDelegate OnFinishedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
public:
    AVGUIActor(const FObjectInitializer& ObjectInitializer);

};

