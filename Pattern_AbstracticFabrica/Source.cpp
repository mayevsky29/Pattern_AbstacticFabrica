#include"Header.h"
#include"IFabrica.h"
#include"FabricaBmw.h"
#include"FabricaJiguli.h"






int main()
{
	IFabrica* fabrica = new FabricaBmw();
	Engine* engine = fabrica->CreatEngine();
	engine->ShowEngine();
	Body* b = fabrica->CreatBody();
	b->ShowBody();


	IFabrica* f = new FabricaJiguli();
	Body* body = f->CreatBody();
	body->ShowBody();

	return 0;
}