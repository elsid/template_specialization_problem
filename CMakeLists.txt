cmake_minimum_required(VERSION 3.12)

project(template_specialization_link_problem)

find_package(Boost REQUIRED)

include_directories(SYSTEM "${Boost_INCLUDE_DIRS}")

add_executable(ok_1
    b.cpp
    main.cpp
)

add_executable(ok_2
    b.cpp
    a.cpp
    main.cpp
)

add_executable(problem
    a.cpp
    b.cpp
    main.cpp
)
