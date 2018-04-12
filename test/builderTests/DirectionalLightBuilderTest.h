//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <files\CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder\DirectionalLightBuilder.h>
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class DirectionalLightBuilderTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(DirectionalLightBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

public:
	
	void setUp();
	void tearDown();

	void testCreateObject();

private:
	chai3d::cDirectionalLight* light;
};