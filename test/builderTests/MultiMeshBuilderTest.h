#ifndef MULTI_MESH_TEST_H
#define MULTI_MESH_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder\MultiMeshBuilder.h>
#include <Builder\IObjectBuilder.h>
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class MultiMeshBuilderTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(MultiMeshBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testCreateObject();
private:
	chai3d::cMultiMesh* meshObject;
};
#endif