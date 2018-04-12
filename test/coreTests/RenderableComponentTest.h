#ifndef RENDERABLE_COMPONENT_TEST_H
#define RENDERABLE_COMPONENT_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder\CameraBuilder.h>
#include <Builder\IComponentBuilder.h>
#include <Utils.h>
#include <Core\GraphicsComponent.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class RenderableComponentTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE(RenderableComponentTest);
	CPPUNIT_TEST(testCanUpdate);
	CPPUNIT_TEST(testCanRender);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testCanUpdate();
	void testCanRender();

private:
	core::GraphicsComponent* graphicsComponent;
};
#endif