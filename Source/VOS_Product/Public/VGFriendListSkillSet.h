#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGFriendListSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGFriendListSkillSet : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_skill_set;
    
public:
    UVGFriendListSkillSet();

};

