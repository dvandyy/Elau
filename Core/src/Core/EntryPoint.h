#pragma once

#include <cstdlib>
#include <stdexcept>
#include <iostream>

#ifdef WINDOWS

extern Core::Application* Core::CreateApplication(int argc, char** argv);

namespace Core {

	int Main(int argc, char** argv)
	{
		auto app = Core::CreateApplication(argc, argv);

		try
		{
			app->Run();
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return EXIT_FAILURE;
		}

		delete app;
		return EXIT_SUCCESS;
	}

}

int main(int argc, char** argv)
{
	return Core::Main(argc, argv);
}

#endif // WINDOWS
