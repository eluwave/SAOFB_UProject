#pragma once
#include "CoreMinimal.h"
#include "Misc/StringClassReference.h"
#include "EVGCharaUnique.h"
#include "EVGFacialExpressionPattern.h"
#include "Templates/SubclassOf.h"
#include "VGAvatarCustomizeSubItem.h"
#include "VGCustomizeBaseAgent.h"
#include "VGCustomizePresetEntry.h"
#include "VGGridItem.h"
#include "VGTextSymbol.h"
#include "VGCustomizeAgent.generated.h"

class ACameraActor;
class ACharacter;
class AVGWeaponActor;
class UDataTable;
class USoundAtomCueSheet;
class UVGAvatarCustomizeSetting;
class UVGAvatarCustomizeSheet;
class UVGCharacterFigureSetting;
class UVGCharacterFigureSettingGenerator;
class UVGCustomizeWidget;
class UVGGenderSelectWidget;
class UVGNameEntryWidget;
class UVGPresetSelectWidget;
class UVGVfxSignalAsset;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGCustomizeAgent : public AVGCustomizeBaseAgent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGGenderSelectWidget> m_gender_select_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_preset_select_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCustomizeWidget> m_customize_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_nameentry_widget_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_customize_decided_confirm_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_preset_data;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGVfxSignalAsset* m_vfx_gender_select[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_preview_voices;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_action_id[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGWeaponActor> m_weapon[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGFacialExpressionPattern m_facial_pattern;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_default_figure_param[2];
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGGenderSelectWidget* m_gender_select_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGPresetSelectWidget* m_preset_select_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGCustomizeWidget* m_customize_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSheet* m_customize_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSheet* m_customize_sheet_instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_invalidate_pages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EVGCharaUnique m_target_chara;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* m_avatar[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGCustomizePresetEntry> m_preset_entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_customize_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSettingGenerator* m_figure_generator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* m_figure_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_current_voice_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_loading_voice_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGNameEntryWidget> m_nameentry_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGNameEntryWidget* m_nameentry_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_entry_name;
    
public:
    AVGCustomizeAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAvatarCustomize(ACharacter* avatar, ACameraActor* Camera, UVGAvatarCustomizeSheet* sheet);
    
    UFUNCTION(BlueprintCallable)
    static void CustomizeSubItemsToGridItems(const TArray<FVGAvatarCustomizeSubItem>& InValue, TArray<FVGGridItem>& outValue);
    
    UFUNCTION(BlueprintCallable)
    void CommitSettingData(EVGCharaUnique Type, bool partsOnly);
    
};

