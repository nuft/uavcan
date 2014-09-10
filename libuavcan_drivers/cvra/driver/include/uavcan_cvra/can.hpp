#include <uavcan/driver/can.hpp>

namespace uavcan_cvra
{

class CanIface : public uavcan::ICanIface, uavcan::Noncopyable
{
    virtual uavcan::int16_t send(const uavcan::CanFrame& frame, uavcan::MonotonicTime tx_deadline, uavcan::CanIOFlags flags);

    virtual uavcan::int16_t receive(uavcan::CanFrame& out_frame, uavcan::MonotonicTime& out_ts_monotonic, uavcan::UtcTime& out_ts_utc, uavcan::CanIOFlags& out_flags);

    virtual uavcan::int16_t configureFilters(const uavcan::CanFilterConfig* filter_configs, uavcan::uint16_t num_configs);

    virtual uavcan::uint16_t getNumFilters();

    virtual uavcan::uint64_t getErrorCount();
};

class CanDriver : public uavcan::ICanDriver, uavcan::Noncopyable
{
    virtual CanIface* getIface(uavcan::uint8_t iface_index);

    virtual uavcan::uint8_t getNumIfaces();

    virtual uavcan::int16_t select(uavcan::CanSelectMasks& inout_masks, uavcan::MonotonicTime blocking_deadline);
};

}