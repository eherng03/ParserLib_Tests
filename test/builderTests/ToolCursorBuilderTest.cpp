//------------------------------------------------------------------------------
#include "ToolCursorBuilderTest.h"
//------------------------------------------------------------------------------

using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------

void ToolCursorBuilderTest::setUp(){
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

	cursor = dynamic_cast<cToolCursor*>(builder->createObject(file, world));
	cursor->getHapticPoint(0)->getRadiusDisplay();
}

void ToolCursorBuilderTest::tearDown(){
}

void ToolCursorBuilderTest::testCreateObject(){
		//ASSERTIONS
		CPPUNIT_ASSERT_EQUAL(1.0, cursor->getWorkspaceRadius());
		CPPUNIT_ASSERT_EQUAL(0.05, cursor->getHapticPoint(0)->getRadiusDisplay());
}