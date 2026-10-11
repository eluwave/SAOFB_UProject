#pragma once
#include "CoreMinimal.h"
#include "FriendsData.h"
#include "FriendsParty.generated.h"

USTRUCT(BlueprintType)
struct FFriendsParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendsData> Party;
    
    VOS_PRODUCT_API FFriendsParty();
};

