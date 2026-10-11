#pragma once
#include "CoreMinimal.h"
#include "VGGameplayData.h"
#include "VGSaveMapRecord.h"
#include "VGSaveMapTargetPoint.h"
#include "VGMapRecordData.generated.h"

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGMapRecordData : public UVGGameplayData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVGSaveMapTargetPoint m_map_target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGSaveMapRecord> m_map_records;
    
public:
    UVGMapRecordData();

};

