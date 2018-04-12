#ifndef MATERIAL_TEST_H
#define MATERIAL_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder\MaterialBuilder.h>
#include <Builder\IObjectBuilder.h>
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class MaterialBuilderTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(MaterialBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testCreateObject();
private:
	chai3d::cGenericObject* object;
};
#endif