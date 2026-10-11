#pragma once
#include "CoreMinimal.h"
#include "Components/EditableTextBox.h"
#include "VGEditableTextBox.generated.h"

UCLASS(Blueprintable)
class VOS_PRODUCT_API UVGEditableTextBox : public UEditableTextBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LettersToMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RegexString;
    
    UVGEditableTextBox();

    UFUNCTION(BlueprintCallable)
    void CommitText();
    
};

