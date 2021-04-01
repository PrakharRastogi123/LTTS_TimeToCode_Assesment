#include "Utilities.h"
#include "unity.h"
#include "unity_internals.h"

/**
 * @brief Unit testing for basic calculator functions on complex numbers
 * 
 */

static complex_no c1 = {0, 0};
static complex_no c2 = {0, 0};
static complex_no result = {0, 0};
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_zero(void)
{
    //Checking for complex numbers with zero coefficients
    c1.real = 0;
    c1.imaginary = 0;
    
    c2.real = 0;
    c2.imaginary = 0;
    
    TEST_ASSERT_EQUAL(OK, add(c1, c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);
    TEST_ASSERT_EQUAL(OK, subtract(c1, c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);
    TEST_ASSERT_EQUAL(OK, multiply(c1, c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);
    TEST_ASSERT_EQUAL(-2, divide(c1, c2, &result));
    TEST_ASSERT_EQUAL(0, result.real);
    TEST_ASSERT_EQUAL(0, result.imaginary);
}
void test_positive(void)
{
    c1.real = 25;
    c1.imaginary = 15;
    
    c2.real = 75;
    c2.imaginary = 95;
    
    TEST_ASSERT_EQUAL(OK, add(c1, c2, &result));
    TEST_ASSERT_EQUAL(100, result.real);
    TEST_ASSERT_EQUAL(110, result.imaginary);
    TEST_ASSERT_EQUAL(OK, subtract(c1, c2, &result));
    TEST_ASSERT_EQUAL(-50, result.real);
    TEST_ASSERT_EQUAL(-80, result.imaginary);
    TEST_ASSERT_EQUAL(OK, multiply(c1, c2, &result));
    TEST_ASSERT_EQUAL(450, result.real);
    TEST_ASSERT_EQUAL(3500, result.imaginary);
    TEST_ASSERT_EQUAL(OK, divide(c1, c2, &result));
    TEST_ASSERT_EQUAL(0.2252559727, result.real);
    TEST_ASSERT_EQUAL(-0.08532423208, result.imaginary);
}

void test_negative(void)
{
    c1.real = -25;
    c1.imaginary = -15;
    
    c2.real = 75;
    c2.imaginary = 95;
    
    TEST_ASSERT_EQUAL(OK, add(c1, c2, &result));
    TEST_ASSERT_EQUAL(50, result.real);
    TEST_ASSERT_EQUAL(80, result.imaginary);
    TEST_ASSERT_EQUAL(OK, subtract(c1, c2, &result));
    TEST_ASSERT_EQUAL(-100, result.real);
    TEST_ASSERT_EQUAL(-110, result.imaginary);
    TEST_ASSERT_EQUAL(OK, multiply(c1, c2, &result));
    TEST_ASSERT_EQUAL(-450, result.real);
    TEST_ASSERT_EQUAL(-3500, result.imaginary);
    TEST_ASSERT_EQUAL(OK, divide(c1, c2, &result));
    TEST_ASSERT_EQUAL(-0.2252559727, result.real);
    TEST_ASSERT_EQUAL(0.08532423208, result.imaginary);

    c1.real = -25;
    c1.imaginary = -15;
    
    c2.real = -75;
    c2.imaginary = -95;
    
    TEST_ASSERT_EQUAL(OK, add(c1, c2, &result));
    TEST_ASSERT_EQUAL(-100, result.real);
    TEST_ASSERT_EQUAL(-110, result.imaginary);
    TEST_ASSERT_EQUAL(OK, subtract(c1, c2, &result));
    TEST_ASSERT_EQUAL(50, result.real);
    TEST_ASSERT_EQUAL(80, result.imaginary);
    TEST_ASSERT_EQUAL(OK, multiply(c1, c2, &result));
    TEST_ASSERT_EQUAL(450, result.real);
    TEST_ASSERT_EQUAL(3500, result.imaginary);
    TEST_ASSERT_EQUAL(OK, divide(c1, c2, &result));
    TEST_ASSERT_EQUAL(0.2252559727, result.real);
    TEST_ASSERT_EQUAL(-0.08532423208, result.imaginary);

}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_zero);
    RUN_TEST(test_positive);
    RUN_TEST(test_negative);

    /* Close the Unity Test Framework */
    return UNITY_END();
}