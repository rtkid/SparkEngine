set(LIB_NAME spark-window)

set(INCROOT ${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME}/Window)
set(SRCROOT ${PROJECT_SOURCE_DIR}/src/${PROJECT_NAME}/Window)

set(SRC
    ${INCROOT}/Window.hpp
    ${SRCROOT}/Window.cpp

    ${SRCROOT}/WindowImpl.hpp
    ${SRCROOT}/WindowImpl.cpp
)

if(WIN32)
    set(PLATFORM_SRC 
        ${SRCROOT}/Win32/WindowImplWin32.hpp
        ${SRCROOT}/Win32/WindowImplWin32.cpp
    )
endif()

add_library(${LIB_NAME} STATIC ${SRC} ${PLATFORM_SRC})

set_property(TARGET ${LIB_NAME} PROPERTY CXX_STANDARD 17)

target_include_directories(${LIB_NAME} PUBLIC  ${PROJECT_SOURCE_DIR}/include)
target_include_directories(${LIB_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/src)