#include "VGBTD_CheckCommand.h"

UVGBTD_CheckCommand::UVGBTD_CheckCommand() {
    this->NodeName = TEXT("VGBTD CheckCommand");
    this->m_command = EVGUnitCommand::STANDBY;
}

