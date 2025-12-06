#include "global.h"
#include "fieldmap.h"
#include "main.h"
#include "malloc.h"
#include "overworld.h"
#include "test_runner.h"
#include "test/overworld_script.h"
#include "test/test.h"

static void OverworldTest_SetUp(void *data)
{
    (void)data;
    ClearRiggedRng();
    gFunctionTestRunnerState = AllocZeroed(sizeof(*gFunctionTestRunnerState));
    SeedRng(0);
}

extern EWRAM_DATA u32 gGBufferedInputsTimer;

static void OverworldTest_Run(void *data)
{
    gGBufferedInputsTimer = gMain.vblankCounter1;
    SetMainCallback1(CB2_NewGame);
    SetMainCallback2(CB2_NewGame);
    void (*function)(void) = data;
    do
    {
        if (gFunctionTestRunnerState->parameters)
            Test_MgbaPrintf(":N%s %d/%d", gTestRunnerState.test->name, gFunctionTestRunnerState->runParameter + 1, gFunctionTestRunnerState->parameters);
        gFunctionTestRunnerState->parameters = 0;
        function();
    } while (++gFunctionTestRunnerState->runParameter < gFunctionTestRunnerState->parameters);
}

static void OverworldTest_TearDown(void *data)
{
    (void)data;
    FREE_AND_SET_NULL(gFunctionTestRunnerState);
}

const struct TestRunner gOverworldTestRunner =
{
    .setUp = OverworldTest_SetUp,
    .run = OverworldTest_Run,
    .tearDown = OverworldTest_TearDown,
    //.checkProgress = OverworldTest_CheckProgress,
    //.randomUniform = OverworldTest_RandomUniform,
    //.randomWeightedArray = OverworldTest_RandomWeightedArray,
    //.randomElementArray = OverworldTest_RandomElementArray,
};
