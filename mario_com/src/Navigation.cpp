/**
 * @file Navigation.cpp
 * @author Bharadwaj Chukkala (bchukkal@umd.edu) [Driver]
 * @author Adarsh Malapaka (amalapak@umd.edu) [Navigator]
 * @author Kumara Ritvik Oruganti (okritvik@umd.edu) [Design Keeper]
 * @brief Navigation class implementation (code stubs) 
 * @version 0.1
 * @date 2022-12-02
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/mario_com/Navigation.hpp"
#include <cmath>
#include <rclcpp/logger.hpp>
#include <rclcpp/logging.hpp>
#include <rclcpp/utilities.hpp>


void Navigation::odom_callback_search(const ODOM::SharedPtr msg) {
    if ((std::abs(static_cast<int>(msg->pose.pose.position.y - req_pos_y))
        == 0) && (std::abs(static_cast<int>(msg->pose.pose.position.x)) == 0)) {
            check_odom = true;
    }
}

void Navigation::odom_callback_disposal(const ODOM::SharedPtr msg) {
    if ((std::abs(static_cast<int>(msg->pose.pose.position.x - 3)) == 0)
        && (std::abs(static_cast<int>(msg->pose.pose.position.y + 2.5)) == 0)) {
            check_odom = true;
    }
}

void Navigation::odom_callback_resume(const ODOM::SharedPtr msg) {
    if ((std::abs(static_cast<int>(msg->pose.pose.position.x)) == 0)
        && (std::abs(static_cast<int>(msg->pose.pose.position.y)) == 0)) {
            check_odom = true;
    }
}

Navigation::Navigation() : Node("navigation") {
    node_odom_nav = rclcpp::Node::
                    make_shared("odom_node");
    nav_publisher_ = this->create_publisher<POSE>("goal_pose", 10);
    check_odom = false;
    req_pos_y = 0.0;
}

bool Navigation::search_bins() {
    rclcpp::sleep_for(1000ms);
    std::vector<float_t> search_pos = {6.0, 4.0, 2.0, 0.0};
    auto odom_sub = node_odom_nav->create_subscription<ODOM>("odom", 10,
                        std::bind(&Navigation::odom_callback_search, this, _1));
    while (search_pos.size() > 0) {
        float_t pop_pos = search_pos.back();
        search_pos.pop_back();
        RCLCPP_INFO(this->get_logger(), "In Search Bins %d %f",
                    search_pos.size(), pop_pos);
        check_odom = false;
        req_pos_y = pop_pos;
        POSE rpyGoal;
        rpyGoal.header.frame_id = "map";
        rpyGoal.header.stamp = this->get_clock()->now();

        rpyGoal.pose.position.x = 0;
        rpyGoal.pose.position.y = pop_pos;
        rpyGoal.pose.position.z = 0;
        rpyGoal.pose.orientation.x = 0;
        rpyGoal.pose.orientation.y = 0;
        rpyGoal.pose.orientation.z = 0;
        rpyGoal.pose.orientation.w = 1;
        while (!check_odom) {
            rclcpp::spin_some(node_odom_nav);
            nav_publisher_->publish(rpyGoal);
            rclcpp::sleep_for(500ms);
        }
        return false;
    }
    return true;
}

bool Navigation::move_to_disposal_zone() {
    RCLCPP_INFO(this->get_logger(), "In Move to Disposal Zone");
    check_odom = false;
    auto odom_sub = node_odom_nav->create_subscription<ODOM>("odom", 10,
                    std::bind(&Navigation::odom_callback_disposal, this, _1));
    POSE rpyGoal;
    rpyGoal.header.frame_id = "map";
    rpyGoal.header.stamp = this->get_clock()->now();
    rpyGoal.pose.position.x = 3;
    rpyGoal.pose.position.y = -2.5;
    rpyGoal.pose.position.z = 0;
    rpyGoal.pose.orientation.x = 0;
    rpyGoal.pose.orientation.y = 0;
    rpyGoal.pose.orientation.z = 0;
    rpyGoal.pose.orientation.w = 1;

    while (!check_odom) {
        rclcpp::spin_some(node_odom_nav);
        nav_publisher_->publish(rpyGoal);
        rclcpp::sleep_for(500ms);
    }
    return true;
}

bool Navigation::resume_search() {
    RCLCPP_INFO(this->get_logger(), "In move to resume search");
    check_odom = false;
    auto odom_sub = node_odom_nav->create_subscription<ODOM>("odom", 10,
                    std::bind(&Navigation::odom_callback_search, this, _1));
    POSE rpyGoal;
    rpyGoal.header.frame_id = "map";
    rpyGoal.header.stamp = this->get_clock()->now();
    rpyGoal.pose.position.x = 0;
    rpyGoal.pose.position.y = 0;
    rpyGoal.pose.position.z = 0;
    rpyGoal.pose.orientation.x = 0;
    rpyGoal.pose.orientation.y = 0;
    rpyGoal.pose.orientation.z = 0;
    rpyGoal.pose.orientation.w = 1;

    while (!check_odom) {
        rclcpp::spin_some(node_odom_nav);
        nav_publisher_->publish(rpyGoal);
        rclcpp::sleep_for(500ms);
    }
    rclcpp::shutdown();
    return true;
}
