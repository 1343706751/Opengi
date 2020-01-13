#pragma once
#include "LightBase.h"

class LightPoint : public LightBase
{
public:
	~LightPoint();
public:
	float Constant;
	float Linear;
	float Quadratic;
};

