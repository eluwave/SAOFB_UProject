#pragma once
#include "CoreMinimal.h"
#include "EVGTeamCommand.h"
#include "VGPartyCommandItem.h"
#include "VGWidget.h"
#include "VGPartyCommandWidget.generated.h"

class UVGGridView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGPartyCommandWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGPartyCommandItem> m_party_command_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGTeamCommand m_current_command;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_param_list;
    
public:
    UVGPartyCommandWidget();

    UFUNCTION(BlueprintCallable)
    void Open(EVGTeamCommand initial_command);
    
    UFUNCTION(BlueprintCallable)
    void Close(bool bRemove);
    
};

