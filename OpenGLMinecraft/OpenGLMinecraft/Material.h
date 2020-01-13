#pragma once
#include "Shader.h"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Material
{
public:
	Material();
	Material(Shader* _shader, unsigned int _Diffuse, unsigned int _Specular, glm::vec3 _Ambient, float _Shininess);
	~Material();
public:
	Shader* Myshader;

	unsigned int Diffuse;
	unsigned int Specular;
	float Shininess;

	glm::vec3 Ambient;


};

