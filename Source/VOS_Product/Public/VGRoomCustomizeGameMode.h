#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Misc/StringClassReference.h"
#include "VGGameMode.h"
#include "VGRoomCustomizeGameMode.generated.h"

class AVGAfasysMenuCharacterManager;
class AVGGameEventSearchableLocator;
class UVGRoomArrangement;
class UVGRoomArrangementDataAsset;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API AVGRoomCustomizeGameMode : public AVGGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGRoomArrangementDataAsset* m_arrange_data_ref;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGRoomArrangement* m_room_arrangement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStringAssetReference> m_arrange_data_refs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGRoomArrangementDataAsset*> m_arrange_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringClassReference m_afasys_menu_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAfasysMenuCharacterManager* m_afasys_menu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGGameEventSearchableLocator* m_afasys_menu_locator;
    
public:
    AVGRoomCustomizeGameMode(const FObjectInitializer& ObjectInitializer);

};

