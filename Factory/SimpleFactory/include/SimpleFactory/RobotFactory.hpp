#ifndef SIMPLE_FACTORY_ROBOT_FACTORY_H
#define SIMPLE_FACTORY_ROBOT_FACTORY_H

#include <memory>

#include "KobukiRobot.hpp"
#include "SpotRobot.hpp"

namespace design_patterns {

/**
 * @brief Enum containing the available types of robot implementation.
 */
enum class RobotType { SPOT_ROBOT, KOBUKI_ROBOT, UNKNOWN };

/**
 * @brief IRobot factory.
 */
struct RobotFactory {
    /**
     * @brief Create a new unique IRobot object based on itr type.
     * 
     * @param type Type of the desired robot.
     * @return std::unique_ptr<IRobot> to a IRobot object implementation.
     */
    static std::unique_ptr<IRobot> createRobot(const RobotType& type) {
        switch (type) {
            case RobotType::SPOT_ROBOT:
                return std::make_unique<SpotRobot>("Spot");
            case RobotType::KOBUKI_ROBOT:
                return std::make_unique<KobukiRobot>("Kobuki", ++id);
            default:
                return nullptr;
        }
    }

    /** Unique ID of the robot */
    inline static uint64_t id = 0;
};

} // namespace design_patterns

#endif /* SIMPLE_FACTORY_ROBOT_FACTORY_H */