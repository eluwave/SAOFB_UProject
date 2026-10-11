#pragma once
#include "CoreMinimal.h"
#include "EVGVisualLobbyActionItemType.h"
#include "VGTextSymbol.h"
#include "VGVisualLobbyActionListEntry.generated.h"

USTRUCT(BlueprintType)
struct FVGVisualLobbyActionListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGVisualLobbyActionItemType ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol TextSymbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHostOnly;
    
    VOS_PRODUCT_API FVGVisualLobbyActionListEntry();
};

