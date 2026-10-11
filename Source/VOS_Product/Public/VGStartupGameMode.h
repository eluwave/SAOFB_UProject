#pragma once
#include "CoreMinimal.h"
#include "VGGameMode.h"
#include "VGStartupGameMode.generated.h"

UCLASS(Blueprintable, NonTransient, Config=Engine)
class AVGStartupGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_next_situation;
    
public:
    AVGStartupGameMode(const FObjectInitializer& ObjectInitializer);

};

