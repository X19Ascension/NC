/****************************************************************************/
/*!
\file Dweller.h
\author Nathan Chia
\par email: 150503N@mymail.nyp.edu.sg
\brief
Class to define a player/character
*/
/****************************************************************************/
#ifndef DWELLER_H_
#define DWELLER_H_
#include "Outfit.h"
#include "Weapon.h"
#include "Vec2D.h"
/****************************************************************************/
/*!
Class Dweller:
\brief Defines Dweller stats such as SPECIAL stats, health, radiation damage, the number of stimpaks and radaways, also for weapons and outfits should there be one equipped
*/
/****************************************************************************/
class Dweller : public GameObject
{
private:
	Vec2D position_;
	int SPECIAL_;
	int health_;
	int radiation_;
	int stimpak_;
	int radaway_;
	Outfit* outfit_;
	Weapon* weapon_;
protected:
public:
	Dweller(const string&, const int&);
	virtual ~Dweller();
	const int getSPECIAL();
	const int getCurrentHealth();
	const int getCurrentRadDamage();
	const int getAttackDmg();
	void setPosition(const Vec2D&);
	const Vec2D getPosition();
	void receiveHealthDamage(const int&);
	void receiveRadDamage(const int&);
	void receiveEquipmentDamage(const int&);
	void addStimpak(const int&);
	void addRadAway(const int&);
	void useStimpak();
	void useRadAway();
	Outfit* assignOutfit(Outfit*);
	Weapon* assignWeapon(Weapon*);
	bool isDead();

};

#endif