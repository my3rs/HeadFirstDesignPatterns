# CMakeList.txt : CMake project for Weather, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Weather "Weather.cpp" "CurrentConditionsDisplay.cpp"  "Weather.cpp" "WeatherData.cpp" "StatisticsDisplay.cpp" "ForecastDisplay.cpp")

# TODO: Add tests and install targets if needed.
