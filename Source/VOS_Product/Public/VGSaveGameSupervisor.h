#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGSaveGameSupervisor.generated.h"

class UVGSaveGame;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGSaveGameSupervisor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_default_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGSaveGame* m_save_game;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* m_world_context;
    
public:
    UVGSaveGameSupervisor();

};

