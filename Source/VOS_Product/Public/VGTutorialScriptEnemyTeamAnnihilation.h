#pragma once
#include "CoreMinimal.h"
#include "VGTutorialScriptBase.h"
#include "VGTutorialScriptEnemyTeamAnnihilation.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTutorialScriptEnemyTeamAnnihilation : public UVGTutorialScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName teamName;
    
    UVGTutorialScriptEnemyTeamAnnihilation();

};

