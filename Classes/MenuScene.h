#ifndef __Menu_LAYER_H__
#define __Menu_LAYER_H__

USING_NS_CC;

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "editor-support/cocostudio/CCSGUIReader.h"

using namespace cocostudio;
using namespace ui;

class MenuLayer :public Layer
{
public:
	MenuLayer(void);
	~MenuLayer(void);
    virtual void onEnter();
    static Scene* createScene();
    
    void touchPlay(Ref* pSender, Widget::TouchEventType type);
    void touchTraining(Ref* pSender, Widget::TouchEventType type);
    void touchHowToPlay(Ref* pSender, Widget::TouchEventType type);
    void touchRanking(Ref* pSender, Widget::TouchEventType type);
};
#endif // __MENU_LAYER_H__
