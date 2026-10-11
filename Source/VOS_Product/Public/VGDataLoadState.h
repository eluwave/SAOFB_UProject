#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGTitleStateBase.h"
#include "VGDataLoadState.generated.h"

class UVGDataLoadMenuWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDataLoadState : public AVGTitleStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDataLoadMenuWidget> m_data_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_newgame_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_kiritogame_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_continue_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_tutorial_transition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_invite_join_transition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGDataLoadMenuWidget* m_data_widget;
    
public:
    AVGDataLoadState(const FObjectInitializer& ObjectInitializer);

};

