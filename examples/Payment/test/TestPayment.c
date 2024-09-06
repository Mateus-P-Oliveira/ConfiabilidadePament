#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(payment);

TEST_SETUP(payment)
{
}

TEST_TEAR_DOWN(payment)
{
}

TEST(payment, Testpayment1)
{
  // All of these should pass
  TEST_ASSERT_EQUAL(-2, payment(1,2));
  TEST_ASSERT_EQUAL(-1, payment(2,2));
}

TEST(payment, Testpayment2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(2, payment(1,2));
}
