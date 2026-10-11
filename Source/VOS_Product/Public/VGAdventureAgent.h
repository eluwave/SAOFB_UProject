#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGAdventureAgent_CommandReachedDelegate.h"
#include "VGAdventureAgent_SelectionDecidedDelegate.h"
#include "VGUIActor.h"
#include "VGAdventureAgent.generated.h"

class UVGMessageWindow;
class UVGSelectionWindow;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAdventureAgent : public AVGUIActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGMessageWindow> m_message_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGSelectionWindow> m_selection_widget_class;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAdventureAgent_CommandReached OnCommandReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAdventureAgent_SelectionDecided OnSelectionDecided;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMessageWindow* m_message_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSelectionWindow* m_selection_widget;
    
public:
    AVGAdventureAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void RequestSelection(const TArray<FText>& Items, int32 DefaultIndex, const FString& tag, bool cancellable);
    
    UFUNCTION(BlueprintCallable)
    void RequestMessage(FText Message, FText Caption);
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllRequest();
    
};

