#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Components/ActorComponent.h"
#include "VGEncryptStringData.h"
#include "VGReplaceStringData.h"
#include "VGNGWordCheckComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGNGWordCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_black_list_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_white_list_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_replace_list_asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGEncryptStringData> m_black_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGEncryptStringData> m_white_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGReplaceStringData> m_replace_list;
    
public:
    UVGNGWordCheckComponent(const FObjectInitializer& ObjectInitializer);

};

