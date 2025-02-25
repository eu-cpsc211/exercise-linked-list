cmake_minimum_required(VERSION 3.24)

project(ll_basics)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

include(CTest) # This will let you see and run tests through Visual Studio and VSCode test explorer UI
enable_testing()

# Generate an output executable using the specified source files.
# This executable acts as a test driver program and runs the test suites defined in the test source files.
add_executable(ll_basics
	"tests/doubly-linked-list-tests.cpp"
	"tests/singly-linked-list-tests.cpp"
	"tests/test-utilities.cpp"
)

target_include_directories(ll_basics
	PRIVATE "src" "tests"
)

target_link_libraries(ll_basics
	GTest::gtest_main # The gtest_main library provides a main() function for us so we don't have to implement it ourselves.
)

include(GoogleTest)
gtest_discover_tests(ll_basics)
