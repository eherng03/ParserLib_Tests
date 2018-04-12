#ifndef UTILS_TEST_H
#define UTILS_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <vector>
//------------------------------------------------------------------------------
class UtilsTest : public CppUnit::TestFixture {
	CPPUNIT_TEST_SUITE(UtilsTest);
	CPPUNIT_TEST(testSplit);
	CPPUNIT_TEST(testGetVector);
	CPPUNIT_TEST(testGetSingleton);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testSplit();
	void testGetVector();
	void testGetSingleton();
};
#endif 