#pragma once

#include <glm/glm.hpp>
#include "LightBase.h"

class LightDirectional : public LightBase
{
public:
	LightDirectional(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color = glm::vec3(1.0f, 1.0f, 1.0f));
	~LightDirectional();

};

