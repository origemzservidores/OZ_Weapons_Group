class CfgPatches
{
	class IMP_Flashlight_Zenit2u
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
	class IMP_Flashlight_Zenit2u: UniversalLight
	{
		scope=2;
		displayName="Zenit2u";
		descriptionShort="$STR_cfgVehicles_UniversalLight1";
		model="IMPWMOD\Weapons\Attachments\FlashLight\Zenit2u\models\Zenit2u.p3d";
		debug_ItemCategory=3;
		rotationFlags=17;
		reversed=1;
		NeedRis = 1;
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
								"IMPWMOD\Weapons\Attachments\FlashLight\Zenit2u\data\Zenit2u.rvmat"
							}
						},
						
						{
							0.69999999,
							{}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Attachments\FlashLight\Zenit2u\data\Zenit2u.rvmat"
							}
						},
						
						{
							0.30000001,
							{}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Attachments\FlashLight\Zenit2u\data\Zenit2u.rvmat"
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
			"Zenit2u"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Attachments\FlashLight\Zenit2u\data\Zenit2u_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Attachments\FlashLight\Zenit2u\data\Zenit2u.rvmat"
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