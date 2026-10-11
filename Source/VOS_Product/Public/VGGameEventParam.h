#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGGameEventParam.generated.h"

UCLASS(Blueprintable, Config=Game)
class UVGGameEventParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float lookat_speed;
    
    UVGGameEventParam();

};

