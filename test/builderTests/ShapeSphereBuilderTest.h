#ifndef SPHERE_TEST_H
#define SPHERE_TEST_H
//------------------------------------------------------------------------------
#include <cppunit\TestCase.h>
#include <cppunit\extensions\HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder\ShapeSphereBuilder.h>
#include <Utils.h> 
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class ShapeSphereBuilderTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(ShapeSphereBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testCreateObject();
private:
	chai3d::cShapeSphere* sphere;
};
#endif