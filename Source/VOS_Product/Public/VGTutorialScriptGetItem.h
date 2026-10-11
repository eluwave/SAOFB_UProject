#pragma once
#include "CoreMinimal.h"
#include "VGTutorialScriptBase.h"
#include "VGTutorialScriptGetItem.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTutorialScriptGetItem : public UVGTutorialScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRequestDropItemUfg;
    
    UVGTutorialScriptGetItem();

};

