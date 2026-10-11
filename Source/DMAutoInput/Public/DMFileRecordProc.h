#pragma once
#include "CoreMinimal.h"
#include "DMInputRecordProc.h"
#include "DMFileRecordProc.generated.h"

UCLASS(Blueprintable)
class DMAUTOINPUT_API UDMFileRecordProc : public UDMInputRecordProc {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_log_fime_name;
    
public:
    UDMFileRecordProc();

};

