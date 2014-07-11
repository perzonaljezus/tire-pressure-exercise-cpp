#include "gtest/gtest.h"
#include "Alarm.h"
 
TEST(AlarmTest, a_trivial_test) {
    EXPECT_EQ(1, 3-2);
}

// TODO-new-intent: a normal pressure value after a value outside the range should stop the alarm
