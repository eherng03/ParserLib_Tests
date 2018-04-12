//------------------------------------------------------------------------------
#include "ShapeSphereBuilderTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------
	

void ShapeSphereBuilderTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cShapeSphere");
	file->getName(name);


	builder = new cShapeSphereBuilder();
	sphere = dynamic_cast<cShapeSphere*>(builder->createObject(file, world));
}

void ShapeSphereBuilderTest::tearDown(){
}

void ShapeSphereBuilderTest::testCreateObject(){
	//ASSERTIONS
	CPPUNIT_ASSERT_EQUAL(0.1, sphere->getRadius());
	CPPUNIT_ASSERT_EQUAL(0.0, sphere->getLocalPos().get(0));
	CPPUNIT_ASSERT_EQUAL(0.7, sphere->getLocalPos().get(1));
	CPPUNIT_ASSERT_EQUAL(0.0, sphere->getLocalPos().get(2));
}
