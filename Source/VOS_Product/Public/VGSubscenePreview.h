#pragma once
#include "CoreMinimal.h"
#include "Misc/StringAssetReference.h"
#include "Blueprint/UserWidget.h"
#include "VGSubscenePreview.generated.h"

class UImage;
class UVGAvatarCustomizeSetting;

UCLASS(Blueprintable, EditInlineNew)
class VOS_PRODUCT_API UVGSubscenePreview : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringAssetReference m_preview_material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_preview_customize_setting_male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_preview_customize_setting_female;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVGAvatarCustomizeSetting* m_preview_customize_setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* m_img_ui;
    
public:
    UVGSubscenePreview();

};

