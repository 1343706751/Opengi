#include "LightDirectional.h"
#include "glm/gtx/rotate_vector.hpp"

LightDirectional::LightDirectional(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color) 
	: LightBase(_position, _angles, _color)
{
}

LightDirectional::~LightDirectional()
{
}

