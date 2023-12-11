#include "Application.h"

namespace Core {

	Application::Application(ApplicationSpecification spec)
		:m_DebugName{ spec.Name }
	{
	}

	Application::~Application()
	{
		Close();
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
