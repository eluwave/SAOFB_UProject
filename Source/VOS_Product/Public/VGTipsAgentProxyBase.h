#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGTipsAgentProxyBase.generated.h"

class AActor;
class UTexture2D;
class UVGLoadingTips;

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGTipsAgentProxyBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGLoadingTips* m_loading_tips_widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_tips_image_asset_ptr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_tips_image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_world_context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_asset_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ignore_tips_ids;
    
public:
    UVGTipsAgentProxyBase();

};

