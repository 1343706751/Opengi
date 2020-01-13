#pragma once
#include "LightBase.h"
class lightSpot : public LightBase
{
public:
	lightSpot();
	~lightSpot();
public:
	float constant;
	float linear;
	float quadratic;

	float InnerLine;
	float OutLine;

};

