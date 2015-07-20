//
//  MenuCtrlLayer.h
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/17.
//
//

#ifndef __findrabbit__MenuCtrlLayer__
#define __findrabbit__MenuCtrlLayer__

#include <stdio.h>
USING_NS_CC;

class MenuCtrlLayer : public cocos2d::Layer {
public:
    virtual bool init();
    CREATE_FUNC(MenuCtrlLayer);
private:
    void clickStartGame();
};
#endif /* defined(__findrabbit__MenuCtrlLayer__) */
