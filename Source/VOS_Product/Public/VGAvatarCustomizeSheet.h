#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VGAvatarCustomizePage.h"
#include "VGAvatarCustomizeSubItem.h"
#include "VGAvatarCustomizeSheet.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGAvatarCustomizeSheet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGAvatarCustomizePage> Pages;
    
    UVGAvatarCustomizeSheet();

    UFUNCTION(BlueprintCallable)
    static void JsonStringToCustomizeSubItems(const FString& str, TArray<FVGAvatarCustomizeSubItem>& outValue);
    
    UFUNCTION(BlueprintCallable)
    static FString CustomizeSubItemsToJsonString(const TArray<FVGAvatarCustomizeSubItem>& SubItems);
    
    UFUNCTION(BlueprintCallable)
    static FString CustomizeSubItemsToBase64(const TArray<FVGAvatarCustomizeSubItem>& SubItems);
    
    UFUNCTION(BlueprintCallable)
    static void Base64ToCustomizeSubItems(const FString& str, TArray<FVGAvatarCustomizeSubItem>& outValue);
    
};

