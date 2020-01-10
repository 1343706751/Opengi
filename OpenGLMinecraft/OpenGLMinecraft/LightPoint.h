#pragma once
#include "LightBase.h"

class LightPoint : public LightBase
{
public:
	~LightPoint();
public:
	float constant;
	float linear;
	float quadratic;
};

