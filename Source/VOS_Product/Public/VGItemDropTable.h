#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGItemDropGroup.h"
#include "VGItemDropTable.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGItemDropTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGItemDropGroup> m_item_group_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_generate_skill_id;
    
    UVGItemDropTable();

};

