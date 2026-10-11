#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnErrorDelegate.h"
#include "OnReceiveDelegate.h"
#include "NetHttp.generated.h"

class UNetHttp;
class UNetMessage;

UCLASS(Blueprintable)
class NETCOMMON_API UNetHttp : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceive OnReceive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnError OnError;
    
    UNetHttp();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    UNetHttp* SetHeader(UObject* WorldContextObject, const FString& hashKey, const FString& userId, const FString& session, int32 Language, const FString& Version, int32 platform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UNetHttp* PostRequest(UObject* WorldContextObject, const FString& URL, UNetMessage* Data, float limitsec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLastHash();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNetHttp* Create(UObject* WorldContextObject);
    
};

