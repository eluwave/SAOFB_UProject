#pragma once
#include "CoreMinimal.h"
#include "VGCoopLobbyListItem.h"
#include "VGWidget.h"
#include "VGCoopLobbyListWidget.generated.h"

class UVGCoopLobbySettingDisplayItemAsset;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGCoopLobbyListWidget : public UVGWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingDisplayItemAsset* m_quest_objective_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingDisplayItemAsset* m_application_recruiment_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCoopLobbySettingDisplayItemAsset* m_battle_rule_policy_item;
    
    UVGCoopLobbyListWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void QueryClose();
    
    UFUNCTION(BlueprintCallable)
    void Open(const TArray<FVGCoopLobbyListItem>& CoopLobbyListItems);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenCompleted();
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

