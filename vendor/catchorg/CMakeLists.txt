set(CATCH_VERSION "v2.7.2")

include(ExternalProject)
ExternalProject_Add(fetch-catch
    URL "https://github.com/catchorg/Catch2/releases/download/${CATCH_VERSION}/catch.hpp"
    DOWNLOAD_DIR "include/catch2"
    DOWNLOAD_NO_EXTRACT TRUE
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND ""
    )

add_library(catch2 INTERFACE)
add_library(catchorg::catch2 ALIAS catch2)
target_include_directories(catch2 INTERFACE ${CMAKE_CURRENT_BINARY_DIR}/include)
add_dependencies(catch2 fetch-catch)

