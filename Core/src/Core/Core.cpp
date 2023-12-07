#include "Core.h"

#include <iostream>
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

namespace Core {

	void PrintHelloWorld()
	{
		glm::mat4 matrix;
		glm::vec4 vec;
		auto test = matrix * vec;

		std::cout << "Hello World!\n";
		std::cin.get();
	}

}
