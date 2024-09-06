#include "payment.h"
#include "unity.h"
#include "unity_fixture.h"


TEST_GROUP(Payment);

TEST_SETUP(Payment)
{
}

TEST_TEAR_DOWN(Payment)
{
}

TEST(Payment, Testpayment1)
{
  // All of these should pass
  float pagamento = 730.11;
  char tipo[15];
  sprintf(tipo, "VIP");
  TEST_ASSERT_EQUAL(0, payment(pagamento,tipo));
  //TEST_ASSERT_EQUAL(-1, payment(2,2));
}

/*TEST(payment, Testpayment2)
{
  // This test will fail
  TEST_ASSERT_EQUAL(2, payment(1,2));
}*/
