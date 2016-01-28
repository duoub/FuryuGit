#include "MenuScene.h"
#include "cocostudio/CocoStudio.h"

MenuLayer::MenuLayer(void)
{
}

MenuLayer::~MenuLayer(void)
{
}

void MenuLayer::onEnter()
{
    Layer::onEnter();

    // get UI from csb file that created by cocos studio
    auto m_layout = CSLoader::createNode("MenuLayer.csb");
    addChild(m_layout);
    
    auto pnlMenu = m_layout->getChildByName("pnlMenu");

    auto btnPlay = pnlMenu->getChildByName("btnPlay");
	((Button*)btnPlay)->addTouchEventListener(CC_CALLBACK_2(MenuLayer::touchPlay, this));
    
    auto btnTraining = pnlMenu->getChildByName("btnTraining");
    ((Button*)btnTraining)->addTouchEventListener(CC_CALLBACK_2(MenuLayer::touchTraining, this));
    
    auto btnHowToPlay = pnlMenu->getChildByName("btnHowToPlay");
    ((Button*)btnHowToPlay)->addTouchEventListener(CC_CALLBACK_2(MenuLayer::touchHowToPlay, this));
    
    auto btnRanking = pnlMenu->getChildByName("btnRanking");
    ((Button*)btnRanking)->addTouchEventListener(CC_CALLBACK_2(MenuLayer::touchRanking, this));
}

void MenuLayer::touchPlay(Ref* pSender, Widget::TouchEventType type)
{
	if (type != Widget::TouchEventType::ENDED)
        return;
    CCLOG("Play Touched!");
}

void MenuLayer::touchTraining(Ref* pSender, Widget::TouchEventType type)
{
    if (type != Widget::TouchEventType::ENDED)
        return;
    CCLOG("Training Touched!");
}

void MenuLayer::touchHowToPlay(Ref* pSender, Widget::TouchEventType type)
{
    if (type != Widget::TouchEventType::ENDED)
        return;
    CCLOG("How To Play Touched!");
}

void MenuLayer::touchRanking(Ref* pSender, Widget::TouchEventType type)
{
    if (type != Widget::TouchEventType::ENDED)
        return;
    CCLOG("Ranking Touched!");
}

Scene* MenuLayer::createScene()
{
    Scene* scene = Scene::create();
    MenuLayer* layer = new MenuLayer();
    scene->addChild(layer);
    layer->release();
    
    return scene;
}

