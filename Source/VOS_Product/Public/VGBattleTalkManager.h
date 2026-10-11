#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGBattleTalkItem.h"
#include "VGBattleTalkManager.generated.h"

class AVGBattleCharacter;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleTalkManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGBattleTalkItem> m_buffers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AVGBattleCharacter*> m_speakers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVGBattleCharacter* m_last_speaker;
    
public:
    UVGBattleTalkManager();

};

