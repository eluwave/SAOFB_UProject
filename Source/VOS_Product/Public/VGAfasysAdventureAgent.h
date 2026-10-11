#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGAfasysAdventureAgent_CommandReachedDelegate.h"
#include "VGAfasysAdventureAgent_SelectionCanceledDelegate.h"
#include "VGAfasysAdventureAgent_SelectionDecidedDelegate.h"
#include "VGAfasysAdventureAgent_SelectionIndexChangedDelegate.h"
#include "VGAfasysAdventureAgent_SetTextDelegate.h"
#include "VGAfasysAdventureCommandFlag.h"
#include "VGUIActor.h"
#include "VGAfasysAdventureAgent.generated.h"

class UVGMessageWindow;
class UVGSelectionWindow;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysAdventureAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMessageWindow> m_message_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSelectionWindow> m_selection_widget_class;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysAdventureAgent_CommandReached OnCommandReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysAdventureAgent_SelectionDecided OnSelectionDecided;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysAdventureAgent_SelectionCanceled OnSelectionCanceled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysAdventureAgent_SelectionIndexChanged OnSelectionIndexChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysAdventureAgent_SetText OnSetText;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMessageWindow* m_message_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSelectionWindow* m_selection_widget;
    
public:
    AVGAfasysAdventureAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelectionMessage(const TArray<FText>& Items, const TArray<FText>& items2, const TArray<int32>& voice_id, const TArray<int32>& action_id, const TArray<FVGAfasysAdventureCommandFlag>& Flags, int32 DefaultIndex, const FString& tag);
    
    UFUNCTION(BlueprintCallable)
    void RequestSelection(const TArray<FText>& Items, const TArray<FVGAfasysAdventureCommandFlag>& Flags, int32 DefaultIndex, const FString& tag);
    
    UFUNCTION(BlueprintCallable)
    void RequestMessage(FText Message, FText Caption, int32 voice_id, int32 action_id);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllRequest();
    
};

