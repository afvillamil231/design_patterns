#ifndef SIMPLE_FACTORY_KOBUKI_ROBOT_H
#define SIMPLE_FACTORY_KOBUKI_ROBOT_H

#include <iostream>

#include "IRobot.hpp"

namespace design_patterns {

/**
 * @brief Kobuki Robot implementation. @see IRobot.
 */
struct KobukiRobot : public IRobot {
    /**
     * @brief Construct a new KobukiRobot.
     *
     * @param name Name of the KobukiRobot.
     * @param id Each kobuki robot has an unique identifier.
     */
    KobukiRobot(const std::string& name, const uint64_t& id)
        : IRobot(name)
        , mId(id) {
    }

    /**
     * @brief move function implementation. @see IRobot.
     */
    bool move(const float& x, const float& y) override {
        std::cout << mName << " #" << mId << ": moved to (" << x << "," << y << ")\n";
        return true;
    }
    uint64_t mId { 0 };
};

} // namespace design_patterns

#endif /* SIMPLE_FACTORY_KOBUKI_ROBOT_H */