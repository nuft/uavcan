#include <uavcan_cvra/can.hpp>
#include <stdlib.h>

namespace uavcan_cvra
{

/* CanIface */

uavcan::int16_t CanIface::send(const uavcan::CanFrame& frame, uavcan::MonotonicTime tx_deadline, uavcan::CanIOFlags flags)
{
    printf("can send\n");
    return 0;
}

uavcan::int16_t CanIface::receive(uavcan::CanFrame& out_frame, uavcan::MonotonicTime& out_ts_monotonic, uavcan::UtcTime& out_ts_utc, uavcan::CanIOFlags& out_flags)
{
    printf("can receive\n");
    return 0;
}

uavcan::int16_t CanIface::configureFilters(const uavcan::CanFilterConfig* filter_configs, uavcan::uint16_t num_configs)
{
    printf("can configureFilters\n");
    return 0;
}

uavcan::uint16_t CanIface::getNumFilters()
{
    printf("can getNumFilters\n");
    return 0;
}

uavcan::uint64_t CanIface::getErrorCount()
{
    printf("can getErrorCount\n");
    return 0;
}

/* CanDriver */

uavcan::int16_t CanDriver::select(uavcan::CanSelectMasks& inout_masks, const uavcan::MonotonicTime blocking_deadline)
{
    printf("can select\n");
    return 0;
}

CanIface* CanDriver::getIface(uavcan::uint8_t iface_index)
{
    printf("can getIface\n");
    return NULL;
}

uavcan::uint8_t CanDriver::getNumIfaces() const
{
    return 1;
}

} /* namespace uavcan_cvra */

extern "C"
{

/* interrupt handlers come here */

// libopencm3 isr handlers:

// void can1_tx_isr(void);
// void can1_rx0_isr(void);
// void can1_rx1_isr(void);
// void can1_sce_isr(void);

// void can2_tx_isr(void);
// void can2_rx0_isr(void);
// void can2_rx1_isr(void);
// void can2_sce_isr(void);

} /* extern "C" */
