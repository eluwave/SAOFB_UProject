#include "VGShopAssetLibrary.h"

UVGShopAssetLibrary::UVGShopAssetLibrary() {
    this->m_lib_shop_inv = NULL;
    this->m_lib_shop = NULL;
    this->m_lib_weapon_reinforce = NULL;
    this->m_lib_info_item = NULL;
    this->m_lib_make_costume = NULL;
    this->m_lib_accessory_reinforce = NULL;
}

UVGShopAssetLibrary* UVGShopAssetLibrary::Get() {
    return NULL;
}

UVGShopInventoryAsset* UVGShopAssetLibrary::FindShopInventoryAsset(FName Name) const {
    return NULL;
}

UVGShopAsset* UVGShopAssetLibrary::FindShopAsset(FName Name) const {
    return NULL;
}

