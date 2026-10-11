#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGTransitionDescBP.h"
#include "VGMoviePlayGameMode.generated.h"

class AVGLevelSequenceActor;
class AVGMoviePlayer;
class UDataTable;
class ULevelSequence;
class UVGMovieData;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGMoviePlayGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ULevelSequence> m_sequence_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_movie_data_table_reference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTransitionDescBP situation_myroom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_demo_fade_in_time;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGMoviePlayer* m_movie_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGLevelSequenceActor* m_demo_player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGMovieData* m_movie_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_movie_data_table;
    
public:
    AVGMoviePlayGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenGallery();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnJumpScene();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseGallery();
    
};

