#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGStatusInfoListItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStatusInfoListItem : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_skill_name;
    
public:
    UVGStatusInfoListItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSkillName();
    
};

