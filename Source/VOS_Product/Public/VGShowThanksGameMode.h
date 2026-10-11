#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameMode.h"
#include "VGShowThanksGameMode.generated.h"

class UVGShowThanksWidget;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGShowThanksGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGShowThanksWidget> m_thanks_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_thanks_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_situation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGShowThanksWidget* m_thanks_widget;
    
public:
    AVGShowThanksGameMode(const FObjectInitializer& ObjectInitializer);

};

