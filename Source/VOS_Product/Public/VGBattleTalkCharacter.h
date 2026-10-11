#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGBattleTalkCharacter.generated.h"

class UVGBattleConversationTable;
class UVGBattleTalkCallName;
class UVGBattleTalkTable;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGBattleTalkCharacter : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleTalkCallName* m_call_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleTalkTable* m_talk_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGBattleConversationTable* m_conversation_table;
    
    UVGBattleTalkCharacter();

};

