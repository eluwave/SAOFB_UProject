#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventHuman.h"
#include "VGTextSymbol.h"
#include "VGAfasysMenuCharacter.generated.h"

class AVGAfasysMenuAgent;
class AVGGameEventSearchableLocator;
class UDataTable;
class USoundAtomCueSheet;
class UVGAfasysActionLibrary;
class UVGLipDataPack;
class UVGSkeletalMeshComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuCharacter : public AVGGameEventHuman {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_visible_event_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_fade_end_visible_event_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGAfasysMenuAgent> m_afasys_menu_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_action_idle_display_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_list_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_emotion_list_tab_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_motion_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_motion_blend_out_time;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuAgent* m_afasys_menu_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGGameEventSearchableLocator* m_afasys_event_locator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysActionLibrary* m_action_library;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_voice_cue_sheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGLipDataPack* m_lip_data_pack;
    
public:
    AVGAfasysMenuCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSoundReportPlayEnd(int32 PlayBackId);
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEndCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEventPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGSkeletalMeshComponent* getMesh() const;
    
};

