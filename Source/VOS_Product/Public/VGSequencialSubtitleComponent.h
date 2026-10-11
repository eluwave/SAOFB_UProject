#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VGSequencialSubtitleData.h"
#include "VGSequencialSubtitleComponent.generated.h"

class UVGHudSubtitles;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class VOS_PRODUCT_API UVGSequencialSubtitleComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVGHudSubtitles* m_subtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVGSequencialSubtitleData> m_data_array;
    
public:
    UVGSequencialSubtitleComponent(const FObjectInitializer& ObjectInitializer);

};

