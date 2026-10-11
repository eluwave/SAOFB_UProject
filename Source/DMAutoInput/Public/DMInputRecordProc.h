#pragma once
#include "CoreMinimal.h"
#include "DMAutoInputProcBase.h"
#include "DMInputRecord.h"
#include "EDMAutoInputKeyType.h"
#include "DMInputRecordProc.generated.h"

UCLASS(Blueprintable)
class DMAUTOINPUT_API UDMInputRecordProc : public UDMAutoInputProcBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDMInputRecord> m_input_record;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDMInputRecord> m_input_record_buffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EDMAutoInputKeyType> pre_push_key;
    
public:
    UDMInputRecordProc();

};

