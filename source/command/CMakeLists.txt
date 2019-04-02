add_executable(command source/main.cc)
add_executable(template::command ALIAS command)

target_link_libraries(command
    PRIVATE
        template::settings
        template::component
        )

