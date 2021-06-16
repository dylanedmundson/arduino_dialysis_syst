#include <Arduino.h>
#include <unity.h>
const int VALVE1 = 2;
const int VALVE2 = 4;
const int PUMP = 3;

void test_valve1_pin_number(void) {
    TEST_ASSERT_EQUAL(2, VALVE1);
}

void test_valve2_pin_number(void) {
    TEST_ASSERT_EQUAL(4, VALVE2);
}
void test_pump_pin_number(void) {
    TEST_ASSERT_EQUAL(3, PUMP);
}

void test_valve1_state_high(void) {
    digitalWrite(VALVE1, HIGH);
    TEST_ASSERT_EQUAL(HIGH, digitalRead(VALVE1));
}

void test_valve2_state_high(void) {
    digitalWrite(VALVE2, HIGH);
    TEST_ASSERT_EQUAL(HIGH, digitalRead(VALVE2));
}

void test_pump_state_high(void) {
    digitalWrite(PUMP, HIGH);
    TEST_ASSERT_EQUAL(HIGH, digitalRead(PUMP));
}

void test_valve1_state_low(void) {
    digitalWrite(VALVE1, LOW);
    TEST_ASSERT_EQUAL(LOW, digitalRead(VALVE1));
}

void test_valve2_state_low(void) {
    digitalWrite(VALVE2, LOW);
    TEST_ASSERT_EQUAL(LOW, digitalRead(VALVE2));
}

void test_pump_state_low(void) {
    digitalWrite(PUMP, LOW);
    TEST_ASSERT_EQUAL(LOW, digitalRead(PUMP));
}

void setup() {
    delay(2000);

    UNITY_BEGIN();
    RUN_TEST(test_valve1_pin_number);
    RUN_TEST(test_valve2_pin_number);
    RUN_TEST(test_pump_pin_number);

    pinMode(VALVE1, OUTPUT);
    pinMode(VALVE2, OUTPUT);
    pinMode(PUMP, OUTPUT);
}

uint8_t i = 0;
uint8_t max_itr = 5;

void loop() {
    if (i < max_itr) {
        RUN_TEST(test_valve1_state_high);
        delay(500);
        RUN_TEST(test_valve1_state_low);
        delay(500);
        RUN_TEST(test_valve2_state_high);
        delay(500);
        RUN_TEST(test_valve2_state_low);
        delay(500);
        RUN_TEST(test_pump_state_high);
        delay(500);
        RUN_TEST(test_pump_state_low);
        delay(500);
        i++;
    } else if (i == max_itr)
    {
        UNITY_END();
    }
    
}