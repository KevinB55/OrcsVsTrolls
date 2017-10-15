#include<iostream>
using namespace std;

class Character
{
public:
	//functions that both subclasses use
	void spellOrMelee() { cout << "Would you like to use a spell attack or a melee attack" << endl << "1 = Spell" << endl << "2 = Melee" << endl; }
	void spells() { cout << "Select your spell attack" << endl; }
	void melee() { cout << "Select your melee attack" << endl; }
	void defend() { cout << "Select your defensive ablity" << endl; }
	void setHealth(int healthLoss) { health = health - healthLoss; }
	int getHealth() { return health; }
	void itemUse() { cout << "Would you like to use your items first?" << endl << "1 = Yes" << endl << "2 = No"; }
	void itemList() 
	{
		cout << "1. Health potion" << endl <<
				"2. Chain mail armour" << endl <<
				"3. Strength potion" << endl;
	}

private:
	int health = 150;
};

class Orc : public Character
{
public:
	void spellList() 
	{
		cout << "1. Fireball" << endl <<
				"2. Wrath" << endl <<
				"3. Ragefire" << endl <<
				"4. Ignite" << endl <<
				"5. Pyroblast" << endl;
	}
	void fireball() { cout << "Orc used [FIREBALL]" << endl; orcMovePower = 1;}
	void wrath() { cout << "Orc used [WRATH]" << endl; orcMovePower = 1; }
	void ragefire() { cout << "Orc used [RAGEFIRE]" << endl; orcMovePower = 3; }
	void ignite() { cout << "Orc used [IGNITE]" << endl; orcMovePower = 2; }
	void pyroblast() { cout << "Orc used [PYROBLAST]" << endl; orcMovePower = 3; }
	void meleeList()
	{
		cout << "1. Whirlwind" << endl <<
				"2. Charge" << endl <<
				"3. Raging blow" << endl <<
				"4. Execute" << endl <<
				"5. Bloodthrist" << endl <<
				"6. Furious slash" << endl <<
				"7. Massacre" << endl;

	}
	void whirlwind() { cout << "Orc used [WHIRLWIND]" << endl; orcMovePower = 3; }
	void charge() { cout << "Orc used [CHARGE]" << endl; orcMovePower = 2; }
	void ragingblow() { cout << "Orc used [RAGNG BLOW]" << endl; orcMovePower = 1; }
	void execute() { cout << "Orc used [EXECUTE]" << endl; orcMovePower = 2; }
	void bloodthrist() { cout << "Orc used [BLOODTHIRST]" << endl; orcMovePower = 2; }
	void furiousslash() { cout << "Orc used [FURIOUS SLASH]" << endl; orcMovePower = 1; }
	void massacre() { cout << "Orc used [MASSACRE]" << endl; orcMovePower = 3; }
	void defendList()
	{
		cout << "1. Shield block" << endl <<
				"2. Ignore pain" << endl <<
				"3. Intercept" << endl;
	}
	void shieldblock() { cout << "Orc used [SHIELDBLOCK]" << endl; orcMovePower = 2; }
	void ignorepain() { cout << "Orc used [IGNORE PAIN]" << endl; orcMovePower = 1; }
	void intercept() { cout << "Orc used [INTERCEPT]" << endl; orcMovePower = 3; }
	int getOrcMovePower() { return orcMovePower; }

private:
	int orcMovePower = 0;
};

class Troll : public Character
{
public:
	void spellList()
	{
		cout << "1. Starsurge" << endl <<
				"2. Solar wrath" << endl <<
				"3. Moonfire" << endl <<
				"4. Sunfire" << endl <<
				"5. Lunar strike" << endl;
	}
	void starsurge() { cout << "Troll used [STARSURGE]" << endl; trollMovePower = 2; }
	void solarwrath() { cout << "Troll used [SOLAR WRATH]" << endl; trollMovePower = 1; }
	void moonfire() { cout << "Troll used [MOONFIRE]" << endl; trollMovePower = 3; }
	void sunfire() { cout << "Troll used [SUNFIRE]" << endl; trollMovePower = 2; }
	void lunarstrike() { cout << "Troll used [LUNAR STRIKE]" << endl; trollMovePower = 3;}
	void meleeList()
	{
		cout << "1. Berserk" << endl <<
				"2. Rip" << endl <<
				"3. Rake" << endl <<
				"4. Skull bash" << endl <<
				"5. Shred" << endl <<
				"6. Swipe" << endl <<
				"7. Sabretooth" << endl;

	}
	void berserk() { cout << "Troll used [WHIRLWIND]" << endl; trollMovePower = 1; }
	void rip() { cout << "Troll used [RIP]" << endl; trollMovePower = 2; }
	void rake() { cout << "Troll used [RAKE]" << endl; trollMovePower = 1; }
	void skullbash() { cout << "Troll used [SKULL BASH]" << endl; trollMovePower = 3; }
	void shred() { cout << "Troll used [SHRED]" << endl; trollMovePower = 1; }
	void swipe() { cout << "Troll used [SWIPE]" << endl; trollMovePower = 3; }
	void sabretooth() { cout << "Troll used [SABRETOOTH]" << endl; trollMovePower = 2; }
	void defendList()
	{
		cout << "1. Swiftmend" << endl <<
				"2. Barkskin" << endl <<
				"3. Dash" << endl;
	}
	void swiftmend() { cout << "Troll used [SWIFTMEND]" << endl; trollMovePower = 2; }
	void barkskin() { cout << "Troll used [BARKSKIN]" << endl; trollMovePower = 3; }
	void dash() { cout << "Troll used [DASH]" << endl; trollMovePower = 1; }
	int getTrollMovePower() { return trollMovePower; }

private:
	int trollMovePower = 0;
};

struct LootTable
{
	// variables for the shop in game
	int trollGold = 25;
	int orcGold = 25;
	int healthPot = 5;
	int armour = 15;
	int strengthPot = 10;
	bool orcHealthPotBool = false;
	bool orcArmourBool = false;
	bool orcStrengthPotBool = false;
	bool trollHealthPotBool = false;
	bool trollArmourBool = false;
	bool trollStrengthPotBool = false;
	bool healthUsed = false;
	bool strengthUsed = false;
	bool orcArmourUsed = false;
	bool trollArmourUsed = false;

	void shopEnterOrc() { cout << "Orc! You have 25g, enter the shop before battle to stock up on supplies" << endl; }
	void shopEnterTroll() { cout << "Troll! You have 25g, enter the shop before battle to stock up on supplies" << endl; }
	void shopList()
	{ 
		cout << "1. Health potion: 10g" << endl <<
				"2. Chain mail armour: 25g" << endl <<
				"3. Strength potion: 10g" << endl <<
				"4. EXIT" << endl;
	}
	void healthBought() { cout << "You have purchased the health potion!" << endl; }
	void armourBought() { cout << "You have purchased the chain mail armour!" << endl; }
	void strengthBought() { cout << "You have purchased the strength potion!" << endl; }
};

int selection = 0;
int spellMeleeSelection = 0;
bool gameOver = false;
int itemSelection = 0;

int main()
{
	Orc orc;
	Troll troll;
	LootTable shop;

	
	//Orc shop sequence before battle
	shop.shopEnterOrc();
	while (shop.orcGold > 0)
	{
		shop.shopList();
		cin >> selection;
		switch (selection)
		{
		case 1:
			if (shop.orcGold >= 10 && shop.orcHealthPotBool == false)
			{
				system("cls");
				shop.healthBought();
				shop.orcHealthPotBool = true;
				shop.orcGold = shop.orcGold - 10;
				cout << "Orc gold: " << shop.orcGold << endl;
				break;
			}
			else
			{
				system("cls");
				cout << "Orc gold: " << shop.orcGold << endl;
				cout << "Already have that item or you dont have enough gold" << endl;
			}
			break;
		case 2:
			if (shop.orcGold >= 25 && shop.orcArmourBool == false)
			{
				system("cls");
				shop.armourBought();
				shop.orcArmourBool = true;
				shop.orcGold = shop.orcGold - 25;
				cout << "Orc gold: " << shop.orcGold << endl;
				break;
			}
			else
			{
				system("cls");
				cout << "Orc gold: " << shop.orcGold << endl;
				cout << "Already have that item or you dont have enough gold" << endl;
			}
			break;
		case 3:
			if (shop.orcGold >= 10 && shop.orcStrengthPotBool == false)
			{
				system("cls");
				shop.strengthBought();
				shop.orcStrengthPotBool = true;
				shop.orcGold = shop.orcGold - 10;
				cout << "Orc gold: " << shop.orcGold << endl;
				break;
			}
			else
			{
				system("cls");
				cout << "Orc gold: " << shop.orcGold << endl;
				cout << "Already have that item or you dont have enough gold" << endl;
			}
			break;
		case 4:
			system("cls");
			shop.orcGold = 0;
			break;
		}
	}

		//TROLL SHOP TURN
		system("cls");
		shop.shopEnterTroll();
		while (shop.trollGold > 0)
		{
			shop.shopList();
			cin >> selection;
			switch (selection)
			{
			case 1:
				if (shop.trollGold >= 10 && shop.trollHealthPotBool == false)
				{
					system("cls");
					shop.healthBought();
					shop.trollHealthPotBool = true;
					shop.trollGold = shop.trollGold - 10;
					cout << "Troll gold: " << shop.trollGold << endl;
					break;
				}
				else
				{
					system("cls");
					cout << "Troll gold: " << shop.trollGold << endl;
					cout << "Already have that item or you dont have enough gold" << endl;
				}
				break;
			case 2:
				if (shop.trollGold >= 25 && shop.trollArmourBool == false)
				{
					system("cls");
					shop.armourBought();
					shop.trollArmourBool = true;
					shop.trollGold = shop.trollGold - 25;
					cout << "Troll gold: " << shop.trollGold << endl;
					break;
				}
				else
				{
					system("cls");
					cout << "Troll gold: " << shop.trollGold << endl;
					cout << "Already have that item or you dont have enough gold" << endl;
				}
				break;
			case 3:
				if (shop.trollGold >= 10 && shop.trollStrengthPotBool == false)
				{
					system("cls");
					shop.strengthBought();
					shop.trollStrengthPotBool = true;
					shop.trollGold = shop.trollGold - 10;
					cout << "Troll gold: " << shop.trollGold << endl;
					break;
				}
				else
				{
					system("cls");
					cout << "Troll gold: " << shop.trollGold << endl;
					cout << "Already have that item or you dont have enough gold" << endl;
				}
				break;
			case 4:
				system("cls");
				shop.trollGold = 0;
				break;
			}
		}

		//START OF COMBAT

		while (gameOver == false)
		{
			//resetting the health and strength used bools for new round
			shop.healthUsed = false;
			shop.strengthUsed = false;

			system("cls");
			cout << "Orc! Time to attack!" << endl;
			//ask if player wants to use items this turn
			orc.itemUse();
			cin >> selection;
			system("cls");
			if (selection == 1)
			{
				orc.itemList();
				cin >> itemSelection;
				system("cls");
				//switch to use item that player picked
				switch (itemSelection)
				{
				case 1:
					if (shop.orcHealthPotBool == true)
					{
						cout << "You used the item!" << endl;
						shop.healthUsed = true;
						shop.orcHealthPotBool =false;
						break;
					}
					else
					{
						cout << "You dont have that item!" << endl;
					}
					break;
				case 2:
					if (shop.orcArmourBool == true)
					{
						cout << "You used the item!" << endl;
						shop.orcArmourUsed = true;
						shop.orcArmourBool = false;
						break;
					}
					else
					{
						cout << "You dont have that item!" << endl;
					}
					break;
				case 3:
					if (shop.orcStrengthPotBool == true)
					{
						shop.orcStrengthPotBool = false;
						shop.strengthUsed = true;
						cout << "You used the item!" << endl;
						break;
					}
					else
					{
						cout << "You dont have that item!" << endl;
					}
					break;
				}
			}
			orc.spellOrMelee();
			cin >> selection;
			//switch to ask whats spells or melee the orc would like to use
			switch (selection)
			{
			case 1:
				system("cls");
				orc.spells();
				orc.spellList();
				spellMeleeSelection = 1;
				break;
			case 2:
				system("cls");
				orc.melee();
				orc.meleeList();
				spellMeleeSelection = 2;
				break;
			}
			//output what spell the orc used
			if (spellMeleeSelection == 1)
			{
				cin >> selection;
				switch (selection)
				{
				case 1:
					system("cls");
					orc.fireball();
					break;
				case 2:
					system("cls");
					orc.wrath();
					break;
				case 3:
					system("cls");
					orc.ragefire();
					break;
				case 4:
					system("cls");
					orc.ignite();
					break;
				case 5:
					system("cls");
					orc.pyroblast();
					break;
				}
			}
			//output what melee the orc used
			if (spellMeleeSelection == 2)
			{
				cin >> selection;
				switch (selection)
				{
				case 1:
					system("cls");
					orc.whirlwind();
					break;
				case 2:
					system("cls");
					orc.charge();
					break;
				case 3:
					system("cls");
					orc.ragingblow();
					break;
				case 4:
					system("cls");
					orc.execute();
					break;
				case 5:
					system("cls");
					orc.bloodthrist();
					break;
				case 6:
					system("cls");
					orc.furiousslash();
					break;
				case 7:
					system("cls");
					orc.massacre();
					break;
				}
			}

			system("pause");
			system("cls");

			//trolls turn to defend
			cout << "Troll! Time to defend!" << endl;
			troll.defend();
			troll.defendList();
			cin >> selection;
			switch (selection)
			{
			case 1:
				system("CLS");
				troll.swiftmend();
				break;
			case 2:
				system("CLS");
				troll.barkskin();
				break;
			case 3:
				system("CLS");
				troll.dash();
				break;
			}

			system("pause");
			system("CLS");

			//all possible outcomes of the round including item usages
			if (shop.healthUsed == true)
			{
				cout << "The Orc used a healing potion (+50 health)" << endl;
				orc.setHealth(-50);
			}

			if (orc.getOrcMovePower() > troll.getTrollMovePower() && shop.strengthUsed == false && shop.trollArmourUsed == false)
			{
				cout << "The Orc overpowers the Troll! (Troll takes 50 damage)" << endl;
				troll.setHealth(50);
			}

			if (orc.getOrcMovePower() > troll.getTrollMovePower() && shop.trollArmourUsed == true && shop.strengthUsed == false)
			{
				cout << "The Orc overpowers the Troll, but thanks to the Troll armour he takes no damage! (Troll takes 0 damage)" << endl;
			}

			if (orc.getOrcMovePower() > troll.getTrollMovePower() && shop.strengthUsed == true && shop.trollArmourUsed == true)
			{
				cout << "The Orc overpowers the Troll with his strength potion, but thanks to the Trolls armour he only takes half damage! (Troll takes 50 damage)" << endl;
				troll.setHealth(50);
			}

			if (orc.getOrcMovePower() > troll.getTrollMovePower() && shop.strengthUsed == true && shop.trollArmourUsed == false)
			{
				cout << "The Orc overpowers the Troll and does double damage with his strength potion! (Troll takes 100 damage)" << endl;
				troll.setHealth(100);
			}

			if (troll.getTrollMovePower() >= orc.getOrcMovePower())
			{
				cout << "The Troll manages to hold off the Orcs atttack" << endl;
			}

			cout << "Troll health :" << troll.getHealth() << endl;
			cout << "Orc health :" << orc.getHealth() << endl;

			system("pause");
			system("cls");

			//if a player wins the game output the appropiate message
			if (orc.getHealth() == 0)
			{
				cout << "The Orcs have failed! The Orcs have defeated the Trolls and have taken over the whole Kingdom " << endl;
				gameOver = true;
			}

			if (troll.getHealth() == 0)
			{
				cout << "The Trolls have failed! The Orcs have defeated the Trolls and have taken over the whole Kingdom " << endl;
				gameOver = true;
			}

			system("pause");
			system("cls");

			//NEW TURN / ATTACKER AND DEFENDER SWITCH
			shop.healthUsed = false;
			shop.strengthUsed = false;

			cout << "Troll! Time to attack!" << endl;
			//ask if player wants to use items this round
			troll.itemUse();
			cin >> selection;
			system("cls");
			if (selection == 1)
			{
				troll.itemList();
				cin >> itemSelection;
				system("cls");
				//switch to use item the player wanted
				switch (itemSelection)
				{
				case 1:
					if (shop.trollHealthPotBool == true)
					{
						cout << "You used the item!" << endl;
						shop.healthUsed = true;
						shop.trollHealthPotBool = false;
						break;
					}
					else
					{
						cout << "You dont have that item!" << endl;
					}
					break;
				case 2:
					if (shop.trollArmourBool == true)
					{
						cout << "You used the item!" << endl;
						shop.trollArmourUsed = true;
						shop.trollArmourBool = false;
						break;
					}
					else
					{
						cout << "You dont have that item!" << endl;
					}
					break;
				case 3:
					if (shop.trollStrengthPotBool == true)
					{

						shop.strengthUsed = true;
						shop.trollStrengthPotBool = false;
						break;
					}
					else
					{
						cout << "You dont have that item!" << endl;
					}
					break;
				}
			}
			//ask if troll wants to use melee or spells
			troll.spellOrMelee();
			cin >> selection;

			switch (selection)
			{
			case 1:
				system("cls");
				troll.spells();
				troll.spellList();
				spellMeleeSelection = 1;
				break;
			case 2:
				system("cls");
				troll.melee();
				troll.meleeList();
				spellMeleeSelection = 2;
				break;
			}

			//output what spell is used
			if (spellMeleeSelection == 1)
			{
				cin >> selection;
				switch (selection)
				{
				case 1:
					system("cls");
					troll.starsurge();
					break;
				case 2:
					system("cls");
					troll.solarwrath();
					break;
				case 3:
					system("cls");
					troll.moonfire();
					break;
				case 4:
					system("cls");
					troll.sunfire();
					break;
				case 5:
					system("cls");
					troll.lunarstrike();
					break;
				}
			}

			//output what melee is used
			if (spellMeleeSelection == 2)
			{
				cin >> selection;
				switch (selection)
				{
				case 1:
					system("cls");
					troll.berserk();
					break;
				case 2:
					system("cls");
					troll.rip();
					break;
				case 3:
					system("cls");
					troll.rake();
					break;
				case 4:
					system("cls");
					troll.skullbash();
					break;
				case 5:
					system("cls");
					troll.shred();
					break;
				case 6:
					system("cls");
					troll.swipe();
					break;
				case 7:
					system("cls");
					troll.sabretooth();
					break;
				}
			}

			system("pause");
			system("cls");

			//orcs turn to defend
			cout << "Orc! Time to defend!" << endl;
			orc.defend();
			orc.defendList();
			cin >> selection;
			switch (selection)
			{
			case 1:
				system("CLS");
				orc.shieldblock();
				break;
			case 2:
				system("CLS");
				orc.ignorepain();
				break;
			case 3:
				system("CLS");
				orc.intercept();
				break;
			}

			system("pause");
			system("cls");

			//all possible outcomes of the round including item usages
			if (shop.healthUsed == true)
			{
				cout << "The Troll used a healing potion (+50 health)" << endl;
				troll.setHealth(-50);
			}

			if (troll.getTrollMovePower() > orc.getOrcMovePower() && shop.strengthUsed == false && shop.orcArmourUsed == false)
			{
				cout << "The Troll overpowers the Orc! (Orc takes 50 damage)" << endl;
				orc.setHealth(50);
			}

			if (troll.getTrollMovePower() > orc.getOrcMovePower() && shop.orcArmourUsed == true && shop.strengthUsed == false)
			{
				cout << "The Troll overpowers the Orc, but thanks to the Orcs armour he takes no damage! (Orc takes 0 damage)" << endl;
			}

			if (troll.getTrollMovePower() > orc.getOrcMovePower() && shop.strengthUsed == true && shop.orcArmourUsed == true)
			{
				cout << "The Troll overpowers the Orc with his strength potion, but thanks to the Orcs armour he only takes half damage! (Orc takes 50 damage)" << endl;
				orc.setHealth(50);
			}

			if (troll.getTrollMovePower() > orc.getOrcMovePower() && shop.strengthUsed == true && shop.orcArmourUsed == false)
			{
				cout << "The Troll overpowers the Orc and does double damage with his strength potion! (Orc takes 100 damage)" << endl;
				orc.setHealth(100);
			}

			if (troll.getTrollMovePower() <= orc.getOrcMovePower())
			{
				cout << "The Orc holds off the relentless attack of the Troll" << endl;
			}

			cout << "Troll health :" << troll.getHealth() << endl;
			cout << "Orc health :" << orc.getHealth() << endl;

			system("pause");
			system("cls");

			//if health drops to zero end game appropiatley
			if (orc.getHealth() == 0)
			{
				cout << "The Orcs have failed! The Orcs have defeated the Trolls and have taken over the whole Kingdom " << endl;
				gameOver = true;
			}

			if (troll.getHealth() == 0)
			{
				cout << "The Trolls have failed! The Orcs have defeated the Trolls and have taken over the whole Kingdom " << endl;
				gameOver = true;
			}

			system("pause");
			system("cls");
		}

}
