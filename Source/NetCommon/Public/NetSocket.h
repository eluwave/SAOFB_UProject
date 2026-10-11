#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENetSocketCipherMode.h"
#include "OnEventDelegate.h"
#include "NetSocket.generated.h"

class UNetMessage;
class UNetSocket;

UCLASS(Blueprintable)
class UNetSocket : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEvent OnEvent;
    
    UNetSocket();

    UFUNCTION(BlueprintCallable)
    UNetSocket* SetUseTickReceive(bool use);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    UNetSocket* SetHeader(UObject* WorldContextObject, const FString& marker, const FString& Version, int32 platform, const FString& userId);
    
    UFUNCTION(BlueprintCallable)
    UNetSocket* SetCipherMode(ENetSocketCipherMode mode, const FString& Key);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Send(UObject* WorldContextObject, UNetMessage* Data);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveSocket();
    
    UFUNCTION(BlueprintCallable)
    bool IsConnected();
    
    UFUNCTION(BlueprintCallable)
    ENetSocketCipherMode GetCipherMode();
    
    UFUNCTION(BlueprintCallable)
    FString GetCipherKey();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Disconnect(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNetSocket* Create(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Connect(UObject* WorldContextObject, const FString& ip, const FString& Port, float limitsec);
    
};

