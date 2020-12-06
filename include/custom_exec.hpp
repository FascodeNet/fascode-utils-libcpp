#pragma once
/***
 * @file custom_exec.hpp
 * @brief original fork exec
 * 
 */
#include <vector>
#include <string>
#include <wait.h>
#include <stdlib.h>
#include <initializer_list>
#include <unistd.h>
/**
 * @namespace FascodeUtil
 * @brief FascodeUtil
 * @details FascodeUtil
*/
namespace FascodeUtil{
    /**
     * @fn int custom_exec_v(std::vector<std::string> args)
     * @brief custom exec
     * @param args command args
     * @return exit code
     */
    int custom_exec_v(std::vector<std::string> args);
    template<class... T> 
    int custom_exec(T... args);
    int custom_exec_v_no_wait(std::vector<std::string> args);
    template<class... T> 
    int custom_exec_no_wait(T... args);
}