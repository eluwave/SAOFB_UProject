#pragma once
#include "CoreMinimal.h"

#include "GameFramework/Actor.h"
#include "VGConnectRutePoint.h"
#include "VGRoamNpcRoutePoint.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGRoamNpcRoutePoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGConnectRutePoint> m_connect_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_spawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_visible_spawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_is_goal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_wait_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_arrow_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_emote_female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_emote_male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_force_spawn;
    
public:
    AVGRoamNpcRoutePoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DrawText();
    
    UFUNCTION(BlueprintCallable)
    void DrawArrows(bool is_connect_point_update);
    
};

