#include "VGPathFollowingComponent.h"

UVGPathFollowingComponent::UVGPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UVGPathFollowingComponent::IsWarpNextSegment() const {
    return false;
}

bool UVGPathFollowingComponent::IsOffmeshSegment() const {
    return false;
}

bool UVGPathFollowingComponent::IsObstacleSegment() const {
    return false;
}

bool UVGPathFollowingComponent::IsJumpSegment() const {
    return false;
}

bool UVGPathFollowingComponent::IsCrouchSegment() const {
    return false;
}

