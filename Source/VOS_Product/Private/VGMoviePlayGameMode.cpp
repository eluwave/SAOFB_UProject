#include "VGMoviePlayGameMode.h"

AVGMoviePlayGameMode::AVGMoviePlayGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_sequence_class = NULL;
    this->m_demo_fade_in_time = 0.50f;
    this->m_movie_player = NULL;
    this->m_demo_player = NULL;
    this->m_movie_data = NULL;
    this->m_movie_data_table = NULL;
}

