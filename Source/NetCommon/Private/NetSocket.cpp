#include "NetSocket.h"

UNetSocket::UNetSocket() {
}

UNetSocket* UNetSocket::SetUseTickReceive(bool use) {
    return NULL;
}

UNetSocket* UNetSocket::SetHeader(UObject* WorldContextObject, const FString& marker, const FString& Version, int32 platform, const FString& userId) {
    return NULL;
}

UNetSocket* UNetSocket::SetCipherMode(ENetSocketCipherMode mode, const FString& Key) {
    return NULL;
}

void UNetSocket::Send(UObject* WorldContextObject, UNetMessage* Data) {
}

void UNetSocket::ReceiveSocket() {
}

bool UNetSocket::IsConnected() {
    return false;
}

ENetSocketCipherMode UNetSocket::GetCipherMode() {
    return ENetSocketCipherMode::None;
}

FString UNetSocket::GetCipherKey() {
    return TEXT("");
}

void UNetSocket::Disconnect(UObject* WorldContextObject) {
}

UNetSocket* UNetSocket::Create(UObject* WorldContextObject) {
    return NULL;
}

void UNetSocket::Connect(UObject* WorldContextObject, const FString& ip, const FString& Port, float limitsec) {
}

