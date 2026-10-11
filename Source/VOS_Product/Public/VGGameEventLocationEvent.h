#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "VGGameEventBase.h"
#include "VGGameEventLocationEvent.generated.h"

class UDataTable;
class UVGDialog;

UCLASS(Blueprintable)
class UVGGameEventLocationEvent : public UVGGameEventBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGDialog> m_location_text_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_map_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_location_data;
    
    UVGGameEventLocationEvent();

};

