#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGRoamNpcCharacterInfo.h"
#include "VGRoamNpcManager.generated.h"

class AVGRoamNpcCharacter;
class AVGRoamNpcLookPoint;
class AVGRoamNpcRoutePoint;

UCLASS(Blueprintable)
class UVGRoamNpcManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_character_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGRoamNpcCharacterInfo> m_npc_info_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGRoamNpcCharacter*> m_npc_character_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGRoamNpcRoutePoint*> m_route_point_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVGRoamNpcLookPoint*> m_look_point_list;
    
public:
    UVGRoamNpcManager();

};

