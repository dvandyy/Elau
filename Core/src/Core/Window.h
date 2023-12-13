#pragma once

#include <string>
#include <GLFW/glfw3.h>

namespace Core {

	struct WindowProps
	{
		std::string Title;
		uint32_t Width;
		uint32_t Height;

		WindowProps(const std::string& title = "Elau",
			uint32_t width = 800,
			uint32_t height = 600)
			: Title(title), Width(width), Height(height)
		{
		}
	};

	struct WindowData
	{
		std::string Title;
		unsigned int Width, Height;
	};

	class Window
	{
	public:
		Window(const WindowProps& props);
		virtual ~Window();

		void OnUpdate();

		unsigned int GetWidth() const { return m_Data.Width; };
		unsigned int GetHeight() const { return m_Data.Height; };
		bool ShouldClose();

		void* GetWindow() const { return m_Window; };

	private:
		void Init(const WindowProps& props);
		void Shutdown();
	private:
		GLFWwindow* m_Window;
		WindowData m_Data;
	};

}

