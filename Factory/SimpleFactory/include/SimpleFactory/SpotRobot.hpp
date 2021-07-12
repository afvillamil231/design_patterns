#ifndef SIMPLE_FACTORY_SPOT_ROBOT_H
#define SIMPLE_FACTORY_SPOT_ROBOT_H

#include <iostream>

#include "IRobot.hpp"

namespace design_patterns {

/**
 * @brief Spot Robot implementation. @see IRobot.
 */
struct SpotRobot : public IRobot {
    /**
     * @brief Construct a new SpotRobot.
     * 
     * @param name Name of the SpotRobot.
     */
    SpotRobot(const std::string& name)
        : IRobot(name) {
    }

    /**
     * @brief move function implementation. @see IRobot.
     */
    bool move(const float& x, const float& y) override {
        std::cout << mName << ": moved to (" << x << "," << y << ")\n";
        return true;
    }
};

} // namespace design_patterns

#endif /* SIMPLE_FACTORY_SPOT_ROBOT_H */