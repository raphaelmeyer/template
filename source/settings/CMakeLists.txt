add_library(settings INTERFACE)
add_library(template::settings ALIAS settings)

target_compile_features(settings INTERFACE cxx_std_17)

