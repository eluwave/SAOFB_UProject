#pragma once
#include "CoreMinimal.h"

#include "ELipPattern.h"
#include "Animation/AnimInstance.h"
#include "VGFacialAnimInstance.generated.h"

class UAnimSequence;
class UDMLipsData;
class UVGFacialAnimSequencePack;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API UVGFacialAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_trans_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rotate_offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* m_vowel_pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELipPattern m_mouth_pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_mouth_pattern_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_dummy_lip_animation_weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_blink_weight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGFacialAnimSequencePack* m_sequence_pack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDMLipsData* m_lips_data;
    
public:
    UVGFacialAnimInstance();

    UFUNCTION(BlueprintCallable)
    void RequestToPlayLipsData(const UDMLipsData* Data);
    
};

