#include <uavcan_cvra/can.hpp>
#include <uavcan_cvra/system_clock.hpp>

namespace uavcan_cvra
{

static uavcan::uint32_t time_us;

uavcan::MonotonicTime SystemClock::getMonotonic() const
{
    return uavcan::MonotonicTime::fromUSec(time_us++);
}

uavcan::UtcTime SystemClock::getUtc() const
{
    return uavcan::UtcTime::fromUSec(time_us);
}

void SystemClock::adjustUtc(uavcan::UtcDuration adjustment)
{

}


}  /* namespace uavcan_cvra */
