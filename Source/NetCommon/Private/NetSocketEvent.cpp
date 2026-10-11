#include "NetSocketEvent.h"

UNetSocketEvent::UNetSocketEvent() {
}

ENetSocketEventID UNetSocketEvent::GetEventId() {
    return ENetSocketEventID::Connected;
}

UNetMessage* UNetSocketEvent::GetData() {
    return NULL;
}

UNetSocketEvent* UNetSocketEvent::Create(UObject* WorldContextObject) {
    return NULL;
}

