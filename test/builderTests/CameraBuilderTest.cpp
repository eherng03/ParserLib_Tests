//------------------------------------------------------------------------------
#include "CameraBuilderTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------

void CameraBuilderTest::setUp(){
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

	camera = dynamic_cast<cCamera*>(builder->createObject(file, world));
}

void CameraBuilderTest::tearDown(){
}

void CameraBuilderTest::testCreateObject(){
		
		//ASSERTIONS
		
		//LocalPosition vector
		CPPUNIT_ASSERT_EQUAL(0.0, camera->getSphericalOriginReference().get(0));
		CPPUNIT_ASSERT_EQUAL(0.0, camera->getSphericalOriginReference().get(1));
		CPPUNIT_ASSERT_EQUAL(0.0, camera->getSphericalOriginReference().get(1));
		CPPUNIT_ASSERT_EQUAL(0.01, camera->getNearClippingPlane());
		CPPUNIT_ASSERT_EQUAL(100.0, camera->getFarClippingPlane());
		CPPUNIT_ASSERT_EQUAL(1.0, camera->getSphericalRadius());
		CPPUNIT_ASSERT_EQUAL(65, (int) camera->getSphericalPolarDeg());
}
