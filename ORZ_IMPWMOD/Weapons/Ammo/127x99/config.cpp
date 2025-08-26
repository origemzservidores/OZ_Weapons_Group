class CfgPatches {
	class IMP_Ammo_127x99 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Magazines", "DZ_Weapons_Ammunition", "DZ_Scripts"};
	};
};

class CfgMagazines 
{
    class Ammunition_Base;

	class IMP_Ammo_127x99 : Ammunition_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_12799";
		descriptionShort = "$STR_IMP_127421";
		model = "IMPWMOD\Weapons\Ammo\127x99\models\127x99.p3d";
		iconCartridge = 2;
		weight = 4;
		count = 10;
		itemSize[]={2,3};
		ammo = "IMP_Bullet_127x99";
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"DZ\weapons\ammunition\data\545x39.rvmat"}}, 
						{0.7, {"DZ\weapons\ammunition\data\545x39.rvmat"}}, 
						{0.5, {"DZ\weapons\ammunition\data\545x39_damage.rvmat"}}, 
						{0.3, {"DZ\weapons\ammunition\data\545x39_damage.rvmat"}}, 
						{0.0, {"DZ\weapons\ammunition\data\545x39_destruct.rvmat"}}
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class Box_Base;
	class IMP_AmmoBox_127x99_100Rnd: Box_Base
	{
		scope=2;
		displayName="$STR_IMP_ammobox12799";
		descriptionShort="";
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		itemSize[]={3,2};
		rotationFlags=17;
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\127x99_box_co.paa"};
		weight=185;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class IMP_Ammo_127x99
			{
				value=100;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
	class IMP_AmmoBox_127x99_10Rnd: Box_Base
	{
		scope=2;
		displayName="$STR_IMP_ammobox12799";
		descriptionShort="";
		model="\IMPWMOD\Weapons\Ammo\AmmoBox\AmmoBoxIMP.p3d";
		debug_ItemCategory=5;
		itemSize[]={3,2};
		rotationFlags=17;
		hiddenSelections[] = {"camoground"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Ammo\AmmoBox\127x99_box_co.paa"};
		weight=185;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Ammo\AmmoBox\IMP_box_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class Resources
		{
			class IMP_Ammo_127x99
			{
				value=10;
				variable="quantity";
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class interact
				{
					soundset="ammoboxUnpack_SoundSet";
					id=70;
				};
			};
		};
	};
};
