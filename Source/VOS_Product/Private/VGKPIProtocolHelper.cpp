#include "VGKPIProtocolHelper.h"

UVGKPIProtocolHelper::UVGKPIProtocolHelper() {
}

UVGKPIAProtocolMessage* UVGKPIProtocolHelper::EditRequestByName(UObject* WorldContextObject, const FString& Name, const FString& Json) {
    return NULL;
}

FString UVGKPIProtocolHelper::DumpSocketMessage(const FString& prefix, UNetMessage* Msg) {
    return TEXT("");
}

FString UVGKPIProtocolHelper::DumpHttpMessage(const FString& prefix, UVGKPIAProtocolMessage* Request, UNetMessage* Response) {
    return TEXT("");
}

UVGKPIAProtocolMessage* UVGKPIProtocolHelper::CreateRequestByType(UObject* WorldContextObject, int32 Type) {
    return NULL;
}

UVGKPIAProtocolMessage* UVGKPIProtocolHelper::CreateRequestByName(UObject* WorldContextObject, const FString& Name) {
    return NULL;
}

