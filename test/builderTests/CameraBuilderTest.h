#ifndef CAMERA_TEST_H
#define CAMERA_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <chai3d.h>
#include <files\CFileXML.h>
//------------------------------------------------------------------------------
#include <Builder\CameraBuilder.h>
#include <Builder\IObjectBuilder.h>
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class CameraBuilderTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE(CameraBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

	public:
		void setUp();
		void tearDown();

		void testCreateObject();
	private:
		chai3d::cCamera* camera;
};
#endif