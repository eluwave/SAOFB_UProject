#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "AtomSelectorTrackKeyframe.h"
#include "MatineeTrackAtomSelector.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomSelector : public UInterpTrack {
    GENERATED_BODY()
public:
    virtual const FString GetEdHelperClassName() const override { return FString(); }
    virtual const FString GetSlateHelperClassName() const override { return FString(); }
#if WITH_EDITORONLY_DATA
    virtual class UTexture2D* GetTrackIcon() const override { return nullptr; }
#endif
    virtual FColor GetKeyframeColor(int32 KeyIndex) const override { return FColor::White; }

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAtomSelectorTrackKeyframe> KeyframeList;
    
    UMatineeTrackAtomSelector();

};

