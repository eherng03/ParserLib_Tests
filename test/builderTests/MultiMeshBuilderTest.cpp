#include "MultiMeshBuilderTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------

void MultiMeshBuilderTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cMultiMesh");
	file->getName(name);
	
	builder = new cMultiMeshBuilder();

	meshObject = dynamic_cast<cMultiMesh*>(builder->createObject(file, world));
}

void MultiMeshBuilderTest::tearDown(){
}

void MultiMeshBuilderTest::testCreateObject(){
		//ASSERTIONS
		//Local position
		CPPUNIT_ASSERT_EQUAL(meshObject->getLocalPos().get(0), (-1 * meshObject->getBoundaryCenter().get(0)));		
		CPPUNIT_ASSERT_EQUAL(meshObject->getLocalPos().get(1), (-1 * meshObject->getBoundaryCenter().get(1)));
		CPPUNIT_ASSERT_EQUAL(meshObject->getLocalPos().get(2), (-1 * meshObject->getBoundaryCenter().get(2)));
		//Euler rotation angle NO SE PUEDE
}