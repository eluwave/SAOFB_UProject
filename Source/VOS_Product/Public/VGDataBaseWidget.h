#pragma once
#include "CoreMinimal.h"
#include "VGDataBase.h"
#include "VGDataBaseTypeInfo.h"
#include "VGWidget.h"
#include "VGDataBaseWidget.generated.h"

class UVGTabbedListView;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGDataBaseWidget : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDataBaseTypeInfo> m_data_base_type_infos;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGTabbedListView* m_tv_items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVGDataBase> m_data_base_items;
    
public:
    UVGDataBaseWidget();

    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void Show(bool is_disable_se);
    
    UFUNCTION(BlueprintCallable)
    void Hide(bool is_disable_se);
    
    UFUNCTION(BlueprintCallable)
    void End();
    
};

