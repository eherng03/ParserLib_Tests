//------------------------------------------------------------------------------
#include "SceneTest.h"
//------------------------------------------------------------------------------
using namespace simulation;
using namespace chai3d;
using namespace core;
//------------------------------------------------------------------------------
void SceneTest::setUp(){
	Simulation* sim = new Simulation("plantilla.xml");
	scene = sim->loadFromFile("`plantilla.xml");
}

void SceneTest::tearDown(){

}

void SceneTest::testAddComponent(){
	int size = scene->getComponents().size();
	scene->addComponent(scene->getComponents().at(0));
	int newSize = scene->getComponents().size();
	CPPUNIT_ASSERT_EQUAL(size + 1, newSize);

}

void SceneTest::testRemoveComponent(){
	int size = scene->getComponents().size();
	scene->removeComponent(scene->getComponents().at(0));
	int newSize = scene->getComponents().size();
	CPPUNIT_ASSERT_EQUAL(size - 1, newSize);
}

void SceneTest::testGetComponents(){
	components = scene->getComponents();
	int size = scene->getComponents().size();
	CPPUNIT_ASSERT(0 != size);
}

void SceneTest::testGetRootNode(){
	world = scene->getRootNode();
	//??
}