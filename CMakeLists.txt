cmake_minimum_required(VERSION 3.16)

project(gestioncommande VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find necessary Qt modules
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql Charts Network SerialPort)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql Charts Network SerialPort)

# Add cURL include and library paths
include_directories("C:/Users/yomna/Downloads/curl-win64-latest/curl-8.11.0_1-win64-mingw/include")
link_directories("C:/Users/yomna/Downloads/curl-win64-latest/curl-8.11.0_1-win64-mingw/lib")

# Define CURL_STATICLIB if using the static library
add_definitions(-DCURL_STATICLIB)

# Add Twilio headers and source
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    commande.h
    commande.cpp
    connection.h
    connection.cpp
    twilio.h
    twilio.cpp
)

# Specify the executable
if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(gestioncommande
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        image.qrc
        arduinocommande.h arduinocommande.cpp
    )
else()
    if(ANDROID)
        add_library(gestioncommande SHARED ${PROJECT_SOURCES})
    else()
        add_executable(gestioncommande ${PROJECT_SOURCES})
    endif()
endif()

# Link the necessary libraries including Qt, Twilio, and cURL
target_link_libraries(gestioncommande PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Sql
    Qt${QT_VERSION_MAJOR}::Charts
    Qt${QT_VERSION_MAJOR}::Network
    Qt${QT_VERSION_MAJOR}::SerialPort
    "C:/Users/yomna/Downloads/curl-win64-latest/curl-8.11.0_1-win64-mingw/lib/libcurl.a"
    ws2_32
    wldap32
    crypt32
    advapi32
    secur32
)

# Set properties for macOS and Windows
if(${QT_VERSION} VERSION_LESS 6.1.0)
    set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.gestioncommande)
endif()

set_target_properties(gestioncommande PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

# Installation directives
include(GNUInstallDirs)
install(TARGETS gestioncommande
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finalize the executable for Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(gestioncommande)
endif()
