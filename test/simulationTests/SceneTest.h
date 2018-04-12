#ifndef SECENE_TEST_H
#define SECENE_TEST_H
//------------------------------------------------------------------------------
#include <cppunit\TestCase.h>
#include <cppunit\extensions\HelperMacros.h>
//------------------------------------------------------------------------------
#include <Core\ToolBasedComponent.h>
#include <Simulation\Simulation.h>
#include <Simulation\Scene.h>
//------------------------------------------------------------------------------
class SceneTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE(SceneTest);
	CPPUNIT_TEST(testAddComponent);
	CPPUNIT_TEST(testRemoveComponent);
	CPPUNIT_TEST(testGetComponents);
	CPPUNIT_TEST(testGetRootNode);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testAddComponent();
	void testRemoveComponent();
	void testGetComponents();
	void testGetRootNode();

private:
	chai3d::cWorld* world;
	simulation::Scene* scene;
	core::ComponentCollection components;
};
#endif