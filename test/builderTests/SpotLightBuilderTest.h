#ifndef SPOTLIGHT_TEST_H
#define SPOTLIGHT_TEST_H
//------------------------------------------------------------------------------
#include <cppunit\TestCase.h>
#include <cppunit\extensions\HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder\SpotLightBuilder.h>
#include <Builder\IObjectBuilder.h>
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class SpotLightBuilderTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(SpotLightBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testCreateObject();
private:
	chai3d::cSpotLight* light;
};
#endif