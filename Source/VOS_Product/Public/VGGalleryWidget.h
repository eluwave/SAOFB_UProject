#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "VGWidget.h"
#include "VGGalleryWidget.generated.h"

class UDataTable;
class UTexture2D;
class UVGGridView;
class UVGNavigationBar;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class VOS_PRODUCT_API UVGGalleryWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_grid_view_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_navigation_bar_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_movie_data_table_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_visual_data_table_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cursor_move_delay_default;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGGridView* m_grid_view;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGNavigationBar* m_navigation_bar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_movie_data_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_visual_data_table;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_gallery_unlock_all;
    
public:
    UVGGalleryWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOutAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartInAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualVisibility(bool visible_flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetVisualImage(UTexture2D* Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetThumnail(const UTexture2D* thumbnail, int32 colum, int32 row);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemUnlock(bool Unlock, int32 colum, int32 row);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItemLooked(bool isNew, int32 colum, int32 row);
    
    UFUNCTION(BlueprintCallable)
    void SetIsInAnimationEnd(bool flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEnableTabChange(bool is_enabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCursorVisivility(int32 colum, int32 row, bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAchievement(float value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTabChanged(bool Direction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetGalleryType(int32 index);
    
};

