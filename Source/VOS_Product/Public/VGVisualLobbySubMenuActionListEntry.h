#pragma once
#include "CoreMinimal.h"
#include "EVGVisualLobbyMenuMode.h"
#include "VGVisualLobbyActionListEntry.h"
#include "VGVisualLobbySubMenuActionListEntry.generated.h"

USTRUCT(BlueprintType)
struct FVGVisualLobbySubMenuActionListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGVisualLobbyMenuMode MenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGVisualLobbyActionListEntry> MenuActionList;
    
    VOS_PRODUCT_API FVGVisualLobbySubMenuActionListEntry();
};

