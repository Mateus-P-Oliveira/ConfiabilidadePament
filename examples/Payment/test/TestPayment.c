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

TEST(Payment, Testpayment1) {
    float pagamento = 0.01;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment2) {
    float pagamento = 9999.99;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment3) {
    float pagamento = 10000.00;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment4) {
    float pagamento = 19999.99;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment5) {
    float pagamento = 20000.00;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment6) {
    float pagamento = 99999.00;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment7) {
    float pagamento = 0.01;
    char tipo[15] = "estudante";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment8) {
    float pagamento = 9999.99;
    char tipo[15] = "estudante";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment9) {
    float pagamento = 10000.00;
    char tipo[15] = "estudante";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment10) {
    float pagamento = 19999.99;
    char tipo[15] = "estudante";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment11) {
    float pagamento = 20000.00;
    char tipo[15] = "estudante";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment12) {
    float pagamento = 99999.00;
    char tipo[15] = "estudante";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment13) {
    float pagamento = 0.01;
    char tipo[15] = "aposentado";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment14) {
    float pagamento = 9999.99;
    char tipo[15] = "aposentado";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment15) {
    float pagamento = 10000.00;
    char tipo[15] = "aposentado";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment16) {
    float pagamento = 19999.99;
    char tipo[15] = "aposentado";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment17) {
    float pagamento = 20000.00;
    char tipo[15] = "aposentado";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment18) {
    float pagamento = 99999.00;
    char tipo[15] = "aposentado";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment19) {
    float pagamento = 0.01;
    char tipo[15] = "VIP";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment20) {
    float pagamento = 9999.99;
    char tipo[15] = "VIP";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment21) {
    float pagamento = 10000.00;
    char tipo[15] = "VIP";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment22) {
    float pagamento = 19999.99;
    char tipo[15] = "VIP";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment23) {
    float pagamento = 20000.00;
    char tipo[15] = "VIP";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment24) {
    float pagamento = 99999.00;
    char tipo[15] = "VIP";
    TEST_ASSERT_EQUAL(0, payment(pagamento, tipo));
}

TEST(Payment, Testpayment25) {
    float pagamento = 0.00;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(1, payment(pagamento, tipo));
}

TEST(Payment, Testpayment26) {
    float pagamento = 100000.00;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(1, payment(pagamento, tipo));
}

TEST(Payment, Testpayment27) {
    float pagamento = -1.00;
    char tipo[15] = "regular";
    TEST_ASSERT_EQUAL(1, payment(pagamento, tipo));
}

TEST(Payment, Testpayment28) {
    float pagamento = 0.01;
    char tipo[15] = "invalido1";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment29) {
    float pagamento = 9999.99;
    char tipo[15] = "invalido2";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment30) {
    float pagamento = 10000.00;
    char tipo[15] = "invalido3";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment31) {
    float pagamento = 19999.99;
    char tipo[15] = "invalido1";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment32) {
    float pagamento = 20000.00;
    char tipo[15] = "invalido2";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment33) {
    float pagamento = 99999.00;
    char tipo[15] = "invalido3";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment34) {
    float pagamento = 0.01;
    char tipo[15] = "invalido4";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment35) {
    float pagamento = 99999.00;
    char tipo[15] = "invalido4";
    TEST_ASSERT_EQUAL(2, payment(pagamento, tipo));
}

TEST(Payment, Testpayment36)
{
  //Teste que deve sempre passar
  float pagamento = 730.11;
  char tipo[15] = "VIP"; 
  TEST_ASSERT_EQUAL(0, payment(pagamento,tipo));
  
}