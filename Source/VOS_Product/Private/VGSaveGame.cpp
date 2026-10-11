#include "VGSaveGame.h"

UVGSaveGame::UVGSaveGame() {
    this->m_slot_chunk.AddDefaulted(4);
    this->m_world_context = NULL;
}

