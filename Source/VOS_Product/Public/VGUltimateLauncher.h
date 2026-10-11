#pragma once
#include "CoreMinimal.h"
#include "VGUltimateBullet.h"
#include "VGUltimateLauncher.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGUltimateLauncher : public AVGUltimateBullet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_num_second;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angle_second;
    
public:
    AVGUltimateLauncher(const FObjectInitializer& ObjectInitializer);

};

