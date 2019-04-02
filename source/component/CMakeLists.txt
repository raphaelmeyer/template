# Library
add_library(component source/component.cc)
add_library(template::component ALIAS component)

target_include_directories(component
    PUBLIC
        include
        )

target_link_libraries(component
    PRIVATE
        template::settings
        )

# Tests
add_executable(component-test
    test/main.cc
    test/component.cc
    )
add_executable(test::component ALIAS component-test)

target_link_libraries(component-test
    PRIVATE
        catchorg::catch2
        template::settings
        template::component
        )

add_custom_target(component-run-test ALL COMMAND component-test)
add_dependencies(check component-run-test)

