#include "adder.h"
#include <iostream>
#include <GLFW/glfw3.h>
int main(){
    std::cout<< mearlymath::add(2,3);

GLFWwindow* window;
    // int width, height;

    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }
     window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
     if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }
     while( !glfwWindowShouldClose(window) )
    {
        // Draw gears
        // draw();

        // Update animation
        // animate();

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

    return 0;
} 