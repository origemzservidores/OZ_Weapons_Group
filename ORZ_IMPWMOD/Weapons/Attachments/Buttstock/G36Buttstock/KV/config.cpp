class CfgPatches
{
	class IMP_Weapons_Supports_G36_Buttstock
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
	class IMP_Bttstk_G36_KV: Inventory_Base
	{
		scope=2;
		displayName="KV";
		descriptionShort="STR_IMP_G36Butt";
		model="IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\models\IMP_G36_KV_Buttstock.p3d";
		rotationFlags=17;
		reversed=0;
		inventorySlot[]=
		{
			"IMP_G36_Buttstock"
		};
		weight=363;
		itemSize[]={3,1};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={1,1,1};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt.rvmat"
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
								"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\data\G36_KV_Butt_destruct.rvmat"
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

class CfgSlots {
	class Slot_IMP_G36_Buttstock {
		name = "IMP_G36_Buttstock";
		displayName = "$STR_IMP_SlotG36Butt";
		modGhostIcon = "set:Slots image:AACHBBttstck";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyIMP_G36_KV_Buttstock: ProxyAttachment
	{
		scope=2;
		inventorySlot="IMP_G36_Buttstock";
		model="IMPWMOD\Weapons\Attachments\Buttstock\G36Buttstock\KV\models\IMP_G36_KV_Buttstock.p3d";
	};
};