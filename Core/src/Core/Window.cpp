#include "Window.h"

#include <GLFW/glfw3.h>

namespace Core {

	Window::Window(const WindowProps& props)
	{
		Init(props);
	}

	Window::~Window()
	{
		Shutdown();
	}

	void Window::Init(const WindowProps& props)
	{
		glfwInit();

		m_Data.Title = props.Title;
		m_Data.Width = props.Width;
		m_Data.Height = props.Height;

		m_Window = glfwCreateWindow((int)props.Width, (int)props.Height, props.Title.c_str(), nullptr, nullptr);
	}

	void Window::Shutdown()
	{
		glfwDestroyWindow(m_Window);
		glfwTerminate();
	}

	void Window::OnUpdate()
	{
		glfwPollEvents();
	}

	bool Window::ShouldClose()
	{
		return glfwWindowShouldClose(m_Window);
	}

}
