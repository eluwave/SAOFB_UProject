#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BulletSpawnRequest.generated.h"

class AVGHitBox;
class AVGSkillBulletArea;

USTRUCT(BlueprintType)
struct FBulletSpawnRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGHitBox> bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGSkillBulletArea> bullet_area;
    
    VOS_PRODUCT_API FBulletSpawnRequest();
};

