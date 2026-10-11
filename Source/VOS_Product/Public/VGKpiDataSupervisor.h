#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGKpiDataSupervisor.generated.h"

class UNetHttp;
class UNetMessage;
class UVGKPIAProtocolMessage;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGKpiDataSupervisor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGKPIAProtocolMessage* m_cur_entry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetHttp* m_http_obj;
    
public:
    UVGKpiDataSupervisor();

private:
    UFUNCTION(BlueprintCallable)
    void OnReceived(UNetMessage* Data);
    
    UFUNCTION(BlueprintCallable)
    void OnError(int32 code, const FString& errmsg);
    
};

