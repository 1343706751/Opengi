#include "LightBase.h"
#include <glm/glm.hpp>
#include "glm/gtx/rotate_vector.hpp"



LightBase::LightBase(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color /*= glm::vec3(1.0f, 1.0f, 1.0f)*/)
	: Position(_position),
	Angles(_angles),
	Color(_color)
{
	UpDaraDirrection();
}

LightBase::~LightBase()
{

}

void LightBase::UpDaraDirrection()
{
	Dirrection = glm::vec3(0.0f, 0.0f, 1.0f);

	Dirrection = glm::rotateZ(Dirrection, Angles.z);
	Dirrection = glm::rotateX(Dirrection, Angles.x);
	Dirrection = glm::rotateY(Dirrection, Angles.y);

}
