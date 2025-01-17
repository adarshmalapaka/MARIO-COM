[![License](https://img.shields.io/badge/License-Apache_2.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)
[![Build Status](https://github.com/bharadwaj-chukkala/MARIO-COM/actions/workflows/build_and_coveralls.yml/badge.svg)](https://github.com/bharadwaj-chukkala/MARIO-COM/actions/workflows/build_and_coveralls.yml)
[![codecov](https://codecov.io/github/bharadwaj-chukkala/MARIO-COM/branch/master/graph/badge.svg?token=Q1YK1091YL)](https://codecov.io/github/bharadwaj-chukkala/MARIO-COM)
# Acme Robotics: Mobile Autonomous Robot for Indoor and Outdoor Collection Of Medical Waste (MARIO-COM)

<p align="center">
<img width="30%" alt="TB3" src="https://user-images.githubusercontent.com/40200916/205414289-5e2d0b42-9229-4a33-aab7-5330347e1d70.png">
</p>

<p align = "center">
Image for representative purposes only. </br>Source: https://emanual.robotis.com/docs/en/platform/turtlebot3/manipulation/#manipulation
</p>

## Overview

With the successful design and deployment of a robotic manipulator-based software solution for the automation of assembly line production of automobiles, Acme Robotics, Inc. has been able to maximize the efficiency of the automobile plant. As a part of its 5-year roadmap to further expand its expertise areas and leverage robotic solutions to touch human lives, a mobile robot-based medical waste collection and disposal solution is proposed to efficiently and safely transport medical waste trash bins from different locations inside a hospital to the disposal zone.

Hospital waste transport and handling is a time-consuming, hazardous and infectious process as the staff is exposed to be in contact with medical and bio-hazardous substances. The biomedical waste collected from hospital should not be stored in bins for more than 24 hours and has to be disposed immediately. In order to avoid this we need to ensure regular and safe disposal of waste to help the hospital maintain a clean environment for the patients, staff and visitors. There needs to exist a practical solution, if not one stop, that can take out the risk in the disposal and also be a safe and sustainable way to use technology for the betterment of human lives

The software design and development process shall involve adhering to an amalgamation of Agile Iterative Processes and pair-programming techniques over a course of three weeks. The efficacy of the implementation shall be verified using the test-driven development approach. The driver and navigator roles are exchanged during each phase of the project to effectively develop and complete the backlogs.

## Purpose & Methodology

The Robot will identify the bins in the surrounding environment and dispose them at a designated site. The robot will be deployed from an initial position from which it will traverse through the environment while scanning its nearby surroundings to check if a bin is present in the locality. If the robot recognizes a medical waste bin, it will move towards it, pick it up and dispose the trash in it at the site. After doing that it will rendezvous to the bin position to place the empty bin it it's place and start moving around to find other bins.

This Product will eliminate the usage of manual labour to dispose hazardous waste, thus restricting risks to human lives. Automating the process of disposal also saves the havoc of missing or delaying the disposal. Besides reducing human interaction in the process, it is also way more efficient than a typical human being, thus being an advancement for the better.

The product is a ROBOTIS turtlebot with Open Manipulator X Gripper attached to it. As the turtlebot moves around in the environment, the Manipulator attached to it will pick the bins and dispose the trash. The Product uses perception principles to identify a bin, pick it from it's initial position and place it back. The robot will have a visual sensor to perform the perception aspect of the product. The robot runs on a software with a built in search algorithm to traverse through the environment.

Assumptions:
* The Trigger for the robot to start it's search will be a set time in the night, because hospitals have lesser traffic in the night times.
* The Robot will move towards the closest bin in it's reach, if it encounters multiple bins in its visual frame
* All the trash cans in the hospital scene will be mostly full at the end of the day, so we assume full bins when the robot starts its search
* Once the trash cans are disposed, the robot will place the bin back at its initial position and tag it as empty so that it wont pick it up again until next disposal iteration.

Risks and Mitigation:<br>
The possible risk includes the trade-off between the processing rate of the images captured by the robot to detect the obstacles while moving from the initial pose to the goal pose. Since the environment is unknown to the robot and the search algorithm implements a grid-based search, there is a possibility that the robot may not find the hazardous trash or reach the goal pose generated from the grid search accurately due to dynamic obstacles. Mitigations include the restriction on target object size and its position in the randomized world space. The initial assumption is that the robot should reach the target location and simulate its pickup and reach the disposal zone.

## Presentation: <br>
<p align="center">
<a href="https://docs.google.com/presentation/d/1J1CfQFy6Lo6DFFJ7bEgBhKVnEB1VLPUp/edit?usp=sharing&ouid=101721687108021835919&rtpof=true&sd=true" target="_blank">
 <img src="https://user-images.githubusercontent.com/40534801/215581901-f0ca5d43-b571-4d74-8b85-9620ccbd9142.png" alt="Watch the Slides" width="350" height="200" border="10" />
</a>
</p>

<p align = "center">
Link: https://docs.google.com/presentation/d/1J1CfQFy6Lo6DFFJ7bEgBhKVnEB1VLPUp/edit?usp=sharing&ouid=101721687108021835919&rtpof=true&sd=true
</p>


## Demo: 
<p align="center">
<a href="https://youtu.be/U7UHgr7ei_M" target="_blank">
 <img src="https://user-images.githubusercontent.com/40534801/215581561-e66e154e-622e-44a2-87d6-55ed90809d01.png" alt="Watch the Simulation" width="450" height="300" border="10" />
</a>
</p>
<p align = "center">
Link: https://youtu.be/U7UHgr7ei_M
</p>

## Personnel:

* **Bharadwaj Chukkala**<br>
UID: 118341705<br>
Bharadwaj Chukkala is currently a Master's student in Robotics at the University of Maryland, College Park, MD (Batch of 2023). His interests include Machine Learning, Perception and Path Planning.<br>
[![Contact](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](bchukkal@umd.edu)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/bharadwaj-chukkala/)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/bharadwaj-chukkala)
* **Adarsh Malapaka**<br>
UID: 118119625<br>
Adarsh Malapaka is currently a Master's student in Robotics at the University of Maryland, College Park, MD (Batch of 2023). His interests include Control Systems, Robot Kinematics, Path Planning, and ADAS.<br>
[![Contact](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](amalapak@terpmail.umd.edu)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)]([https://www.linkedin.com/in/bharadwaj-chukkala/](https://www.linkedin.com/in/adarsh-malapaka/))
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/adarshmalapaka)
* **Kumara Ritvik Oruganti**<br>
UID: 117368963<br>
Kumara Ritvik Oruganti is currently a Master's student in Robotics at the University of Maryland, College Park, MD (Batch of 2023). His interests include developing sustainable, efficient and intelligent robots and embedded systems for real-world problems.<br>
[![Contact](https://img.shields.io/badge/Gmail-D14836?style=for-the-badge&logo=gmail&logoColor=white)](okritvik@terpmail.umd.edu)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)]([https://www.linkedin.com/in/bharadwaj-chukkala/](https://www.linkedin.com/in/okritvik/))
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/okritvik)
[![Website](https://img.shields.io/badge/website-okritvik-brightgreen)](https://www.okritvik.com/)


## Agile-Iterative Process (AIP) Resources

### Pair Programming

| `Phase` | `Adarsh Malapaka` | `Bharadwaj Chukkala` | `Kumara Ritvik Oruganti` |
| --- | --- | --- | --- |
| 1 | Navigator | Driver | Design Keeper |
| 2 | Driver | Design Keeper | Navigator |
| 3 | Design Keeper | Navigator | Driver |

### Product Backlog:

https://docs.google.com/spreadsheets/d/1XZ4UL9ePxGej_Jj6zL2NBFaGKRe57Hb5tn70BDvRW7s/edit#gid=0

### Sprint Planning Notes

https://docs.google.com/document/d/1JswTIkvGNDT8kqs0M8pbFIWWatNoKk5qQq9jqdAfdCM/edit

### Quad Chart

<p align="center">
<img width="60%" alt="quad_chart" src="https://github.com/bharadwaj-chukkala/MARIO-COM/blob/master/quadchart/quad_chart_v1.png">
</p>


## Developer Documentation


### Dependencies
1. [ROS2 Foxy](https://docs.ros.org/en/foxy/Installation/Ubuntu-Install-Debians.html): ROS2 Foxy installed on an Ubuntu 20.04 machine is used for this project. The steps to install ROS2 Foxy are mentioned in the above link. 
2. [OpenCV](https://www.opencv-srf.com/p/introduction.html): OpenCV is used to detect the medical waste bins using classical image processing algorithms and can be installed from this [link.](https://www.geeksforgeeks.org/how-to-install-opencv-in-c-on-linux/)
3. [TurtleBot3](https://emanual.robotis.com/docs/en/platform/turtlebot3/quick-start/): The Turtlebot3 ROS2 simulation packages are used to simulate the medical waste disposal robot. Upon installing and configuring the ROS2 workspace, the steps to install these packages are mentioned in the above link. 
4. [OpenMANIPULATOR-X](https://emanual.robotis.com/docs/en/platform/turtlebot3/manipulation/#turtlebot3-with-openmanipulator): The ROBOTIS OpenMANIPULATOR-X gripper mounted on the TurtleBot3 robot is used to pick and place the disposal bins. The steps to install and visualize the robot with this gripper are given in the link above.
5. [Gazebo](https://classic.gazebosim.org/tutorials?tut=install_ubuntu): Gazebo latest version was installed for deploying simulation environments and running the models in the project package.
6. [Navigation2 ROS](https://navigation.ros.org/build_instructions/index.html): The Navigation stack was installed to control the turtlebot3 model to traverse between spawn zone to collection zones and disposal zone.
7. cv_bridge: The cv bridge tool can be installed on ypur system using this command ```sudo apt-get install ros-(ROS version name)-cv-bridge```

### Environment Setup
Clone the following repo in any directory and place the ```mario_com``` folder in your ROS2 workspace 
```
git clone https://github.com/bharadwaj-chukkala/MARIO-COM.git
```

### Build
In the ROS2 Foxy workspace, run the following:
```
source /opt/ros/foxy/setup.bash
colcon build --symlink-install
colcon build --packages-select mario_com
```
Note: Make sure that the TurtleBot3_manipulation, moveit2_tutorials, moveit_visual_tools, rviz_visual_tools, and turtlebot3_simulations are there in the ROS2 Foxy workspace created earlier

### Run the simulation
In the terminal after building the package, run the below commands to set the gazebo model path and TurtleBot3 model.
```
colcon build --symlink-install --packages-select mario_com
export GAZEBO_MODEL_PATH=`ros2 pkg prefix mario_com`/share/mario_com/models/
. /usr/share/gazebo/setup.bash
export TURTLEBOT3_MODEL=waffle_pi
. install/setup.bash

```
Then, in one terminal run:
```
ros2 launch mario_com hospital.launch.py
```
Wait for the Gazebo and RViz to spawn and show the models. If not shown, quit both the windows and run the above commands to set the model paths. 
In another terminal, run:
```
ros2 run mario_com my_main
```

### Build for Test Coverage
Make sure that you are in the ROS2 workspace.
```
sudo apt-get install lcov
rm -rf build/mario_com/
source /opt/ros/foxy/setup.bash
colcon build --cmake-args -DCOVERAGE=1 --packages-select mario_com
cat log/latest_build/mario_com/stdout_stderr.log
find build/mario_com/ | grep -E 'gcno' # catch error -- exepct to see .gcno files
```

### Run Unit Tests and Check for code errors
```
source install/setup.bash
colcon test --packages-select mario_com
cat log/latest_test/mario_com/stdout_stderr.log
find build/mario_com/ | grep -E 'gcda' # catch error -- expect to see .gcda files
colcon test-result --test-result-base build/mario_com/ # catch error

```

### Generate Coverage report
```
source install/setup.bash
ros2 run mario_com generate_coverage_report.bash
```

### View Coverage report
```
firefox ../install/mario_com/coverage/index.html
```

### Doxygen Docs
[Doxygen](https://www.doxygen.nl/index.html) is used to generate HTML and LaTEX documentation for the project's API. To install and run Doxygen:

```sudo apt update
sudo apt install doxywizard
sudo apt install doxygen-gui
sudo apt install graphviz

// To run the GUI and generate documentation
dozywizard
```
To display the documentation in a Web Browser (like firefox):
```
firefox ./docs/html/index.html
```

The documentation is saved in the ```/docs``` directory. 


### cppcheck
Change to the root directory of the cloned project, and run:
```
cppcheck --enable=all --std=c++17 mario_com/src/*.cpp mario_com/include/mario_com/*.hpp mario_com/test/*.cpp --suppress=missingIncludeSystem --suppress=missingInclude --suppress=unmatchedSuppression --suppress=unusedFunction --suppress=unreadVariable --suppress=useInitializationList > ./results/cppcheck.txt
```
The results of running ```cppcheck``` can be found in ```/results/cppcheck.txt```.

### cpplint
Change to the root directory of the project, and run:
```
cpplint --filter=-build/c++11,+build/c++17,-build/namespaces,-build/include_order mario_com/src/*.cpp mario_com/include/mario_com/*.hpp mario_com/test/*.cpp &> ./results/cpplint.txt
```
The results of running ```cpplint``` can be found in ```/results/cpplint.txt```.

## Known Issues/Bugs
1. Installation of ROS2 Foxy, OpenCV, TurtleBot3 packages might run into errors and the user is expected to resolve them by using the open-source ROS and GitHub answers.
2. CMakeLists might produce errors for dependencies. It is required by the user to install them in the system before running the colcon build.
3. The Colcon Build might run into some warnings due to rcl interface linkage which is updated in ROS2 new versions. The OpenCV installation might override the ROS2 Foxy cv_bridge core headers. Ignore the warnings.
4. The GitHub CI yml installation for ROS2 is yet to be figured out. 
5. Since the code developed is purely based on the Gazebo, RViz and OpenCV simulation, the unit tests will have the code written in the project to test their functionality instead of calling the actual functions. Those test cases will run given that the user is running the simulation environment in their system.
6. The OpenManipulator-X with TurtleBot3 is yet to update their page for ROS2 MoveIt functionality.
7. The assumption is that the bins spawned in the environment will be deleted and respawned at the disposal location which is considered to be the expected behavior of the robot.
8. Minimal support for errors and continuous integration is available from the community for specific questions in ROS2.
9. SDF file reading using C++ and parsing to Gazebo's /spawn_entity action doesn't exist. Work arounds can be using the ROS Parameter Server or C++ System Command.
10. Cartographer map generation doesn't work for big size maps that has a lot of open space.
11. The model or TurtleBot3 might not spawn in the Gazebo World. Please check the previously mentioned commands that needs to be run (Try out diffent combinations!). 
12. If ```. install/setup.bash``` doesn't work, use ```source install/setup.bash```

## File Tree

<pre>
    ├── docs
    │   ├── html
    │   └── latex
    ├── LICENSE
    ├── mario_com
    │   ├── CMakeLists.txt
    │   ├── include
    │   │   └── mario_com
    │   │       ├── Manipulation.hpp
    │   │       ├── Navigation.hpp
    │   │       ├── Perception.hpp
    │   │       └── RobotSim.hpp
    │   ├── launch
    │   │   ├── bins.launch.py
    │   │   └── hospital.launch.py
    │   ├── maps
    │   │   ├── hospitalmap.pgm
    │   │   └── hospitalmap.yaml
    │   ├── models
    │   │   ├── ambulance
    │   │   ├── AnesthesiaMachine
    │   │   ├── aws_robomaker_residential_Trash_01
    │   │   ├── BedsideTable
    │   │   ├── bin_cylinder
    │   │   ├── CGMClassic
    │   │   ├── ElderLadyPatient
    │   │   ├── InstrumentCart1
    │   │   ├── MalePatientBed
    │   │   ├── simple_hospital
    │   │   ├── small_hospital
    │   │   ├── StorageRackCovered
    │   │   └── XRayMachine
    │   ├── package.xml
    │   ├── scripts
    │   │   ├── coverage_cleaned.info
    │   │   ├── coverage.info
    │   │   └── generate_coverage_report.bash
    │   ├── src
    │   │   ├── main.cpp
    │   │   ├── Manipulation.cpp
    │   │   ├── Navigation.cpp
    │   │   ├── Perception.cpp
    │   │   └── RobotSim.cpp
    │   ├── test
    │   │   ├── main.cpp
    │   │   ├── manipulation_test.cpp
    │   │   ├── navigation_test.cpp
    │   │   └── perception_test.cpp
    │   ├── uncrustify_google_cpp_allman.cfg
    │   └── worlds
    │       ├── simple_hospital.world
    │       └── small_hospital.world
    ├── proposal
    │   └── ENPM808X___FinalProject___Proposal.pdf
    ├── quadchart
    │   └── quad_chart_v1.png
    ├── README.md
    ├── results
    │   ├── cppcheck.txt
    │   └── cpplint.txt
    └── UML
        ├── initial
        │   ├── activity_diagram_v1.pdf
        │   └── class_diagram_v1.pdf
        └── revised
            └── class_diagram_v2.pdf
</pre>

## License

This project is licensed under the [Apache 2.0 License](https://www.apache.org/licenses/LICENSE-2.0) and can be found in the `LICENSE` file.
