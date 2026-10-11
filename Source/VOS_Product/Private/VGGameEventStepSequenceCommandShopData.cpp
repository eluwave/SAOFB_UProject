#include "VGGameEventStepSequenceCommandShopData.h"

FVGGameEventStepSequenceCommandShopData::FVGGameEventStepSequenceCommandShopData() {
    this->op_type = EVGGameEventStepCommandShopOpType::UnregisterInventory;
    this->shop_level = 0;
}

