//------------------------------------------------------------------------------
#include "GraphicsComponentTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
using namespace core;
//------------------------------------------------------------------------------

void GraphicsComponentTest::setUp(){
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

void GraphicsComponentTest::tearDown(){
}

void GraphicsComponentTest::testIsHaptic(){
	CPPUNIT_ASSERT(!graphicsComponent->isHaptic());
}

void GraphicsComponentTest::testIsGraphic(){
	CPPUNIT_ASSERT(graphicsComponent->isGraphic());
}