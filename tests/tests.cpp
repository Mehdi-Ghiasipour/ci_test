#include <gtest/gtest.h>
#include "../src/problems.h"

TEST(Problem1, BalancedNum) {
    EXPECT_EQ(balancedNum(7), "Balanced");
    EXPECT_EQ(balancedNum(959), "Balanced");
}

TEST(Problem2, IsIsogram) {
    EXPECT_TRUE(is_isogram("Dermatoglyphics"));
    EXPECT_FALSE(is_isogram("aba"));
}

TEST(Problem3, PossiblyPerfect) {
    EXPECT_TRUE(possibly_perfect({'B', 'A', '_', '_'}, {'B', 'A', 'C', 'C'}));
}

TEST(Problem4, FindOdd) {
    EXPECT_EQ(findOdd({7}), 7);
    EXPECT_EQ(findOdd({0}), 0);
}

TEST(Problem5, EncodeDecode) {
    EXPECT_EQ(encode("hello"), "h2ll4");
    EXPECT_EQ(decode("h3 th2r2"), "hi there");
}

TEST(Problem6, Bananas) {
    std::unordered_set<std::string> expected = {"b-anana--", "b-anan--a", "b-ana--na", "b-an--ana", "b-a--nana", "b---anana",
                                                "-banana--", "-banan--a", "-bana--na", "-ban--ana", "-ba--nana", "-b--anana"};
    EXPECT_EQ(bananas("bbananana"), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

