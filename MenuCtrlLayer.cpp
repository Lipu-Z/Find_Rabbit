//
//  MenuCtrlLayer.cpp
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/17.
//
//

#include "MenuCtrlLayer.h"
#include "GameScene.h"


bool MenuCtrlLayer::init(){
    if (!Layer::init()) {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    Label *labelStart = Label::createWithSystemFont("start", "", 70);
    MenuItemLabel *menuItemLabel = MenuItemLabel::create(labelStart, CC_CALLBACK_0(MenuCtrlLayer::clickStartGame,this));
    Menu* menuStart = Menu::create(menuItemLabel,NULL);
    menuStart->setPosition(visibleSize.width/2,visibleSize.height/2);
    this->addChild(menuStart);
    
    //movement of the button
    menuItemLabel->runAction(RepeatForever::create(Sequence::create(ScaleTo::create(0.5,0.8), ScaleTo::create(0.5, 1.2), NULL)));
    return true;
}

void MenuCtrlLayer::clickStartGame() {
    Director::getInstance()->replaceScene(TransitionSplitCols::create(0.3f, GameScene::create()));
}