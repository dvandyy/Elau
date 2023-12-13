#include "Core/Application.h"

namespace Core {

	static Core::Application* s_Instance = nullptr;

	Application::Application(ApplicationSpecification spec)
		:m_DebugName{ spec.Name }
	{
		s_Instance = this;
	}

	Application::~Application()
	{
		Close();
		s_Instance = nullptr;
	}

	Application& Application::Get()
	{
		return *s_Instance;
	}

	void Application::Run()
	{
		m_Running = true;

		while (!m_Window.ShouldClose() && m_Running)
		{
			m_Window.OnUpdate();
		}
	}

	void Application::Close()
	{
		m_Running = false;
	}

}
