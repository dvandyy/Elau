#pragma once

#include "Core/Application.h"
#include "Core/EntryPoint.h"

Core::Application* Core::CreateApplication(int argc, char** argv)
{
	ApplicationSpecification spec;
	spec.Name = "Elau";

	Core::Application* app = new Core::Application(spec);

	return app;
}
