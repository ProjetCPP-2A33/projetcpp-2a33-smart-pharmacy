cmake_minimum_required(VERSION 3.16)

project(gestioncommande VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Recherche des modules nécessaires, incluant QtCharts
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets Sql Charts)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets Sql Charts)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    commande.h
    commande.cpp
    connection.h
    connection.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(gestioncommande
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        image.qrc
    )
else()
    if(ANDROID)
        add_library(gestioncommande SHARED ${PROJECT_SOURCES})
    else()
        add_executable(gestioncommande ${PROJECT_SOURCES})
    endif()
endif()

# Lier les bibliothèques nécessaires, incluant QtCharts
target_link_libraries(gestioncommande PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Sql Qt${QT_VERSION_MAJOR}::Charts)

# Définir les propriétés pour macOS et Windows
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

# Directives d'installation
include(GNUInstallDirs)
install(TARGETS gestioncommande
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

# Finaliser l'exécutable pour Qt 6
if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(gestioncommande)
endif()

