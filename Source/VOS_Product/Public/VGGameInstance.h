#pragma once
#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VGGameInstance.generated.h"

class UObject;
class UVGDialog;
class UVGGameInstance;
class UVGGameplayContext;

UCLASS(Blueprintable, NonTransient)
class VOS_PRODUCT_API UVGGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnTransitionStart);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTransitionStart onTransitionStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVGGameplayContext* m_gameplay_context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_object_holder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVGDialog* m_dialog;
    
public:
    UVGGameInstance();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UVGGameInstance* Get(UObject* WorldContext);
    
};

