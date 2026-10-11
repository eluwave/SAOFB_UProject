#pragma once
#include "CoreMinimal.h"
#include "EVGCharaUnique.h"
#include "Templates/SubclassOf.h"
#include "VGAfasysMenuBase.h"
#include "VGAfasysMenuMessage.h"
#include "VGTextSymbol.h"
#include "VGAfasysMenuCoordinate.generated.h"

class UVGAfasysMenuWidget;

UCLASS(Blueprintable)
class VOS_PRODUCT_API AVGAfasysMenuCoordinate : public AVGAfasysMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UVGAfasysMenuWidget> m_widget_class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVGCharaUnique> m_chara_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGAfasysMenuMessage m_start_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_main_index_text;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGAfasysMenuWidget* m_widget;
    
public:
    AVGAfasysMenuCoordinate(const FObjectInitializer& ObjectInitializer);

};

