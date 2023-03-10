#include <gtest/gtest.h>
#include "../GameLogic.hpp"

//Game rules test

TEST(GameTests, TestCurrentNumber){
    GameRules gr(1,3);
    EXPECT_TRUE(gr.getCurrentNumber() > 0);
}

TEST(GameTests, TestIncreaseCurrentNumber){
    GameRules gr(1,3);
    int n = gr.getCurrentNumber();
    gr.increaseCurrentNumber();
    EXPECT_EQ(gr.getCurrentNumber(), n+1);
}

//Player test

TEST(GameTests, TestPlayer){
    GameRules gr(1,3);
    Player p(&gr, 100, 13);

    std::string res = p.play();

    EXPECT_EQ(res, "Player 100: 1");
}