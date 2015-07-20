//
//  MenuScene.cpp
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/17.
//
//

#include "MenuScene.h"
#include "MenuCtrlLayer.h"

bool MenuScene::init(){
    if (!Scene::init()) {
        return false;
    }
    Size visiblesize = Director::getInstance()->getVisibleSize();
    
    //add background
    auto sprite = Sprite::create("images/bg_game.jpg");
    sprite->setPosition(Vec2(visiblesize.width/2, visiblesize.height/2));
    this->addChild(sprite);
    
    //add control layer
    this->addChild(MenuCtrlLayer::create());
    return true;
};
