#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VGGimmickPortal.generated.h"

class ATargetPoint;
class AVGNavLinkProxy;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGGimmickPortal : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATargetPoint* m_warp_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGNavLinkProxy* m_nav_link;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_enable_NPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_force_warp_NPC;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 m_network_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_warp_interval;
    
public:
    AVGGimmickPortal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWarp(AActor* Character, bool is_warp_npc);
    
    UFUNCTION(BlueprintCallable)
    void OnOverrideWarpCollision(AActor* Character);
    
};

