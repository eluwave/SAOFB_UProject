#pragma once
#include "CoreMinimal.h"
#include "EVGCharaGender.h"
#include "EVGCharaUnique.h"
#include "Templates/SubclassOf.h"
#include "VGTextSymbol.h"
#include "VGCharacterSetup.generated.h"

class AVGCharacter;
class UBehaviorTree;
class UDataTable;
class UVGAvatarCustomizeSetting;
class UVGCharacterEquipmentTable;
class UVGCharacterFigureSetting;

USTRUCT(BlueprintType)
struct VOS_PRODUCT_API FVGCharacterSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaUnique ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVGTextSymbol Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVGCharaGender gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVGAvatarCustomizeSetting*> avatar_customize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterFigureSetting* avatar_figure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* level_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGCharacterEquipmentTable* equip_table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVGCharacter> pawn_class_ref;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* behavior_tree_ref;
    
    FVGCharacterSetup();
};

