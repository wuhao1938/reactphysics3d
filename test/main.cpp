/********************************************************************************
* ReactPhysics3D physics library, http://code.google.com/p/reactphysics3d/      *
* Copyright (c) 2010-2013 Daniel Chappuis                                       *
*********************************************************************************
*                                                                               *
* This software is provided 'as-is', without any express or implied warranty.   *
* In no event will the authors be held liable for any damages arising from the  *
* use of this software.                                                         *
*                                                                               *
* Permission is granted to anyone to use this software for any purpose,         *
* including commercial applications, and to alter it and redistribute it        *
* freely, subject to the following restrictions:                                *
*                                                                               *
* 1. The origin of this software must not be misrepresented; you must not claim *
*    that you wrote the original software. If you use this software in a        *
*    product, an acknowledgment in the product documentation would be           *
*    appreciated but is not required.                                           *
*                                                                               *
* 2. Altered source versions must be plainly marked as such, and must not be    *
*    misrepresented as being the original software.                             *
*                                                                               *
* 3. This notice may not be removed or altered from any source distribution.    *
*                                                                               *
********************************************************************************/

// Libraries
#include "TestSuite.h"
#include "tests/mathematics/TestVector2.h"
#include "tests/mathematics/TestVector3.h"
#include "tests/mathematics/TestTransform.h"
#include "tests/mathematics/TestQuaternion.h"
#include "tests/mathematics/TestMatrix2x2.h"
#include "tests/mathematics/TestMatrix3x3.h"

using namespace reactphysics3d;

int main() {

    TestSuite testSuite("ReactPhysics3D Tests");

    // ---------- Mathematics tests ---------- //

    testSuite.addTest(new TestVector2);
    testSuite.addTest(new TestVector3);
    testSuite.addTest(new TestTransform);
    testSuite.addTest(new TestQuaternion);
    testSuite.addTest(new TestMatrix3x3);
    testSuite.addTest(new TestMatrix2x2);

    // ----------------------------- --------- //

    // Run the tests
    testSuite.run();

    // Display the report
    long nbFailedTests = testSuite.report();

    // Clear the tests from the test suite
    testSuite.clear();

    return nbFailedTests;
}