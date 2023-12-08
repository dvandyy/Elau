#pragma once

#include "Core/Application.h"
#include "Core/EntryPoint.h"

Core::Application* Core::CreateApplication(int argc, char** argv)
{
	Core::Application* app = new Core::Application();
	return app;
}
