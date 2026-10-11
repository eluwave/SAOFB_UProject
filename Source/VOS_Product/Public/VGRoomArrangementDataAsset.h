#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGRoomCustomizeItem.h"
#include "VGRoomArrangementDataAsset.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGRoomArrangementDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRoomCustomizeItem> m_data_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_light_id_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_wall_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_floor_id;
    
    UVGRoomArrangementDataAsset();

};

