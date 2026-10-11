#pragma once
#include "CoreMinimal.h"

#include "Kismet/BlueprintFunctionLibrary.h"
#include "EVGPadKey.h"
#include "VGPadUtil.generated.h"

class UObject;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGPadUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVGPadUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasInputKeyJustReleased(EVGPadKey::Type code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool WasInputKeyJustPressed(EVGPadKey::Type code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInputKeyDown(EVGPadKey::Type code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetInputVectorKeyState(EVGPadKey::Type code, UObject* ContextObject, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetInputAnalogKeyState(EVGPadKey::Type code, UObject* ContextObject, int32 index);
    
};

