#pragma once
#include "CoreMinimal.h"
#include "VGStaffRollAgent.h"
#include "VGDlcStaffRollAgent.generated.h"

class AActor;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGDlcStaffRollAgent : public AVGStaffRollAgent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_to_be_continued_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_to_be_continued_enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_long_fade_out;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_3d_img_actor;
    
public:
    AVGDlcStaffRollAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Start();
    
};

