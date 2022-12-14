/**
 * @file main.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) [Driver]
 * @author Adarsh Malapaka (amalapak@umd.edu) [Navigator]
 * @author Kumara Ritvik Oruganti (okritvik@umd.edu) [Design Keeper]
 * @brief Main file for simulation and demo.
 * @version 0.1
 * @date 2022-12-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/mario_com/RobotSim.hpp"
#include <rclcpp/utilities.hpp>
// # include "rclcpp/rclcpp.hpp"
int main(int argc, char * argv[]) {
    // Code stub
    rclcpp::init(argc, argv);
    RobotSim rs;
    // rclcpp::sleep_for(5s);
    rs.m_manip.pick_bin();
    // rclcpp::spin(rs.m_nav);
    // RCLCPP_INFO(rclcpp::get_logger("log"), "Before While Main");
    // while (!rs.m_nav.search_bins()) {
    //     RCLCPP_INFO(rclcpp::get_logger("log"), "Inside while");
    //     if (rs.m_perc.detect_bin()) {
    //         RCLCPP_INFO(rclcpp::get_logger("log"), "Inside det bin main");
    //         break;
    //     }
    // }
    // rs.m_nav.move_to_disposal_zone();
    // rs.m_nav.resume_search();
    // // while (rclcpp::ok()) {
    // //     continue;
    // // }
    rclcpp::shutdown();
    cv::destroyWindow("view");
    return 0;
}
