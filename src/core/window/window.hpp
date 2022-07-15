// Copyright (c) 2022 ConstellationEngine Developers (see [AUTHORS.md](AUTHORS.md))

#ifndef WINDOW_HPP
#define WINDOW_HPP

// User-Defined Headers
// --------------------
#include "../graphics/graphics.hpp"
#include "../camera/camera.hpp"

// 3rd Party Library Headers
// -------------------------
#include <glad/glad.hpp>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// Standard Library Headers
// ------------------------
#include <iostream>
#include <string>

namespace CE {
	namespace core {
		class Window {
		public:
			GLFWwindow* window;

			int width = 800;
			int height = 600;

			const char* title;

			bool shouldClose = false;

			glm::vec4 clearColor;

			int create(int width, int height, std::string title);
			int updateMatrices(CE::core::Shader* shader, CE::core::Camera* camera);
			int update();
			int clear();
			int cleanup();
		};
	}
}

#endif // WINDOW_HPP