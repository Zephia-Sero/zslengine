#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <string>
#include <vector>
#include <raylib.h>
struct Engine {
private:
	std::vector<Texture> textures;
	std::vector<Model> models;
public:
	Engine(unsigned int width, unsigned int height, std::string const &title);
	Texture load_texture(std::string const &path);
	Model load_model(std::string const &path);

	void tick();
	void draw();
};


#endif
