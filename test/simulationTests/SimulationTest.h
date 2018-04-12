#ifndef SIMULATION_TEST_H
#define SIMULATION_TEST_H
//------------------------------------------------------------------------------
#include <cppunit\TestCase.h>
#include <cppunit\extensions\HelperMacros.h>
//------------------------------------------------------------------------------
#include <Simulation\Simulation.h>
#include <Simulation\Scene.h>
//------------------------------------------------------------------------------
#include <chai3d.h>
//------------------------------------------------------------------------------
class SimulationTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(SimulationTest);
	CPPUNIT_TEST(testLoadFromFile);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testLoadFromFile();
private:
	chai3d::cWorld* world;
};
#endif