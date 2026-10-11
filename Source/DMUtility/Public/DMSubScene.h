#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"

#include "CaptureRequest.h"
#include "Templates/SubclassOf.h"
#include "DMSubScene.generated.h"

class AActor;
class UMaterialInterface;
class UStaticMesh;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, Config=Game)
class DMUTILITY_API UDMSubScene : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressSubscene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* PlaneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCaptureRequest> CaptureRequests;
    
public:
    UDMSubScene();

    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorSubScene(TSubclassOf<AActor> InClass, const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    static void RequestCapture(UTextureRenderTarget2D* inRT, UMaterialInterface* inMat);
    
    UFUNCTION(BlueprintCallable)
    static bool IsBusy();
    
};

