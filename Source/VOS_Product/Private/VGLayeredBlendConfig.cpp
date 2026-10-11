#include "VGLayeredBlendConfig.h"

FVGLayeredBlendConfig::FVGLayeredBlendConfig() {
    this->bMeshSpaceRotationBlend = false;
    this->CurveBlendOption = ECurveBlendOption::MaxWeight;
    this->bBlendRootMotionBasedOnRootBone = false;
    this->bHasRelevantPoses = false;
}

