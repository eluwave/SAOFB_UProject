#pragma once
#include "CoreMinimal.h"
#include "VGGameEventBase.h"
#include "VGGameEventMapObjectEvent.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UVGGameEventMapObjectEvent : public UVGGameEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_location_data;
    
    UVGGameEventMapObjectEvent();

};

