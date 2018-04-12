//------------------------------------------------------------------------------
#include "RenderableComponentTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace parser;
using namespace std;
using namespace core;
//------------------------------------------------------------------------------

void RenderableComponentTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cCamera");
	file->getName(name);

	builder = new cCameraBuilder();

	cCamera* camera = dynamic_cast<cCamera*>(builder->createObject(file, world));
	graphicsComponent = new GraphicsComponent(camera, 500, 500);
}

void RenderableComponentTest::tearDown(){

}

void RenderableComponentTest::testCanUpdate(){
	CPPUNIT_ASSERT(!graphicsComponent->canUpdate());
}

void RenderableComponentTest::testCanRender(){
	CPPUNIT_ASSERT(graphicsComponent->canRender());
}
