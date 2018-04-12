//------------------------------------------------------------------------------
#include "UtilsTest.h"
//------------------------------------------------------------------------------
using namespace std;
using namespace parser;
//------------------------------------------------------------------------------
void UtilsTest::setUp(){

}

void UtilsTest::tearDown(){
}

void UtilsTest::testSplit(){
		vector<string> actual = Utils::getSingleton().split("h o l a", ' ');
		vector<string> expected = { "h", "o", "l", "a" };
		
		CPPUNIT_ASSERT(equal(actual.begin(), actual.end(), expected.begin()));

		vector<double> actual1 = Utils::getSingleton().getVector("1.0 65 20");
		vector<double> expected1 = { 1.0, 65, 20 };

		CPPUNIT_ASSERT(equal(actual1.begin(), actual1.end(), expected1.begin()));
}

void UtilsTest::testGetVector(){
	vector<double> actual1 = Utils::getSingleton().getVector("1.0 65 20");
	vector<double> expected1 = { 1.0, 65, 20 };

	CPPUNIT_ASSERT(equal(actual1.begin(), actual1.end(), expected1.begin()));
}

void UtilsTest::testGetSingleton(){
	Utils utils = Utils::getSingleton();
	CPPUNIT_ASSERT(&utils != (NULL));
}
