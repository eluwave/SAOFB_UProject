#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGSoundCueInfo.h"
#include "VGMoviePlayer.generated.h"

class UDataTable;
class UManaComponent;
class UManaTexture;
class USoundAtomCueSheet;
class UVGSequencialSubtitleComponent;
class UVGSoundComponent;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMoviePlayer : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* m_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGSequencialSubtitleComponent* m_subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGSoundComponent* m_sound_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGSoundCueInfo> m_cue_infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_is_request_play;
    
public:
    AVGMoviePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitleDataTable(UDataTable* data_table);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundCueInfo(USoundAtomCueSheet* cue_sheet, const TArray<FVGSoundCueInfo>& cue_infos);
    
    UFUNCTION(BlueprintCallable)
    void SetManaTexture(UManaTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
};

