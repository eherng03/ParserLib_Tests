//------------------------------------------------------------------------------
#include "HapticsComponentTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
using namespace core;
//------------------------------------------------------------------------------

void HapticsComponentTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cToolCursor");
	file->getName(name);

	builder = new cToolCursorBuilder();

	cToolCursor* cursor = dynamic_cast<cToolCursor*>(builder->createObject(file, world));
	toolBasedComponent = new ToolBasedComponent(cursor);
}

void HapticsComponentTest::tearDown(){

}

void HapticsComponentTest::testIsHaptic(){
	CPPUNIT_ASSERT(toolBasedComponent->isHaptic());
}

void HapticsComponentTest::testIsGraphic(){
	CPPUNIT_ASSERT(!toolBasedComponent->isGraphic());
}