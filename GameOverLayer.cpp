//
//  GameOverLayer.cpp
//  findrabbit
//
//  Created by Lipu Zhong on 15/7/28.
//
//

#include "GameOverLayer.h"

bool GameOverLayer::init(){
    if (!Layer::init()) {
        return false;
    }
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    Label *labelBack = Label::createWithSystemFont("back", "", 70);
    MenuItemLabel *menuItemLabel = MenuItemLabel::create(labelBack, CC_CALLBACK_0(GameCtrlLayer::clickEndGame,this));
    Menu *menuEnd = Menu::create(menuItemLabel,NULL);
    menuEnd->setPosition(80,visibleSize.height-50);
    this->addChild(menuEnd);
    
    //movement of the button
    menuItemLabel->runAction(RepeatForever::create(Sequence::create(ScaleTo::create(0.5,0.8), ScaleTo::create(0.5, 1.2), NULL)));
    return true;
}

//scene translation
void GameCtrlLayer::clickEndGame() {
    Director::getInstance()->replaceScene(TransitionTurnOffTiles::create(0.5f, MenuScene::create()));
}