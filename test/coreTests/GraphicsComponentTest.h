#ifndef GRAPHICS_COMPONENT_TEST_H
#define GRAPHICS_COMPONENT_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder/CameraBuilder.h>
#include <Utils.h>
#include <Core/GraphicsComponent.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class GraphicsComponentTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE(GraphicsComponentTest);
	CPPUNIT_TEST(testIsHaptic);
	CPPUNIT_TEST(testIsGraphic);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testIsHaptic();
	void testIsGraphic();
private:
	core::GraphicsComponent* graphicsComponent;
};
#endif