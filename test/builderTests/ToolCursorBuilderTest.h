#ifndef TOOL_CURSOR_TEST_H
#define TOOL_CURSOR_TEST_H
//------------------------------------------------------------------------------
#include <cppunit/TestCase.h>
#include <cppunit/extensions/HelperMacros.h>
//------------------------------------------------------------------------------
#include <files/CFileXML.h>
#include <chai3d.h>
//------------------------------------------------------------------------------
#include <Builder/ToolCursorBuilder.h>
#include <Builder/IObjectBuilder.h>
#include <Utils.h>
//------------------------------------------------------------------------------
#include <string>
#include <map>
//------------------------------------------------------------------------------
class ToolCursorBuilderTest : public CppUnit::TestFixture  {
	CPPUNIT_TEST_SUITE(ToolCursorBuilderTest);
	CPPUNIT_TEST(testCreateObject);
	CPPUNIT_TEST_SUITE_END();

public:

	void setUp();
	void tearDown();

	void testCreateObject();
private:
	chai3d::cToolCursor* cursor;
};
#endif