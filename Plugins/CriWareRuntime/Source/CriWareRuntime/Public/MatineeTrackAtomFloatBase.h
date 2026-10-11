#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "MatineeTrackAtomFloatBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMatineeTrackAtomFloatBase : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    virtual const FString GetEdHelperClassName() const override { return FString(); }
    virtual const FString GetSlateHelperClassName() const override { return FString(); }
#if WITH_EDITORONLY_DATA
    virtual class UTexture2D* GetTrackIcon() const override { return nullptr; }
#endif
    virtual FColor GetKeyframeColor(int32 KeyIndex) const override { return FColor::White; }

public:
    UMatineeTrackAtomFloatBase();

};

