#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGRoomItemCatalogue.generated.h"

class UVGRoomItemDataAsset;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGRoomItemCatalogue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVGRoomItemDataAsset*> m_data_assets;
    
public:
    UVGRoomItemCatalogue();

};

