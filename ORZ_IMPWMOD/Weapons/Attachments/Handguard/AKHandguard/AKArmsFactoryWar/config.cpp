class CfgPatches
{
	class IMP_Weapons_Hndgrd_AKArmsFactoryWar
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Weapons_Supports", "DZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class IMP_Hndgrd_AK_AKArmsFactoryWar: Inventory_Base
	{
		scope=2;
		displayName="ArmsFactoryWar АК";
		descriptionShort="$STR_IMP_HndgrdDesrc";
		model="IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\models\AKArmsFactoryWar.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponHandguardAK"
		};
		weight=363;
		itemSize[]={3,1};
		hasRailFunctionality = 0;
		recoilModifier[]={1, 1, 1};
		swayModifier[]={0.9,0.9,1};
		hiddenSelections[]=
		{
			"AKArmsFactoryWar"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\data\AKArmsFactoryWar_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\data\AKArmsFactoryWar.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\data\AKArmsFactoryWar.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\data\AKArmsFactoryWar.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\data\AKArmsFactoryWar.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Handguard\AKHandguard\AKArmsFactoryWar\data\AKArmsFactoryWar.rvmat"
							}
						}
					};
				};
			};
		};
		isMeleeWeapon=1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeLightBlunt";
				range=1;
			};
			class Heavy
			{
				ammo="MeleeLightBlunt_Heavy";
				range=1;
			};
			class Sprint
			{
				ammo="MeleeLightBlunt_Heavy";
				range=2.8;
			};
		};
	};
};