#pragma once
#include "CoreMinimal.h"
#include "VGAnimNotifyState.h"
#include "VGStatusBuff.h"
#include "VGANSStatusBuff.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class VOS_PRODUCT_API UVGANSStatusBuff : public UVGAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGStatusBuff m_buff_param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_skill_override;
    
public:
    UVGANSStatusBuff();

};

