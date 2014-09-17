
#pragma once

#include <uavcan/driver/can.hpp>

namespace uavcan_cvra
{

class CanIface : public uavcan::ICanIface, uavcan::Noncopyable
{
    uavcan::int16_t send(const uavcan::CanFrame& frame, uavcan::MonotonicTime tx_deadline, uavcan::CanIOFlags flags);

    uavcan::int16_t receive(uavcan::CanFrame& out_frame, uavcan::MonotonicTime& out_ts_monotonic, uavcan::UtcTime& out_ts_utc, uavcan::CanIOFlags& out_flags);

    uavcan::int16_t configureFilters(const uavcan::CanFilterConfig* filter_configs, uavcan::uint16_t num_configs);

    uavcan::uint16_t getNumFilters();

    uavcan::uint64_t getErrorCount();
};

class CanDriver : public uavcan::ICanDriver, uavcan::Noncopyable
{
    CanIface* getIface(uavcan::uint8_t iface_index);

    uavcan::uint8_t getNumIfaces() const;

    uavcan::int16_t select(uavcan::CanSelectMasks& inout_masks, uavcan::MonotonicTime blocking_deadline);
};

}
