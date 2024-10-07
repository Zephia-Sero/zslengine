#include "engine.hpp"
#include <raylib.h>
#include <string>


Engine::Engine(unsigned int width, unsigned int height, std::string const &title)
{
	InitWindow(width, height, title.c_str());
}
Texture Engine::load_texture(std::string const &path)
{
	textures.push_back(LoadTexture(path.c_str()));
	return *textures.end();
}
Model Engine::load_model(std::string const &path)
{
	models.push_back(LoadModel(path.c_str()));
	return *models.end();
}
void Engine::tick()
{

}
void Engine::draw()
{

}
