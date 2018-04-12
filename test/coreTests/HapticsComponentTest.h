
#ifndef HAPTICS_COMPONENT_TEST_H
#define HAPTICS_COMPONENT_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <chai3d.h>
#include <files\CFileXML.h>
//------------------------------------------------------------------------------
#include <Builder\ToolCursorBuilder.h>
#include <Builder\IComponentBuilder.h>
#include <Utils.h>
#include <Core\ToolBasedComponent.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class HapticsComponentTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE(HapticsComponentTest);
	CPPUNIT_TEST(testIsHaptic);
	CPPUNIT_TEST(testIsGraphic);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testIsHaptic();
	void testIsGraphic();

private:
	core::ToolBasedComponent* toolBasedComponent;
};
#endif