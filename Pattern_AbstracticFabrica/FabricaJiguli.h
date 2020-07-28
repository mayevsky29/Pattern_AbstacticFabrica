#pragma once
#include"JiguliEngine.h"
#include"JiguliBody.h"


class FabricaJiguli : public IFabrica // фабрика жигулів
{
public:
	Engine* CreatEngine()
	{
		return new JiguliEngine();
	}
	Body* CreatBody()
	{
		return new JiguliBody();
	}
};