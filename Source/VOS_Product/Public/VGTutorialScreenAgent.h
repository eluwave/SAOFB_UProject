#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGUIActor.h"
#include "VGTutorialScreenAgent.generated.h"

class AVGTutorialScreenAgent;
class UDataTable;
class UObject;
class UVGTutorialInformationBoardWidget;
class UVGTutorialScreenData;
class UVGTutorialScreenDataIndex;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTutorialScreenAgent : public AVGUIActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScreenDataIndex* m_screen_data_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScreenDataIndex* m_screen_data_index_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScreenData* m_screen_data_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGTutorialScreenData* m_screen_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTutorialInformationBoardWidget* m_tutorial_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTutorialInformationBoardWidget> m_tutorial_widget_class_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGTutorialInformationBoardWidget> m_tutorial_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_data_base_table_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_data_base_table;
    
public:
    AVGTutorialScreenAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool QueryOpen(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    static AVGTutorialScreenAgent* OpenTutorialScreen(UObject* Context, const FName& TutorialScreenDataId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyTutorialScreenUp(UObject* Context, bool StrictCheck);
    
    UFUNCTION(BlueprintCallable)
    static void CloseTutorialScreen(UObject* Context);
    
    UFUNCTION(BlueprintCallable)
    void Close();
    
};

