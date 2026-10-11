#include "VGAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "VGAIUnitComponent.h"
#include "VGPathFollowingComponent.h"

AVGAIController::AVGAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UVGPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->m_owner_state_code = 0;
    this->m_bb_component = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComponent"));
    this->m_ai_unit_component = CreateDefaultSubobject<UVGAIUnitComponent>(TEXT("VGAIUnitComponent"));
    this->m_current_target = NULL;
}

void AVGAIController::StopBehaviorTree() {
}

void AVGAIController::SetUnit(UVGAIUnit* unit) {
}

void AVGAIController::SetPerceptionSightRadius(float SightRadius, float LoseSightRadius) {
}

void AVGAIController::SetInput(TArray<TEnumAsByte<EVGPadKey::Type>> Keys, float press_time) {
}

void AVGAIController::SetCurrentTarget(AVGCharacter* Target, FName NodeName) {
}

void AVGAIController::ReleaseInput(TArray<TEnumAsByte<EVGPadKey::Type>> Keys) {
}

FVGAIUnitParam AVGAIController::GetUnitParam() const {
    return FVGAIUnitParam{};
}

UVGAIUnit* AVGAIController::GetUnit() const {
    return NULL;
}

AVGAITeam* AVGAIController::GetTeam() const {
    return NULL;
}

FVector AVGAIController::GetEndLocation() const {
    return FVector{};
}

FName AVGAIController::GetCurrentTargetNodeName() const {
    return NAME_None;
}

void AVGAIController::GetCurrentTargetLocation(FVector& Location) const {
}

AActor* AVGAIController::GetCurrentTarget() const {
    return NULL;
}

UBlackboardComponent* AVGAIController::GetBlackboardComponent() {
    return NULL;
}

UVGAIUnitComponent* AVGAIController::GetAIUnitComponent() {
    return NULL;
}

void AVGAIController::ApplyUnitParam() const {
}

void AVGAIController::AddInput(TArray<TEnumAsByte<EVGPadKey::Type>> Keys, float press_time, bool press_time_add) {
}

