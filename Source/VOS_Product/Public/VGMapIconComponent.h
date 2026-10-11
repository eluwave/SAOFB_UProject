#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EVGMapIconType.h"
#include "EVGMapObjectNameDisplayType.h"
#include "VGTextSymbol.h"
#include "VGMapIconComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGMapIconComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMapObjectNameDisplayType m_name_display_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGMapIconType m_icon_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_icon_scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_icon_type_auto_set;
    
public:
    UVGMapIconComponent(const FObjectInitializer& ObjectInitializer);

};

