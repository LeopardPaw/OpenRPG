macro(do_test test arg1 arg2)
  add_test(${test}-${arg1}-${arg2} ${test} ${arg1} ${arg2})
  add_dependencies(check ${test})
endmacro(do_test)

set(CMAKE_SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)

# source directories
include_directories("${CMAKE_SOURCE_DIR}"
                    "${CMAKE_SOURCE_DIR}/util"
                    "${CMAKE_SOURCE_DIR}/modules/generator"
)

set(TEST_COMMON_SRC
        ${CMAKE_SOURCE_DIR}/util/utils.cpp
        ${CMAKE_SOURCE_DIR}/modules/generator/generator.cpp
)

set(CUR_TEST generator-test)

add_executable(${CUR_TEST} ${TEST_COMMON_SRC} ${CUR_TEST}.cpp)

add_custom_command(TARGET ${CUR_TEST} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${CMAKE_SOURCE_DIR}/assets $<TARGET_FILE_DIR:${CUR_TEST}>/assets
)

do_test(${CUR_TEST} dwarf male)
do_test(${CUR_TEST} dwarf female)