//IMU와 통신하는 클래스
#include "./common/Types.hpp"

class AccelerationSensor
{
public:

    bool init();

    Acceleration read();

    void shutdown();
};