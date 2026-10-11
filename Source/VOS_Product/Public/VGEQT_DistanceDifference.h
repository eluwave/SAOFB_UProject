#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "UVGEQT_DistanceDifferenceFilter.h"
#include "VGEQT_DistanceDifference.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGEQT_DistanceDifference : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> m_distance_from;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue m_target_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGEQT_DistanceDifferenceFilter m_filter;
    
    UVGEQT_DistanceDifference();

};

