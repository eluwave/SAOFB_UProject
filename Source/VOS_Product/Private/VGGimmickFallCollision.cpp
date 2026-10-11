#include "VGGimmickFallCollision.h"

AVGGimmickFallCollision::AVGGimmickFallCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_damage_percentage = 10.00f;
}

bool AVGGimmickFallCollision::SetFallKill(AVGBattleCharacter* Character) {
    return false;
}

bool AVGGimmickFallCollision::SetFallDamage(AVGBattleCharacter* Character) {
    return false;
}

void AVGGimmickFallCollision::OnFall(AVGBattleCharacter* Character) {
}

bool AVGGimmickFallCollision::IsTransition() const {
    return false;
}

bool AVGGimmickFallCollision::IsShowResult() const {
    return false;
}

FTransform AVGGimmickFallCollision::GetReverseTransform(AVGBattleCharacter* Character) {
    return FTransform{};
}

