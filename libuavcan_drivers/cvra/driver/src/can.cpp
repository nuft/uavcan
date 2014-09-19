#include <uavcan_cvra/can.hpp>
#include <stdlib.h>

using namespace uavcan;

namespace uavcan_cvra
{

/* CanIface */

int16_t CanIface::send(const CanFrame& frame, MonotonicTime tx_deadline, CanIOFlags flags)
{
    printf("can send\n");
    return 0;
}

int16_t CanIface::receive(CanFrame& out_frame, MonotonicTime& out_ts_monotonic, UtcTime& out_ts_utc, CanIOFlags& out_flags)
{
    printf("can receive\n");
    return 0;
}

int16_t CanIface::configureFilters(const CanFilterConfig* filter_configs, uint16_t num_configs)
{
    printf("can configureFilters\n");
    return 0;
}

uint16_t CanIface::getNumFilters()
{
    printf("can getNumFilters\n");
    return 0;
}

uint64_t CanIface::getErrorCount()
{
    printf("can getErrorCount\n");
    return 0;
}

/* CanDriver */

int16_t CanDriver::select(CanSelectMasks& inout_masks, const MonotonicTime blocking_deadline)
{
    printf("can select\n");
    return 0;
}

CanIface* CanDriver::getIface(uint8_t iface_index)
{
    printf("can getIface\n");
    return NULL;
}

uint8_t CanDriver::getNumIfaces() const
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
