#pragma once
#include "CoreMinimal.h"
#include "VGUIActor.h"
#include "VGTutorialDataBaseAgent.generated.h"

class UDataTable;
class UObject;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGTutorialDataBaseAgent : public AVGUIActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_data_base_table_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_data_base_table;
    
public:
    AVGTutorialDataBaseAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void StartTutorialDataBaseProgressFlagSet(UObject* Context, const FName& TutorialScreenDataId);
    
    UFUNCTION(BlueprintCallable)
    bool StartProgressFlagSet(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAnyTutorialDataBaseProgressFlagSet(UObject* Context);
    
};

