//------------------------------------------------------------------------------
#include "DirectionalLightBuilderTest.h"
#include "ShapeSphereBuilderTest.h"
#include "SpotLightBuilderTest.h"
#include "MultiMeshBuilderTest.h"
#include "ToolCursorBuilderTest.h"
#include "CameraBuilderTest.h"
#include "MaterialBuilderTest.h"
#include "UtilsTest.h"
//------------------------------------------------------------------------------
#include "GraphicsComponentTest.h"
#include "HapticsComponentTest.h"
#include "RenderableComponentTest.h"
//------------------------------------------------------------------------------
#include "SceneTest.h"
#include "SimulationTest.h"
//------------------------------------------------------------------------------
#include <cppunit/TestListener.h>
#include <cppunit/ui/text/TestRunner.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/ui/text/TestRunner.h>
//------------------------------------------------------------------------------

int main(int argc, char* argv[])
{
	//==========================================
	//				BUILDER
	//==========================================

	CppUnit::TextUi::TestRunner runnerBuilder;

	runnerBuilder.addTest(CameraBuilderTest::suite());
	runnerBuilder.addTest(DirectionalLightBuilderTest::suite());
	runnerBuilder.addTest(ShapeSphereBuilderTest::suite());
	runnerBuilder.addTest(MultiMeshBuilderTest::suite());
	runnerBuilder.addTest(SpotLightBuilderTest::suite());
	runnerBuilder.addTest(ToolCursorBuilderTest::suite());
	runnerBuilder.addTest(MaterialBuilderTest::suite());
	runnerBuilder.addTest(UtilsTest::suite());

	runnerBuilder.setOutputter(new CppUnit::CompilerOutputter(&runnerBuilder.result(),
		std::cerr));
	
	bool wasSucessful = runnerBuilder.run("", true);

	//==========================================
	//				CORE
	//==========================================
	CppUnit::TextUi::TestRunner runnerCore;

	runnerCore.addTest(GraphicsComponentTest::suite());
	runnerCore.addTest(HapticsComponentTest::suite());
	runnerCore.addTest(RenderableComponentTest::suite());
	
	runnerCore.setOutputter(new CppUnit::CompilerOutputter(&runnerCore.result(),
		std::cerr));


	bool wasSucessfulCore = runnerCore.run("", true);

	//==========================================
	//				SIMULATION
	//==========================================
	CppUnit::TextUi::TestRunner runnerSimulation;

	runnerSimulation.addTest(SceneTest::suite());
	runnerSimulation.addTest(SimulationTest::suite());

	runnerSimulation.setOutputter(new CppUnit::CompilerOutputter(&runnerSimulation.result(),
		std::cerr));


	bool wasSucessfulSimulation = runnerSimulation.run("", true);
	std::cout << "fin";
}