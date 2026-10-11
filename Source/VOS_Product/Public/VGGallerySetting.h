#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGGallerySetting.generated.h"

class UVGGallerySetting;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGGallerySetting : public UObject {
    GENERATED_BODY()
public:
    UVGGallerySetting();

    UFUNCTION(BlueprintCallable)
    void SetGallerySelectIndex(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableShare(bool is_enable);
    
    UFUNCTION(BlueprintCallable)
    static UVGGallerySetting* GetVGGallerySetting();
    
};

