#pragma once

#include <string>

#include "Core/TimeStep.h"

namespace Core {

	class Layer
	{
	public:
		Layer(const std::string& debugName = "Layer");
		virtual ~Layer() = default;

		virtual void OnAttach() {}
		virtual void OnDetach() {}

		virtual void OnUpdate(TimeStep ts) {}
		virtual void OnUIRender() {}
	private:
		std::string m_DebugName;
	};

}
