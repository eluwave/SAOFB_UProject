#pragma once
#include "CoreMinimal.h"
#include "EVPOnlineUserCloudFileType.generated.h"

UENUM(BlueprintType)
enum class EVPOnlineUserCloudFileType : uint8 {
    OnlineCommon,
    SaveData,
    Num,
    None,
};

