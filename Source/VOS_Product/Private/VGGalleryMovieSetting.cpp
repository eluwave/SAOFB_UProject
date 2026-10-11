#include "VGGalleryMovieSetting.h"

FVGGalleryMovieSetting::FVGGalleryMovieSetting() {
    this->thumbnail = NULL;
    this->m_movie_type = EVGMovieType::Movie;
    this->progress = 0;
    this->is_can_not_share = false;
    this->is_dlc = false;
    this->is_force_unlock = false;
}

