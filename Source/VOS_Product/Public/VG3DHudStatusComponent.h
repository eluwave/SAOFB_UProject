#pragma once
#include "CoreMinimal.h"
#include "EVG3DHudStatusType.h"
#include "VG3DHudComponent.h"
#include "VG3DHudStatusComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVG3DHudStatusComponent : public UVG3DHudComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HpBarNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVG3DHudStatusType m_status_type;
    
public:
    UVG3DHudStatusComponent(const FObjectInitializer& ObjectInitializer);

};

