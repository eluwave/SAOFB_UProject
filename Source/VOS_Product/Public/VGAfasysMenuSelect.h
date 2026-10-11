#pragma once
#include "CoreMinimal.h"
#include "VGAfasysMenuBase.h"
#include "VGAfasysMenuFunctionSelectMessage.h"
#include "VGAfasysMenuFunctionSelectRelation.h"
#include "VGAfasysMenuMessage.h"
#include "VGAfasysMenuSelect.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuSelect : public AVGAfasysMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_start_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuMessage> m_function_open_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuFunctionSelectMessage> m_function_select_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAfasysMenuFunctionSelectRelation> m_function_relation;
    
public:
    AVGAfasysMenuSelect(const FObjectInitializer& ObjectInitializer);

};

