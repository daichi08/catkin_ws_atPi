# CMake generated Testfile for 
# Source directory: /home/pi/catkin_ws/src/ros_comm/rostopic
# Build directory: /home/pi/catkin_ws/build/ros_comm/rostopic
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_rostopic_rostest_test_rostopic.test "/home/pi/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/pi/catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/pi/catkin_ws/build/test_results/rostopic/rostest-test_rostopic.xml" "--return-code" "/home/pi/catkin_ws/src/ros_comm/rostest/scripts/rostest --pkgdir=/home/pi/catkin_ws/src/ros_comm/rostopic --package=rostopic --results-filename test_rostopic.xml --results-base-dir \"/home/pi/catkin_ws/build/test_results\" /home/pi/catkin_ws/src/ros_comm/rostopic/test/rostopic.test ")
add_test(_ctest_rostopic_nosetests_test.test_rostopic_command_line_offline.py "/home/pi/catkin_ws/build/catkin_generated/env_cached.sh" "/usr/bin/python" "/home/pi/catkin_ws/src/catkin/cmake/test/run_tests.py" "/home/pi/catkin_ws/build/test_results/rostopic/nosetests-test.test_rostopic_command_line_offline.py.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/pi/catkin_ws/build/test_results/rostopic" "/usr/bin/nosetests-2.7 -P --process-timeout=60 /home/pi/catkin_ws/src/ros_comm/rostopic/test/test_rostopic_command_line_offline.py --with-xunit --xunit-file=/home/pi/catkin_ws/build/test_results/rostopic/nosetests-test.test_rostopic_command_line_offline.py.xml")
