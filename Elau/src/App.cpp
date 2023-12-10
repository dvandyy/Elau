#pragma once

#include "Core.h"

Core::Application* Core::CreateApplication(int argc, char** argv)
{
	ApplicationSpecification spec;
	spec.Name = "Elau";

	Core::Application* app = new Core::Application(spec);

	return app;
}
