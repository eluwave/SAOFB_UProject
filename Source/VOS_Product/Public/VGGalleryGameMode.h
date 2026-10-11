#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGTransitionDescBP.h"
#include "VGGalleryGameMode.generated.h"

class UVGGalleryWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGGalleryGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGalleryWidget> m_gallery_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_navigation_bar_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTransitionDescBP situation_myroom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fade_in_time;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGalleryWidget* m_gallery_widget;
    
public:
    AVGGalleryGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenGallery();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseGallery();
    
};

