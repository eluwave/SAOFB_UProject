#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGMemoryChipChangeAgent.generated.h"

class AVGSubSceneAgent;
class UVGCharacterListWidget;
class UVGDialog;
class UVGMemoryChipChangeWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGMemoryChipChangeAgent : public AVGUIActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGCharacterListWidget> m_character_select_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMemoryChipChangeWidget> m_memory_chip_change_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGCharacterListWidget* m_character_list_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMemoryChipChangeWidget* m_memory_chip_change_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGSubSceneAgent* m_subscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
public:
    AVGMemoryChipChangeAgent(const FObjectInitializer& ObjectInitializer);

};

