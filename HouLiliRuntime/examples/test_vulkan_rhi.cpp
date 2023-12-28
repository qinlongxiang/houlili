#include <filesystem>
#include <iostream>
#include <string>
#include <thread>
#include <unordered_map>
#include <GLFW/glfw3.h>

//#include "source/Engine.h"
class HelloTriangleApplication {
public:
    void run() {
        initWindow();
        initVulkan();
        mainLoop();
        cleanup();
    }

private:
    GLFWwindow* window;

    void initWindow() {
        glfwInit();
        // 无需创建opengl上下文
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        // 固定大小
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        
        window = glfwCreateWindow(800, 600, "Vulkan", nullptr, nullptr);
    }
    void initVulkan() {

    }

    void mainLoop() {
        // 循环检查
        while (!glfwWindowShouldClose(window)) {
            glfwPollEvents();
        }
    }

    void cleanup() {
        // 销毁glfw本身的资源
        glfwDestroyWindow(window);
        // 停止glfw
        glfwTerminate();
    }
};



int main(int argc, char** argv)
{
    HelloTriangleApplication app;

    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
    //std::filesystem::path executable_path(argv[0]);
    //std::filesystem::path config_file_path = executable_path.parent_path() / "config.ini";

    //HouLili::HouLiliEngine* engine = new HouLili::HouLiliEngine();

    //engine->startEngine("");
    //engine->initialize();

    //float delta_time;
    //engine->run();

    //engine->clear();
    //engine->shutdownEngine();

    //return 0;
}
