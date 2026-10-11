#pragma once
#include "CoreMinimal.h"

#include "VGTextSymbol.h"
#include "VGWidget.h"
#include "VGHudSkillSet.generated.h"

class UTextBlock;
class UVGHudPlayerSkill;
class UVGOutlineTextBlock;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGHudSkillSet : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_skill_page_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol m_gadget_page_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_skill_page_name_color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor m_gadget_page_name_color;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGHudPlayerSkill*> m_skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGHudPlayerSkill*> m_gadget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UVGOutlineTextBlock*> m_skill_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_page_text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_page_info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGWidget* m_skill_freeze;
    
public:
    UVGHudSkillSet();

    UFUNCTION(BlueprintCallable)
    void UpdateSkillLayerID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangeSkillLayer();
    
};

