class CfgPatches
{
	class IMP_Weapons_Supports_HK417AdjustableBttstck
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
	class IMP_Bttstk_HK417AdjustableBttstck: Inventory_Base
	{
		scope=2;
		displayName="HK417 Adjustable";
		descriptionShort="$STR_IMP_ButtARM4";
		model="IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\models\HK417AdjustableBttstck.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"weaponButtstockM4"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camoflage",
			"camoflage2"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_co.paa",
			"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck.rvmat",
			"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check.rvmat"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck.rvmat",
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck.rvmat",
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_damage.rvmat",
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_damage.rvmat",
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_destruct.rvmat",
								"IMPWMOD\Weapons\Attachments\Buttstock\HKButtstock\HK417AdjustableBttstck\data\HK417AdjustableBttstck_Check.rvmat"
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