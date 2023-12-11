#pragma once

#include <string>
#include <Core/Window.h>

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

		void Run();
		void Close();
		void GetWindow();

	private:
		std::string m_DebugName;
		Window m_Window = Window(WindowProps());
		bool m_Running = false;
	};

	// Implemented by CLIENT
	Application* CreateApplication(int argc, char** argv);

};

