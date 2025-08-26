class CfgPatches
{
	class IMP_Flashlight_ZenitPerst3
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data", "DZ_Weapons_Lights"
		};
	};
};
class cfgVehicles
{
	class UniversalLight;
	class IMP_Flashlight_ZenitPerst3: UniversalLight
	{
		scope=2;
		displayName="ZenitPerst3";
		descriptionShort="$STR_cfgVehicles_UniversalLight1";
		model="IMPWMOD\Weapons\Attachments\FlashLight\ZenitPerst3\models\ZenitPerst3.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		NeedRis = 1;
		reversed=1;
		weight=80;
		itemSize[]={2,1};
		recoilModifier[]={1.1, 1.1, 1};
		swayModifier[]={1.1, 1.1, 1};
		inventorySlot[]=
		{
			"weaponFlashlight",
			"helmetFlashlight"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=70;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Attachments\FlashLight\ZenitPerst3\data\ZenitPerst3.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\FlashLight\ZenitPerst3\data\ZenitPerst3.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Attachments\FlashLight\ZenitPerst3\data\ZenitPerst3.rvmat"
							}
						}
					};
				};
			};
		};
		repairableWithKits[]={7};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"ZenitPerst3"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\FlashLight\ZenitPerst3\data\ZenitPerst3_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\FlashLight\ZenitPerst3\data\ZenitPerst3.rvmat"
		};
		class EnergyManager
		{
			hasIcon=1;
			autoSwitchOffWhenInCargo=1;
			energyUsagePerSecond=0.0099999998;
			plugType=1;
			attachmentAction=1;
			updateInterval=40;
		};
		soundImpactType="plastic";
	};
};