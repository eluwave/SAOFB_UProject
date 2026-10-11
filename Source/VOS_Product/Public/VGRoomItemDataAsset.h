#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGRoomItemData.h"
#include "VGRoomLightData.h"
#include "VGRoomMaterialData.h"
#include "VGRoomItemDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGRoomItemDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRoomItemData> m_data_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRoomMaterialData> m_material_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRoomLightData> m_light_table;
    
    UVGRoomItemDataAsset();

};

