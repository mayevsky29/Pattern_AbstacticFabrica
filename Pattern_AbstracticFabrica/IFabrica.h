#pragma once
#include"Header.h"
#include"Engine.h"
#include"Body.h"

class IFabrica
{
public:
	virtual Engine* CreatEngine() = 0;
	virtual Body* CreatBody() = 0;
	~IFabrica()
	{

	}
};