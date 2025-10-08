cmake_minimum_required(VERSION 3.16)
project(afl_1 LANGUAGES C)

# Brug C11 (som i vores gcc-kommander)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

# Byg programmet af main.c + din implementering
add_executable(afl_1
    main.c
    hamming.c
)

# (Valgfrit) gode advarsler
if (MSVC)
  target_compile_options(afl_1 PRIVATE /W4)
else()
  target_compile_options(afl_1 PRIVATE -Wall -Wextra -Wpedantic)
endif()
