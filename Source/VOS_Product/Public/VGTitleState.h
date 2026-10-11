#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGTitleStateBase.h"
#include "VGTitleState.generated.h"

class AVGOptionAgent;
class AVGPlatformOptionAgent;
class UDataTable;
class UVGTitleWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTitleState : public AVGTitleStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTitleWidget> m_title_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_title_menu_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_continue_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_tutorial_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_kirito_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGOptionAgent> m_option_agent_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGPlatformOptionAgent> m_platform_option_agent_class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGOptionAgent* m_option_agent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGTitleWidget* m_title_widget;
    
public:
    AVGTitleState(const FObjectInitializer& ObjectInitializer);

};

