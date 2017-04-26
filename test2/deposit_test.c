#include "deposit.h"
#include "ctest.h"

CTEST(DepoTest1,First){
	const int result = perform(30, 500);
	const int expected = 450;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest2,Second){
	const int result = perform(100, 15000);
	const int expected = 15300;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest3,Thirds){
	const int result = perform(200, 30000);
	const int expected = 31800;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest4,Fourth){
	const int result = perform(300, 45000);
	const int expected = 31800;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest5,Fifth){
	const int result = perform(40, 150000);
	const int expected = 154500;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest6,Sixth){
	const int result = perform(200, 1500000);
	const int expected = 1620000;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest7,Seventh){
	const int result = perform(300, 15000000);
	const int expected = 17250000;
	ASSERT_EQUAL(expected, result);
}	
CTEST(DepoTest8,Eighth){
	const int result = perform(10, 15000000);
	const int expected = 13500000;
	ASSERT_EQUAL(expected, result);
}	