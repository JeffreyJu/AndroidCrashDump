cmake_minimum_required(VERSION 3.4.1)
add_library(libtestCrash
            SHARED
            src/main/cpp/testCrash.cpp
        )

target_link_libraries(libtestCrash
        log)
