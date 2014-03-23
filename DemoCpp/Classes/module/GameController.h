#ifndef __GAME_CONTROLLER_H__
#define __GAME_CONTROLLER_H__

#include "domain/config.h"
#include "cocos2d.h"
USING_NS_CC;

class GameController : public CCObject
{
public:
	static GameController* sharedController();
	bool virtual init();

	void setCoin(int v);
	int getCoin();
	void setLevel(int v);
	int getLevel();
	void setWin(bool v);
	bool isWin();
	void setArrWeapon(CCArray* pArrWeapon);
	CCArray* getArrWeapon();
	void setArrMedicine(CCArray* pArrMedicine);
	CCArray* getArrMedicine();
	void setArrProp(CCArray* pArrProp);
	CCArray* getArrProp();

protected:
private:
	static GameController* m_instance;

	bool m_isWin;//�����Ƿ�ʤ��
	int m_level;//��ǰ�ؿ�
	int m_coin;//��ǰ�����
	CCArray* m_arrWeapon;
	CCArray* m_arrMedicine;
	CCArray* m_arrProp;
};

#endif