#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"

#include "VGPlayerCardPreviewCharacter.generated.h"

class AActor;
class UAnimMontage;
class UAnimSequence;
class UVGAvatarCustomizeComponent;
class UVGAvatarCustomizeSetting;
class UVGCharacterFigureSetting;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGPlayerCardPreviewCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeComponent* customize_component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* customize_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* figure_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference anim_sequence_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* anim_sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* anim_montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector default_location;
    
    FVGPlayerCardPreviewCharacter();
};

