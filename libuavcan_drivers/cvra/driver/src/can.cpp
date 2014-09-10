#include <uavcan_cvra/can.hpp>

namespace uavcan_cvra
{

/* CanIface */

uavcan::int16_t CanIface::send(const uavcan::CanFrame& frame, uavcan::MonotonicTime tx_deadline, uavcan::CanIOFlags flags)
{

    return 0;
}

uavcan::int16_t CanIface::receive(uavcan::CanFrame& out_frame, uavcan::MonotonicTime& out_ts_monotonic, uavcan::UtcTime& out_ts_utc, uavcan::CanIOFlags& out_flags)
{

    return 0;
}

uavcan::int16_t CanIface::configureFilters(const uavcan::CanFilterConfig* filter_configs, uavcan::uint16_t num_configs)
{

    return 0;
}

uavcan::uint16_t CanIface::getNumFilters()
{

    return 0;
}

uavcan::uint64_t CanIface::getErrorCount()
{

    return 0;
}

/* CanDriver */

uavcan::int16_t CanDriver::select(uavcan::CanSelectMasks& inout_masks, const uavcan::MonotonicTime blocking_deadline)
{

    return 0;
}

CanIface* CanDriver::getIface(uavcan::uint8_t iface_index)
{

    return NULL;
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
