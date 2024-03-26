#include <iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

class Weapon{
public:
	virtual void ThrowAwayWeapon() {
		cout << "You throwed away your weapon\n";
	}
	virtual void PickWeapon() {
		cout << "You pick up your weapon\n";
	}
};

class Pistol : public Weapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your pistol\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol\n";
	}
};

class CZ75Auto : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your CZ75-Auto\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your CZ75-Auto\n";
	}
};

class DesertEagle : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Desert Eagle\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Desert Eagle\n";
	}
};

class DualBerettas : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Dual Berettas\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Dual Berettas\n";
	}
};

class FiveSeven : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Five-SeveN\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Five-SeveN\n";
	}
};

class Glock18 : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Glock-18\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Glock-18\n";
	}
};

class P2000 : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your P2000\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your P2000\n";
	}
};

class P250 : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your P250\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your P250\n";
	}
};

class R8Revolver : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Revolver R8\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Revolver R8\n";
	}
};

class Tec9 : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Tec-9\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Tec-9\n";
	}
};

class UspS : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your USP-S\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your USP-S\n";
	}
};

class PistolsMachineGun : public Pistol {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your pistol machine gun\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol machine gun\n";
	}
};

class Mac10 : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Mac-10\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol Mac-10\n";
	}
};

class Mp9 : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Mp9\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol Mp9\n";
	}
};

class Mp7 : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Mp7\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol Mp7\n";
	}
};

class Mp5Sd : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Mp5Sd\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol Mp5Sd\n";
	}
};

class Ump45 : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your UMP-45\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol UMP-45\n";
	}
};

class P90 : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your P90\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol P90\n";
	}
};

class PP19Bison : public PistolsMachineGun {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your PP-19-Bison\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your pistol PP-19-Bison\n";
	}
};

class Riffle : public Weapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your riffle\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your riffle\n";
	}
};

class AssaultRiffle : public Riffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your assault riffle\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your assault riffle\n";
	}
};

class Ak47 : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your AK-47\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your AK-47\n";
	}
};

class Famas : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your FAMAS\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your FAMAS\n";
	}
};

class GalilAr : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Galil-AR\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Galil-AR\n";
	}
};

class M4A1S : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your M4A1-S\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your M4A1-S\n";
	}
};

class M4A4 : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your M4A4\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your M4A4\n";
	}
};

class Aug : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your AUG\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your AUG\n";
	}
};

class Sg553 : public AssaultRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your SG 553\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your SG 553\n";
	}
};

class SniperRiffle : public Riffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your sniper riffle\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your sniper riffle\n";
	}
};

class Awp : public SniperRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your AWP\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your AWP\n";
	}
};

class Ssg08 : public SniperRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your SSG 08\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your SSG 08\n";
	}
};

class Scar20 : public  SniperRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your SCAR-20\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your SCAR-20\n";
	}
};

class G35G1 : public SniperRiffle {
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your G35G1\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your G35G1\n";
	}
};

class Knife : public Weapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your knife\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your knife\n";
	}
};

class ExplosiveWeapon : public Weapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your explosive weapon\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your explosive weapon\n";
	}
};

class Grenade : public ExplosiveWeapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your grenade\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your grenade\n";
	}
};

class Fragmentation : public Grenade{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your fragmentation grenade\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your fragmentation grenade\n";
	}
};

class Light : public Grenade{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your light grenade\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your light grenade\n";
	}
};

class Smoke : public Grenade{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your smoke grenade\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your smoke grenade\n";
	}
};

class MolotovCocktail : public Grenade{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Molotov Cocktail\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Molotov Cocktail\n";
	}
};

class Decoy : public Grenade{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your decoy grenade\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your decoy grenade\n";
	}
};

class Bomb : public ExplosiveWeapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your bomb\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your bomb\n";
	}
};

class ShotGun : public Weapon{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your shotgun\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your shotgun\n";
	}
};

class Nova : public ShotGun{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Nova\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Nova\n";
	}
};

class Xm1014 : public ShotGun{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Xm1014\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your XM1014\n";
	}
};

class Mag7 : public ShotGun{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your MAG-7\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your MAG-7\n";
	}
};

class SawedOff : public ShotGun{
public:
	virtual void ThrowAwayWeapon() override {
		cout << "You throwed your Sawed-Off\n";
	}
	virtual void PickWeapon() override {
		cout << "You pick up your Sawed-Off\n";
	}
};

void Game(Weapon* weapon) {
	int code = 0;
	while (code != 27)
	{
		code = _getch();
		if (code == 13)
		{
			weapon->PickWeapon();
		}
		else if (code == 32)
		{
			weapon->ThrowAwayWeapon();
		}
	}
	delete weapon;
}
int main()
{
	int code = 0;
	while(code != 101) // кнопка e как exit
	{
		system("cls");
		cout << "\t:Menu:\n";
		cout << "0 - Shotguns\n";
		cout << "1 - Riffles\n";
		cout << "2 - Pistols\n";
		cout << "3 - Knife\n";
		cout << "4 - Granades\n";
		cout << "5 - Bomb\n";	
		cout << "6 - exit\n";
		code = _getch();
		//cout << code << " ";
		system("cls");
		if (code == 54)
			exit(0);
		switch (code)
		{
			case 48:
			{
				cout << "1 - enter\n2 - exit";
				code = _getch();
				switch (code)
				{
					case 49:
					{
						system("cls");
						Game(new ShotGun);
						system("cls");
						cout << "\t:ShotGun:\n";
						cout << "0 - Nova\n";
						cout << "1 - XM1014\n";
						cout << "2 - MAG-7\n";
						cout << "3 - Sawed-Off\n";					

						code = _getch();
						system("cls");
						switch (code)
						{
							case 48:
							{
								Game(new Nova);
								break;
							}
							case 49:
							{
								Game(new Xm1014);
								break;
							}
							case 50:
							{
								Game(new Mag7);
								break;
							}
							case 51:
							{
								Game(new SawedOff);
								break;
							}					
					
						}
					break;
				}
					case 50:
				{
					exit(0);
				}
				}
				break;
			}
			case 49:
			{	
				Game(new Riffle);
				system("cls");
				cout << "\t:Riffle:\n";		
				cout << "0 - Assault Riffle\n";
				cout << "1 - Sniper Riffle\n";
				code = _getch();
				system("cls");
				switch (code)
				{
					case 48:
					{
						Game(new AssaultRiffle);
						Sleep(2000);
						system("cls");
						cout << "1 - enter\n2 - exit";
						code = _getch();
						switch (code)
						{
							case 49:
							{
								system("cls");
								cout << "\t:Assault Riffle:\n";
								cout << "0 - AK-47\n";
								cout << "1 - FAMAS\n";
								cout << "2 - Galil-AR\n";
								cout << "3 - M4A1-S\n";
								cout << "4 - M4A4\n";
								cout << "5 - AUG\n";
								cout << "6 - SG 553\n";
								code = _getch();
								system("cls");
								switch (code)
								{
									case 48:
									{
										Game(new Ak47);
										break;
									}
									case 49:
									{
										Game(new Famas);
										break;
									}
									case 50:
									{
										Game(new GalilAr);
										break;
									}
									case 51:
									{
										Game(new M4A1S);
										break;
									}
									case 52:
									{
										Game(new M4A4);
										break;
									}
									case 53:
									{
										Game(new Aug);
										break;
									}
									case 54:
									{
										Game(new Sg553);
										break;
									}
									
								}								
								break;
							}
							case 50:
							{
								main();
								break;
							}
						}
						
						system("cls");
						break;
					}
					case 49:
					{
						Game(new SniperRiffle);						
						system("cls");
						cout << "1 - enter\n2 - exit";
						code = _getch();
						switch (code)
						{
							case 49:
							{
								system("cls");
								cout << "\t:Sniper Riffle:\n";
								cout << "0 - AWP\n";
								cout << "1 - SSG 08\n";
								cout << "2 - SCAR-20\n";
								cout << "3 - G35G1\n";													
								code = _getch();
								system("cls");
								switch (code)
								{
									case 48:
									{
										Game(new Awp);
										break;
									}
									case 49:
									{
										Game(new Ssg08);
										break;
									}
									case 50:
									{
										Game(new Scar20);
										break;
									}
									case 51:
									{
										Game(new G35G1);
										break;
									}									
								}
								break;
							}
							case 50:
							{
								main();
								break;
							}
						}
						break;
					}
				}
				break;
			}
			case 50:
			{
				cout << "1 - enter\n2 - exit";
				code = _getch();
				switch(code)
				{
					case 49:
					{
						system("cls");
						cout << "1 - Pistols\n";
						cout << "2 - Pistols machine gun\n";
						code = _getch();
						switch (code)
						{
							case 49:
							{
								system("cls");
								Game(new Pistol);								
								system("cls");
								cout << "\t:Pistol:\n";
								cout << "0 - CZ75-Auto\n";
								cout << "1 - Glock-18\n";
								cout << "2 - USP-S\n";
								cout << "3 - P2000\n";
								cout << "4 - Desert Eagle\n";
								cout << "5 - Dual Berettas\n";
								cout << "6 - P250\n";
								cout << "7 - Five-SeveN\n";
								cout << "8 - Tec-9\n";
								cout << "9 - Revolver R8\n";
								code = _getch();
								system("cls");
								switch (code)
								{
									case 48:
									{
										Game(new CZ75Auto);
										break;
									}
									case 49:
									{
										Game(new Glock18);
										break;
									}
									case 50:
									{
										Game(new UspS);
										break;
									}
									case 51:
									{
										Game(new P2000);
										break;
									}
									case 52:
									{
										Game(new DesertEagle);
										break;
									}
									case 53:
									{
										Game(new DualBerettas);
										break;
									}
									case 54:
									{
										Game(new P250);
										break;
									}
									case 55:
									{
										Game(new FiveSeven);
										break;
									}
									case 56:
									{
										Game(new Tec9);
										break;
									}
									case 57:
									{
										Game(new R8Revolver);
										break;
									}
								}								
								break;
							}
							case 50:
							{
								system("cls");									
								Game(new PistolsMachineGun);
								system("cls");
								cout << "\t:Pistol machine gun:\n";
								cout << "0 - MAC- 10\n";
								cout << "1 - MP9\n";
								cout << "2 - MP7\n";
								cout << "3 - MP5SD\n";
								cout << "4 - UMP-45\n";
								cout << "5 - P90\n";
								cout << "6 - PP-19 Bison\n";
								code = _getch();
								system("cls");
								switch (code)
									{
									case 48:
									{
										Game(new Mac10);
										break;
									}
									case 49:
									{
										Game(new Mp9);
										break;
									}
									case 50:
									{
										Game(new Mp7);
										break;
									}
									case 51:
									{
										Game(new Mp5Sd);
										break;
									}
									case 52:
									{
										Game(new Ump45);
										break;
									}
									case 53:
									{
										Game(new P90);
										break;
									}
									case 54:
									{
										Game(new PP19Bison);
										break;
									}
								}									
																							
							break;
							}
						}
					break;
					}
					case 50:
					{
						exit(0);
					}
				}
				break;
			}
			case 51:
			{
				cout << "1 - enter\n2 - exit";
				code = _getch();
				switch (code)
				{
					case 49:
					{
						system("cls");
						//cout << "\t:Knife:\n";
						Game(new Knife);										
						Sleep(2500);
						break;
					}
					case 50:
					{
						exit(0);
					}
				}
				break;
			}
			case 52:
			{
				cout << "1 - enter\n2 - exit";
				code = _getch();
				switch (code)
				{
					case 49:
					{
						system("cls");
						Game(new Grenade);
						Sleep(2000);
						system("cls");
						cout << "\t:Grenade:\n";
						cout << "0 - Light\n";
						cout << "1 - Fragmentation\n";
						cout << "2 - Smoke\n";
						cout << "3 - Molotov Cocktail\n";
						cout << "4 - Decoy\n";
					
						code = _getch();
						system("cls");
						switch (code)
						{
							case 48:
							{
								Game(new Light);
								break;
							}
							case 49:
							{
								Game(new Fragmentation);
								break;
							}
							case 50:
							{
								Game(new Smoke);
								break;
							}	
							case 51:
							{
								Game(new MolotovCocktail);
								break;
							}
							case 52:
							{
								Game(new Decoy);
								break;
							}
						}
						Sleep(2500);
						break;
					}
					case 50:
					{
						exit(0);
					}
				}
				break;
			}
			case 53:
			{
				cout << "1 - enter\n2 - exit";
				code = _getch();
				switch (code)
				{
					case 49:
					{
						system("cls");
						//cout << "\t:Bomb:\n";
						Game(new Bomb);
						Sleep(2500);
						break;
					}
					case 50:
					{
						exit(0);
					}
				}
				break;
			}
		}
		
	}
}

