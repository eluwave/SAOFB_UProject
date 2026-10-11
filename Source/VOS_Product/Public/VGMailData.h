#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EVGCharaUnique.h"
#include "EVGMailGameMode.h"
#include "VGTextSymbol.h"
#include "VGMailData.generated.h"

USTRUCT(BlueprintType)
struct FVGMailData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mail_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique chara_unique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol From;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> receive_progress_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 read_progress_id;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMailGameMode game_mode;
    
    VOS_PRODUCT_API FVGMailData();
};

