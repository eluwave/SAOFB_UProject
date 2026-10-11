#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGAfasysMenuCharacterManager.generated.h"

class AVGAfasysMenuCharacter;
class USoundAtomCueSheet;
class UVGAfasysActionLibrary;
class UVGLipDataPack;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuCharacterManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_character_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuCharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* m_voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGLipDataPack* m_lip_data_pack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAfasysActionLibrary* m_afasys_action_library;
    
public:
    AVGAfasysMenuCharacterManager(const FObjectInitializer& ObjectInitializer);

};

