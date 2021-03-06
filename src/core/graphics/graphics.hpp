// Copyright (c) 2022 ConstellationEngine Developers (see [AUTHORS.md](AUTHORS.md))

#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

// 3rd Party Library Headers
// -------------------------
#include <glad/glad.hpp>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// Standard Library Headers
// ------------------------
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>

namespace CE {
	namespace core {
		class Graphics {
		public:
			int versionMajor;
			int versionMinor;

			int create();
			int create(int versionMajor, int versionMinor);
		};

		class Shader {
		public:
			unsigned int ID;
			// Constructor generates the shader on the fly
			// ------------------------------------------------------------------------
			Shader(const char* vertexPath, const char* fragmentPath);
			~Shader();

			// Activate the shader
			// ------------------------------------------------------------------------
			void use() const;

			// Utility uniform functions
			// ------------------------------------------------------------------------
			void setBool(const std::string& name, bool value) const;
			void setInt(const std::string& name, int value) const;
			void setFloat(const std::string& name, float value) const;

			void setVec2(const std::string& name, const glm::vec2& value) const;
			void setVec2(const std::string& name, float x, float y) const;
			void setVec3(const std::string& name, const glm::vec3& value) const;
			void setVec3(const std::string& name, float x, float y, float z) const;
			void setVec4(const std::string& name, const glm::vec4& value) const;
			void setVec4(const std::string& name, float x, float y, float z, float w) const;

			void setMat2(const std::string& name, const glm::mat2& mat) const;
			void setMat3(const std::string& name, const glm::mat3& mat) const;
			void setMat4(const std::string& name, const glm::mat4& mat) const;

		private:
			// Utility function for checking shader compilation/linking errors.
			// ------------------------------------------------------------------------
			void checkCompileErrors(unsigned int shader, std::string type);
		};
	}
}


#endif // GRAPHICS_HPP
