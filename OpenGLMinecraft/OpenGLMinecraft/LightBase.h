#pragma once

#include <glm/glm.hpp>

class LightBase
{
public:
	LightBase(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color = glm::vec3(1.0f, 1.0f, 1.0f));
	~LightBase();

public:
	
	glm::vec3 Ambient;
	glm::vec3 Diffuse;
	glm::vec3 Specular;

	glm::vec3 Position;
	glm::vec3 Angles;
	glm::vec3 Color;
	glm::vec3 Dirrection;
	virtual void UpDaraDirrection();
};

