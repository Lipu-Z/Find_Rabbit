//
//  GameOverLayer.h
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/28.
//
//

#ifndef __findrabbit__GameOverLayer__
#define __findrabbit__GameOverLayer__

#include <stdio.h>
class GameOverlayerDelegate {
public:
    virtual void GameOverLayerRestartGame()=0;
};

class GameOverLayer:public cocos2d::Layer {
public:
    virtual bool init();
    CREATE_FUNC(GameOverLayer);
    
}

#endif /* defined(__findrabbit__GameOverLayer__) */
