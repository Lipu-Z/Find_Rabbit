//
//  GameCtrlLayer.h
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/24.
//
//

#ifndef __findrabbit__GameCtrlLayer__
#define __findrabbit__GameCtrlLayer__

#include <stdio.h>

USING_NS_CC;

class GameCtrlLayer : public cocos2d::Layer {
public:
    virtual bool init();
    CREATE_FUNC(GameCtrlLayer);
private:
    void clickEndGame();
};

#endif /* defined(__findrabbit__GameCtrlLayer__) */
