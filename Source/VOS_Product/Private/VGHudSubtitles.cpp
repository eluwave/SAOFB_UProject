#include "VGHudSubtitles.h"

UVGHudSubtitles::UVGHudSubtitles() {
    this->m_state = EVGHudSubtitlesState::Idle;
    this->m_chara_name = NULL;
    this->m_subtitles = NULL;
}

