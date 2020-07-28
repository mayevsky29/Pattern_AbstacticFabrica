#pragma once
#include"BMWEngine.h"
#include"BMWBody.h"


class FabricaBmw : public IFabrica
{
public:
	Engine* CreatEngine()
	{
		return new BMWEngine();
	}
	Body* CreatBody()
	{
		return new BMWBody();
	}
};