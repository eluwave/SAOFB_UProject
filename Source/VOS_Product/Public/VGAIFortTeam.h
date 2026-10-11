#pragma once
#include "CoreMinimal.h"
#include "VGAITeam.h"
#include "VGAIFortTeam.generated.h"

class AVGAIFortTeamGenerator;
class UVGAIUnit;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAIFortTeam : public AVGAITeam {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_attacker_respawn_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_healer_respawn_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_cannon_respawn_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_angry_mode_num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angry_mode_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVGAIFortTeamGenerator* m_generator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGAIUnit*> m_respawn_reserves;
    
public:
    AVGAIFortTeam(const FObjectInitializer& ObjectInitializer);

};

