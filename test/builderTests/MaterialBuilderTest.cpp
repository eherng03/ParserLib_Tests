#include "MaterialBuilderTest.h"
//------------------------------------------------------------------------------
using namespace chai3d;
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------

void MaterialBuilderTest::setUp(){
	IObjectBuilder* builder;
	cWorld* world;

	cFileXML* file;
	file = new cFileXML("plantilla.xml");		//"file" represents now the root node
	string name;
	file->gotoFirstChild();					//"file" now is the first child node, it must be the "cWorld" node
	file->getName(name);
	world = new cWorld();

	file->gotoChild("cMaterial");
	file->getName(name);

	builder = new cMaterialBuilder();

	object = builder->createObject(file, world);
}

void MaterialBuilderTest::tearDown(){
}

void MaterialBuilderTest::testCreateObject(){
	//ASSERTIONS
	CPPUNIT_ASSERT_EQUAL(200.0, object->m_material->getStiffness());
	//CPPUNIT_ASSERT_EQUAL(40.0, object->m_material->getDamping());
	CPPUNIT_ASSERT(object->m_material->getUseHapticFriction());
	CPPUNIT_ASSERT_EQUAL(0.3, object->m_material->getStaticFriction());
	CPPUNIT_ASSERT_EQUAL(0.2, object->m_material->getDynamicFriction());
	CPPUNIT_ASSERT_EQUAL(4.0, object->m_material->getViscosity());
	//Euler rotation angle NO SE PUEDE
}