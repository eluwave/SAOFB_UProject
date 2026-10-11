#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGFriendListSpecialEffect.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFriendListSpecialEffect : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGWidget*> m_sp_effects;
    
public:
    UVGFriendListSpecialEffect();

};

