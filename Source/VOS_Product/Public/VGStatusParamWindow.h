#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGStatusParamWindow.generated.h"

class UDataTable;
class UVGCharacterParam;
class UVGGridView;
class UVGStatusParamListItem;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGStatusParamWindow : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_character_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_character_lv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_customize_point;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_character_role_icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_param_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGStatusParamListItem*> m_param_item;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterParam* m_target_parameter;
    
public:
    UVGStatusParamWindow();

};

