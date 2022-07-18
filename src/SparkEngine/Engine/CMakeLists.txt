set(LIB_NAME spark-engine)

set(INCROOT ${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME}/Engine)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/${PROJECT_NAME}/Engine)

set(SRC
    ${INCROOT}/Engine.hpp
    ${SRCROOT}/Engine.cpp
)

add_library(${LIB_NAME} STATIC ${SRC})

set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 17)

target_include_directories(${LIB_NAME} PUBLIC  ${PROJECT_SOURCE_DIR}/include)