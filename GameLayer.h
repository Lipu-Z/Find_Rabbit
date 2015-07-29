//
//  GameLayer.h
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/29.
//
//

#ifndef __findrabbit__GameLayer__
#define __findrabbit__GameLayer__

#include <stdio.h>
class GameOverlayerDelegate {
public:
    virtual void GameOverLayerRestartGame()=0;
};

class GameOverLayer:public cocos2d::Layer {
public:
    virtual bool init();
    CREATE_FUNC(GameOverLayer);
    
    void setDelegate(GameOverlayerDelegate *delegate) {m_delegate = delegate;}
    
    void StartGame();
private:
    GameOverlayerDelegate *m_delegate;
};
#endif /* defined(__findrabbit__GameLayer__) */
