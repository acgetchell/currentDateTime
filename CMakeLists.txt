cmake_minimum_required(VERSION 3.17)
project(currentDateTime)

set(CMAKE_CXX_STANDARD 17)

# https://howardhinnant.github.io/date/date.html
find_package(date CONFIG REQUIRED)

add_executable(currentDateTime main.cpp)
target_link_libraries(currentDateTime PRIVATE
    date::date
    date::date-tz
    )