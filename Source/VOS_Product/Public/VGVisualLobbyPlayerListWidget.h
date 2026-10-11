#pragma once
#include "CoreMinimal.h"
#include "EVGCharaTeam.h"
#include "VGWidget.h"
#include "VGVisualLobbyPlayerListWidget.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGVisualLobbyPlayerListWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_first_list;
    
public:
    UVGVisualLobbyPlayerListWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamText(const FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeamColor(EVGCharaTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTeam(EVGCharaTeam Team);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Open();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Close();
    
};

