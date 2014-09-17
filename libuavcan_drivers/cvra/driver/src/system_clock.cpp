#include <uavcan_cvra/can.hpp>

namespace uavcan_cvra
{

class SystemClock : uavcan::ISystemClock
{

static uavcan::uint32_t time_us;

uavcan::MonotonicTime getMonotonic() const
{
    return uavcan::MonotonicTime::fromUSec(time_us++);
}

uavcan::UtcTime getUtc() const
{
    return uavcan::UtcTime::fromUSec(time_us);
}

void adjustUtc(uavcan::UtcDuration adjustment)
{

}

};

}  /* namespace uavcan_cvra */
