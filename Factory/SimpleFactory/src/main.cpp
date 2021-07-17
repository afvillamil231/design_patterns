
#include "SimpleFactory/RobotFactory.hpp"

using namespace design_patterns;

int main(int argc, char *argv[]) {

    // Create a Spot robot
    auto spotRobot = RobotFactory::createRobot(RobotType::SPOT_ROBOT);
    // Create a Kobuki robot
    auto kobukiRobot = RobotFactory::createRobot(RobotType::KOBUKI_ROBOT);
    // Create another Kobuki robot
    auto turtleRobot = RobotFactory::createRobot(RobotType::KOBUKI_ROBOT);

    std::cout << "Going to move Spot...\n";
    spotRobot->move(2, 2);

    std::cout << "Going to move Kobuki...\n";
    kobukiRobot->move(2, 2);

    std::cout << "Going to move turtlebot...\n";
    turtleRobot->move(2, 2);

    // Trying to create an unknown robot
    auto anotherRobot = RobotFactory::createRobot(RobotType::UNKNOWN);
    if (!anotherRobot) {
        std::cout << "Unknown robot type\n";
    }
}