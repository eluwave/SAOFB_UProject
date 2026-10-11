#include "VGBattleRuleComponentCoop.h"

UVGBattleRuleComponentCoop::UVGBattleRuleComponentCoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_aggregator = NULL;
    this->m_wait_dialog = NULL;
}

