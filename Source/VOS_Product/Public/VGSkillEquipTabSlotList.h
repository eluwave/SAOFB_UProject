#pragma once
#include "CoreMinimal.h"
#include "VGWidget.h"
#include "VGSkillEquipTabSlotList.generated.h"

class UCanvasPanel;
class UVGGridView;
class UVGSkillEquipSlotList;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSkillEquipTabSlotList : public UVGWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_skill_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillEquipSlotList* m_skill_slot_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_gadget_base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGSkillEquipSlotList* m_gadget_slot_list;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGGridView* m_gv_tab;
    
public:
    UVGSkillEquipTabSlotList();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMoveTabIndex(int32 value);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeaveItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentTabText() const;
    
    UFUNCTION(BlueprintCallable)
    void EnterItems();
    
};

