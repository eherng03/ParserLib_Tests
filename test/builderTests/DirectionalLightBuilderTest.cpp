//------------------------------------------------------------------------------
#include "DirectionalLightBuilderTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------
void DirectionalLightBuilderTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cDirectionalLight");
	file->getName(name);


	builder = new cDirectionalLightBuilder();

	light = dynamic_cast<cDirectionalLight*>(builder->createObject(file, world));
}


void DirectionalLightBuilderTest::tearDown(){
}

void DirectionalLightBuilderTest::testCreateObject(){

	CPPUNIT_ASSERT(light->getEnabled());
	CPPUNIT_ASSERT_EQUAL(1.0, static_cast<cDirectionalLight*>(light)->getDir().get(0));
	CPPUNIT_ASSERT_EQUAL(0.0, dynamic_cast<cDirectionalLight*>(light)->getDir().get(1));
	CPPUNIT_ASSERT_EQUAL(0.0, dynamic_cast<cDirectionalLight*>(light)->getDir().get(2));
	
	
	
	
}
