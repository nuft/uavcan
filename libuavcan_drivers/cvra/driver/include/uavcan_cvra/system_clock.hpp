
#pragma once

#include <uavcan/driver/system_clock.hpp>

namespace uavcan_cvra
{

class SystemClock : public uavcan::ISystemClock
{

    uavcan::MonotonicTime getMonotonic() const;

    uavcan::UtcTime getUtc() const;

    void adjustUtc(uavcan::UtcDuration adjustment);

};

} /* namespace uavcan_cvra */
