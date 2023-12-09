#include "Application.h"

#define GLFW_INCLUDE_NONE
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>
#include <glm/glm.hpp>

#include <iostream>

extern bool g_ApplicationRunning;

namespace Core {

	Application::Application(ApplicationSpecification spec)
		: m_WindowName{ spec.Name }
	{
		Init();
	}

	Application::~Application()
	{
		Shutdown();
	}

	void Application::Init()
	{
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		m_Window = glfwCreateWindow(800, 600, m_WindowName.c_str(), nullptr, nullptr);

		uint32_t extensionCount = 0;
		vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

		std::cout << extensionCount << " extensions supported\n";
	}

	void Application::Shutdown()
	{
		glfwDestroyWindow(m_Window);
		glfwTerminate();

		g_ApplicationRunning = false;
	}

	void Application::Run()
	{
		m_Running = true;

		while (!glfwWindowShouldClose(m_Window) && m_Running)
		{
			glfwPollEvents();
		}
	}

	void Application::Close()
	{
		m_Running = false;
	}

}
