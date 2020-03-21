#include <gtest/gtest.h>
#include "../src/funcs.h"

TEST(orderItem, TestItem1) {
    Cafe TestCafe("Test Cafe");
    TestCafe.addItem("Test Item 1", 1);
    ASSERT_EQ(4, payMoney(TestCafe.orderItem("Test Item 1"), 5));
}

TEST(orderItem, TestItem2) {
    Cafe TestCafe("Test Cafe");
    TestCafe.addItem("Test Item 2", 3);
    ASSERT_EQ(1, payMoney(TestCafe.orderItem("Test Item 2", 3), 10));
}

TEST(orderItem, TestItem3) {
    Cafe TestCafe("Test Cafe");
    TestCafe.addItem("Test Item 3", 5);
    ASSERT_EQ(0, payMoney(TestCafe.orderItem("Test Item 3", 30), 150));
}

int main(int argc, char** argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}