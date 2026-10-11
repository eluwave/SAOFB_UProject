#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Misc/StringAssetReference.h"
#include "VGQuestAdditionalReward.h"
#include "VGQuestLocation.h"
#include "VGQuestLibrary.generated.h"

class UObjectLibrary;
class UVGQuestAsset;
class UVGQuestLibrary;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGQuestLibrary : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FStringAssetReference> m_quest_data_map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FVGQuestLocation> m_quest_locations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGQuestAdditionalReward> m_additional_rewards;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_add_quest_paths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UVGQuestAsset*> m_quest_asset_map;
    
public:
    UVGQuestLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UVGQuestLibrary* Get();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVGQuestAsset* FindQuest(FName Name) const;
    
    UFUNCTION(BlueprintCallable)
    void EnumQuestAsset(int32 categoryMask, const FString& regex, TArray<UVGQuestAsset*>& OutVal);
    
};

