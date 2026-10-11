#pragma once
#include "CoreMinimal.h"
#include "VGGameEventSelfSetupLocator.h"
#include "VGGameEventDropItemBoxLocator.generated.h"

class UVGItemDropTableSet;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGameEventDropItemBoxLocator : public AVGGameEventSelfSetupLocator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGItemDropTableSet* item_drop_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool is_refill_enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float refill_interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> on_flags;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool discovered;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float offset_z;
    
    AVGGameEventDropItemBoxLocator(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsEnabled() const;
    
};

