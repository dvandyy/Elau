#pragma once

#include "vulkan/vulkan.h"

struct GLFWwindow;

namespace Core {

	class Application
	{
	public:
		Application();
		~Application();

		void Run();
		void Close();
		void GetWindow();

	private:
		void Init();
		void Shutdown();

	private:
		GLFWwindow* m_Window = nullptr;
		bool m_Running = false;
	};

	// Implemented by CLIENT
	Application* CreateApplication(int argc, char** argv);

};

