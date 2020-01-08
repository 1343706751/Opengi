#include "Material.h"



Material::Material()
{
}

Material::Material(Shader* _shader, unsigned int _Diffuse, unsigned int _Specular, glm::vec3 _Ambient, float _Shininess):
Myshader(_shader),
Diffuse(_Diffuse),
Specular(_Specular),
Ambient(_Ambient),
Shininess(_Shininess)
{

}

Material::~Material()
{
}
