#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "VGGameplayContext.generated.h"

class UVGGameplayData;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGGameplayContext : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UVGGameplayData>> m_data_classes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGGameplayData*> m_data;
    
public:
    UVGGameplayContext();

};

