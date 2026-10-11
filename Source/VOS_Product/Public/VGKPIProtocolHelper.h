#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VGKPIProtocolHelper.generated.h"

class UNetMessage;
class UObject;
class UVGKPIAProtocolMessage;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGKPIProtocolHelper : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGKPIProtocolHelper();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVGKPIAProtocolMessage* EditRequestByName(UObject* WorldContextObject, const FString& Name, const FString& Json);
    
    UFUNCTION(BlueprintCallable)
    static FString DumpSocketMessage(const FString& prefix, UNetMessage* Msg);
    
    UFUNCTION(BlueprintCallable)
    static FString DumpHttpMessage(const FString& prefix, UVGKPIAProtocolMessage* Request, UNetMessage* Response);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVGKPIAProtocolMessage* CreateRequestByType(UObject* WorldContextObject, int32 Type);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UVGKPIAProtocolMessage* CreateRequestByName(UObject* WorldContextObject, const FString& Name);
    
};

