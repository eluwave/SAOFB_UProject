#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGHud3DStatus.generated.h"

class UVGHud3DEnemyStatus;
class UVGHud3DPartyStatus;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHud3DStatus : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHud3DEnemyStatus* m_enemy_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGHud3DPartyStatus* m_party_status;
    
public:
    UVGHud3DStatus();

};

