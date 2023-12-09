#pragma once

#include "vulkan/vulkan.h"
#include <string>

struct GLFWwindow;

namespace Core {

	struct ApplicationSpecification
	{
		std::string Name;
	};


	class Application
	{
	public:
		Application(ApplicationSpecification spec);
		~Application();

		void Run();
		void Close();
		void GetWindow();

	private:
		void Init();
		void Shutdown();

	private:
		std::string m_WindowName;
		GLFWwindow* m_Window = nullptr;
		bool m_Running = false;
	};

	// Implemented by CLIENT
	Application* CreateApplication(int argc, char** argv);

};

