//
//  GameOverLayer.h
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/28.
//
//

#ifndef __findrabbit__GameOverLayer__
#define __findrabbit__GameOverLayer__
USING_NS_CC;
#include <stdio.h>
class GameOverLayerDelegate {
    virtual void GameOverLayerRestartGame()=0;
};
class GameOverLayer:public cocos2d::Layer {
public:
    virtual bool init();
    CREATE_FUNC(GameOverLayer);
    void setDelegate(GameOverLayerDelegate *delegate) {delegate = delegate;}
    void GameOver (int CurrentScore, int BestScore);
private:
    void ClickStartGame();
    Label *m_labelTitle;
    Label *m_labelScoreMsg;
    GameOverLayerDelegate *m_delegate;
};

#endif /* defined(__findrabbit__GameOverLayer__) */
