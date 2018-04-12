//------------------------------------------------------------------------------
#include "SimulationTest.h"
//------------------------------------------------------------------------------
using namespace simulation;
using namespace chai3d;
//------------------------------------------------------------------------------
void SimulationTest::setUp(){
	Simulation* sim = new Simulation("arbolComplejo.xml");
	Scene* scene = sim->loadFromFile("arbolComplejo.xml");

	world = scene->getRootNode();
}

void SimulationTest::tearDown(){

}

void SimulationTest::testLoadFromFile(){
	//Esto igual no hace falta xd

	//child 0 camera	
		//child 00 directional light
			//child 000 directional light
	//child 1 directional light
	//child 2 toolCursor

	//CAMERA TEST
	cCamera* child0 = dynamic_cast<cCamera*>(world->getChild(0));
	CPPUNIT_ASSERT_EQUAL(0.0, child0->getSphericalOriginReference().get(0));
	CPPUNIT_ASSERT_EQUAL(0.0, child0->getSphericalOriginReference().get(1));
	CPPUNIT_ASSERT_EQUAL(0.0, child0->getSphericalOriginReference().get(2));
	CPPUNIT_ASSERT_EQUAL(0.01, child0->getNearClippingPlane());
	CPPUNIT_ASSERT_EQUAL(100.0, child0->getFarClippingPlane());
	CPPUNIT_ASSERT_EQUAL(1.0, child0->getSphericalRadius());
	CPPUNIT_ASSERT_EQUAL(20, (int) child0->getSphericalAzimuthDeg());
	CPPUNIT_ASSERT_EQUAL(65, (int)child0->getSphericalPolarDeg());
	
	//Directional light00 test
	cDirectionalLight* child00 = dynamic_cast<cDirectionalLight*>(child0->getChild(0));
	CPPUNIT_ASSERT(child00->getEnabled() == true);
	CPPUNIT_ASSERT_EQUAL(3.0, child00->getDir().get(0));
	CPPUNIT_ASSERT_EQUAL(0.5, child00->getDir().get(1));
	CPPUNIT_ASSERT_EQUAL(0.0, child00->getDir().get(2));

	//Directional light000 test
	cDirectionalLight* child000 = dynamic_cast<cDirectionalLight*>(child00->getChild(0));
	CPPUNIT_ASSERT(child000->getEnabled() == true);
	CPPUNIT_ASSERT_EQUAL(-3.0, child000->getDir().get(0));
	CPPUNIT_ASSERT_EQUAL(1.0, child000->getDir().get(1));
	CPPUNIT_ASSERT_EQUAL(2.0, child000->getDir().get(2));

	//Directional light1 test
	cDirectionalLight* child1 = dynamic_cast<cDirectionalLight*>(world->getChild(1));
	CPPUNIT_ASSERT(child1->getEnabled() == true);
	CPPUNIT_ASSERT_EQUAL(5.0, child1->getDir().get(0));
	CPPUNIT_ASSERT_EQUAL(0.8, child1->getDir().get(1));
	CPPUNIT_ASSERT_EQUAL(3.0, child1->getDir().get(2));

	//test
	cToolCursor* child2 = dynamic_cast<cToolCursor*>(world->getChild(2));
	CPPUNIT_ASSERT(child2->getWorkspaceRadius() == 1);
	CPPUNIT_ASSERT(child2->getHapticPoint(0)->getRadiusDisplay() == 0.003);
}