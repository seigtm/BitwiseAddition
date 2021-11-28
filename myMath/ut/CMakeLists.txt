set(TEST_NAME MyMathTests)
project(${TEST_NAME})

add_executable(${TEST_NAME} myMathTests.cpp)
target_link_libraries(${TEST_NAME} PRIVATE
    MyMath
    gtest
    gtest_main
)
add_custom_target(Run_${TEST_NAME}
    COMMAND ${TEST_NAME}
    COMMENT "Running ${TEST_NAME}..."
)
