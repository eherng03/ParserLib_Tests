//------------------------------------------------------------------------------
#include "SpotLightBuilderTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------


void SpotLightBuilderTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cSpotLight");
	file->getName(name);


	builder = new cSpotLightBuilder();

	light = dynamic_cast<cSpotLight*>(builder->createObject(file, world));
}

void SpotLightBuilderTest::tearDown(){
}

void SpotLightBuilderTest::testCreateObject(){
		//ASSERTIONS
	CPPUNIT_ASSERT_EQUAL(1.0, light->getDir().get(0));
	CPPUNIT_ASSERT_EQUAL(0.0, light->getDir().get(1));
	CPPUNIT_ASSERT_EQUAL(0.0, light->getDir().get(2));

	CPPUNIT_ASSERT(light->getEnabled());

	CPPUNIT_ASSERT_EQUAL(3.5, light->getLocalPos().get(0));
	CPPUNIT_ASSERT_EQUAL(2.0, light->getLocalPos().get(1));
	CPPUNIT_ASSERT_EQUAL(0.0, light->getLocalPos().get(2));

	GLfloat angle = 50;
	CPPUNIT_ASSERT_EQUAL(angle, light->getCutOffAngleDeg());
}