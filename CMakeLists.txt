
cmake_minimum_required (VERSION 3.0.0)
project (pruebaTests)

# chai3d dependency
find_package (CHAI3D 3.2 REQUIRED)
include_directories (${CHAI3D_INCLUDE_DIRS})
link_directories (${CHAI3D_LIBRARY_DIRS})
add_definitions (${CHAI3D_DEFINITIONS})

# GLFW dependency
find_package (GLFW REQUIRED)
include_directories (${GLFW_INCLUDE_DIRS})

# PARSER dependency
find_package (PARSER REQUIRED)
include_directories (${PARSER_INCLUDE_DIRS})
link_directories (${PARSER_LIBRARY_DIRS})

#target executable
FIND_LIBRARY(CPPUNIT NAMES "cppunitd"
  PATHS ${PROJECT_SOURCE_DIR}/lib NO_DEFAULT_PATH)

file(GLOB_RECURSE SOURCES "./test/builderTests/*.cpp" 
	"./test/builderTests/*.h"
	"./test/coreTests/*.h"
	"./test/coreTests/*.cpp"
	"./test/simulationTests/*.h"
	"./test/simulationTests/*.cpp"
	"./Main.cpp")


include_directories ("${CMAKE_CURRENT_SOURCE_DIR}/packages/cppunit.1.12.1.4/build/native/include/"
	"${CMAKE_CURRENT_SOURCE_DIR}/test/builderTests/"
	"${CMAKE_CURRENT_SOURCE_DIR}/test/coreTests/"
	"${CMAKE_CURRENT_SOURCE_DIR}/test/simulationTests/")

FILE(GLOB UnitTests_SRCS SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/test/builderTests/*Test.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/test/coreTests/*Test.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/test/simulationTests/*Test.cpp")
ADD_EXECUTABLE(pruebaTests Main.cpp ${UnitTests_SRCS})
FOREACH(test ${UnitTests_SRCS})
        GET_FILENAME_COMPONENT(TestName ${test} NAME_WE)
        ADD_TEST(${TestName} pruebaTests ${TestName})
ENDFOREACH(test)


target_link_libraries(${PROJECT_NAME} ${CHAI3D_LIBRARIES} ${GLFW_LIBRARIES} ${PARSER_LIBRARIES} ${PSOURCES} ${CPPUNIT})


