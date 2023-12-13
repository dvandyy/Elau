#pragma once

#include <string>
#include <vector>
#include <memory>

#include "Core/LayerStack.h"
#include "Core/Window.h"

namespace Core {

	struct ApplicationSpecification
	{
		std::string Name;
	};

	class Application
	{
	public:
		Application(const ApplicationSpecification spec);
		virtual ~Application();

		static Application& Get();

		void Run();
		void Close();
		void GetWindow();

	private:
		std::string m_DebugName;
		LayerStack m_LayerStack;
		Window m_Window = Window(WindowProps());
		bool m_Running = false;
	};

	// Implemented by CLIENT
	Application* CreateApplication(int argc, char** argv);

};

