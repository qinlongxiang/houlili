#include <filesystem>
#include <iostream>
#include <string>
#include <thread>
#include <unordered_map>

#include "src/Engine/engine.h"


int main(int argc, char** argv)
{
    // std::filesystem::path executable_path(argv[0]);
    std::filesystem::path config_file_path = "config.ini";

    HouLili::HouLiliEngine* engine = new HouLili::HouLiliEngine();

    engine->startEngine(config_file_path.generic_string());
    engine->initialize();
    engine->run();


    engine->clear();
    engine->shutdownEngine();

    return 0;
}