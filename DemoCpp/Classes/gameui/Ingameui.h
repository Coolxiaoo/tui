#ifndef __UI_INGAME_H__
#define __UI_INGAME_H__

#include "tui/TuiBase.h"
#include "tui/TuiManager.h"
#include "domain/goods/GoodsBase.h"
#include "domain/goods/Weapon.h"
#include "domain/goods/Medicine.h"
#include "domain/goods/Prop.h"
#include "domain/character/Hero.h"
#include "domain/character/Monstor.h"
#include "module/MonstorManager.h"
#include "module/LevelManager.h"
#include "module/AnimManager.h"
#include "module/GameController.h"

class Ingameui : public TuiBase
{
public:
	CREATE_SCENE_FUNC(Ingameui);
	Ingameui();
	~Ingameui();
	virtual void onLoadResources();
	virtual void onLoadScene();
	virtual void update(float delta);

	CCNode* getPanel(int tagPanel);
	Hero* getHero();
protected:
	void event_btn_fire(CCObject* s);
	void event_btn_tool(CCObject* s);
	void event_on_move(CCObject* pSender, float fx, float fy);
	
	void excuteEndGame(float dt);

	void onMessage(unsigned int uMsg, CCObject* pMsgObj, void* wParam, void* lParam);
private:
	Hero *m_pHero;
	MonstorManager* m_monstorManager;
	AnimManager* m_animManager;
	LevelManager* m_levelManager;
	CCNode *m_BgMap;
	float m_speed;
	int m_curLevel;//��ǰ��Ϸ�ؿ�

	CCArray* m_arrWeapon;//������ ����
	CCArray* m_arrMedicine;//ҩˮ
	CCArray* m_arrProp;//����
};
#endif