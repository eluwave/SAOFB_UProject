#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VGTextSymbol.h"
#include "VGUMGUtil.generated.h"

class UObjectLibrary;
class UVGLocalizeStorage;

UCLASS(Blueprintable, Config=Game)
class VOS_PRODUCT_API UVGUMGUtil : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectLibrary* m_lib_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGLocalizeStorage*> m_text_asset_table;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_highlight_devtext;
    
public:
    UVGUMGUtil();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVGTextSymbol StringToTextSymbol(const FString& value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetLocalizedText(const FVGTextSymbol& symbol, FText& OutVal);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeCurrentCulture(const FString& Culture);
    
};

