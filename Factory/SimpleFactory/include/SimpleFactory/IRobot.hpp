#ifndef SIMPLE_FACTORY_I_ROBOT_H
#define SIMPLE_FACTORY_I_ROBOT_H

#include <string>

namespace design_patterns {

/**
 * @brief Robot interface containing the common characteristics between robots.
 */
class IRobot {
public:
    /**
     * @brief Construct a new IRobot object with a name.
     *
     * @param name Name of the new robot.
     */
    IRobot(const std::string& name)
        : mName(name) {
    }

    /** Default destructor */
    virtual ~IRobot() = default;

    /**
     * @return std::string with the name of the robot.
     */
    std::string getName() const {
        return mName;
    }

    /**
     * @brief Move the robot to a (x,y) position.
     *
     * @param x x coordinate of the new position of the robot.
     * @param y y coordinate of the new position of the robot.
     * @return true if the robot has successfully moved, false otherwise.
     */
    virtual bool move(const float& x, const float& y) = 0;

protected:
    /** Name of the robot */
    std::string mName;
};

} // namespace design_patterns

#endif /* SIMPLE_FACTORY_I_ROBOT_H */