#include "VGStatusMeterParam.h"

FVGStatusMeterParam::FVGStatusMeterParam() {
    this->meter_rate = 0.00f;
    this->info_icon_visibility = ESlateVisibility::Visible;
    this->up_param_value = 0;
    this->down_param_value = 0;
    this->numerator_value = 0;
    this->denominator_value = 0;
    this->denominator_visibility = ESlateVisibility::Visible;
    this->percent_visibility = ESlateVisibility::Visible;
    this->border_rate_01 = 0.00f;
    this->border_rate_02 = 0.00f;
    this->border_rate_03 = 0.00f;
    this->border_rate_04 = 0.00f;
    this->border_rate_05 = 0.00f;
}

