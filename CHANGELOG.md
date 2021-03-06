# Changelog

## [Unreleased]

### Added
* Added mouse unlock with 'F', relocks when clicking the tab
* Added Assimp dependency
* Added model and mesh classes
* Added a white cube model
* Added basic model loading example in main.cpp

### Removed
* Removed x86 build option (Assimp build is only for x64)
* Removed old object creation

-------------------------------------------------------------------------------------------------------------

## [0.3.0]

### Added
* Added camera module
* Added deltatime
* Added lots more functionality to the engine
* Added texture class
* Added cube instancing

### Changed
* Moved shader class to graphics.cpp
* No need for a cleanup function (yet) all class object's deconstructors will do the cleanup

-------------------------------------------------------------------------------------------------------------


## [0.2.0]

### Added
* Added functions to update the window, clear buffers and change the fill color
* Added controls for screen fill color
* Enabled vsync, sRGB and the depth buffer
* Added shader module to create, compile and link shaders
* Added cube vertex and fragment shaders
* Added a few cubes in space

### Changed
* Changed init to graphics

-------------------------------------------------------------------------------------------------------------

## [0.1.0]

### Added
* Added contrib/
* Added contrib/glad/...
* Added contrib/glfw/...
* Added contrib/glm/...
* Added contrib/stb/..
* Added data/
* Added data/icons/
* Added data/models/
* Added data/music/
* Added data/shaders/
* Added data/shaders/cube.vert
* Added data/shaders/cube.frag
* Added data/sounds/
* Added data/textures/
* Added data/textures/PixelLogo.png
* Added src/
* Added src/main.cpp
* Added src/main.hpp
* Added src/core/
* Added src/core/graphics/
* Added src/core/graphics/graphics.cpp
* Added src/core/graphics/graphics.hpp
* Added src/core/window/
* Added src/core/window/window.cpp
* Added src/core/window/window.hpp
* Added src/utils/
* Added src/utils/utils.cpp
* Added src/utils/utils.hpp
* Added src/utils/shader/
* Added src/utils/shader/shader.cpp
* Added src/utils/shader/shader.hpp
* Added AUTHORS.md
* Added CHANGELOG.md
* Added ConstellationEngine.sln
* Added LICENSE
* Added README.md

### Changed
*

### Deprecated
*

### Removed
*

### Fixed
*

### Security
*

-------------------------------------------------------------------------------------------------------------
