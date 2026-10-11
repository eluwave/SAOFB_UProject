#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGAfasysMenuWidget.generated.h"

class UVGAfasysMenuAmIptValue;
class UVGAfasysMenuAmMoney;
class UVGMainMenuIndex;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGAfasysMenuWidget : public UVGWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuIndex* m_main_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGMainMenuIndex* m_sub_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGWidget*> m_settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAfasysMenuAmIptValue* m_am_ipt_value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAfasysMenuAmMoney* m_am_money;
    
public:
    UVGAfasysMenuWidget();

};

