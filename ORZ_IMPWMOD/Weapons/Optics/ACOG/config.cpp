class CfgPatches
{
	class IMP_Optic_ACOG
	{
		units[]={"IMP_Optic_ACOG"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics",
			"DZ_Scripts"
		};
	};
};
class cfgVehicles {
	class ItemOptics;
	
	class IMP_Optic_ACOG_Base: ItemOptics
	{
		scope=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName="ACOG";
		descriptionShort="$STR_IMP_4xzoom";
		model="\IMPWMOD\Weapons\Optics\ACOG\models\IMP_ACOG.p3d";
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,1};
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelections[]=
		{
			"reddot",
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"IMPWMOD\Weapons\Optics\ACOG\data\IMP_ACOG_ca.paa"
		};
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 50;
					healthLevels[] = {{1.0, {""}}, {0.7, {}}, {0.5, {""}}, {0.3, {}}, {0.0, {""}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=1;
			opticsPPEffects[]={};
			opticSightTexture="dz\weapons\attachments\optics\data\reticle_acog_ca.paa";
			opticsZoomMin = 0.3926/4;
			opticsZoomMax = 0.3926/4;
			opticsZoomInit = 0.3926/4;
			distanceZoomMin = 100;
			distanceZoomMax = 600;
			discreteDistance[] = {100, 200, 300, 400, 500, 600};
			discreteDistanceInitIndex=0;
			PPMaskProperties[]={0.5,0.5,0.40000001,0.050000001};
			PPLensProperties[]={1,0.15000001,0,0};
			PPBlurProperties=0.2;
		};
		class EnergyManager
		{
			hasIcon=1;
			energyUsagePerSecond=0.02;
			plugType=1;
			attachmentAction=1;
		};
	};
	
	class IMP_Optic_ACOG: IMP_Optic_ACOG_Base
	{
		scope = 2;
		hiddenSelections[]=
		{
			"reddot",
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"IMPWMOD\Weapons\Optics\ACOG\data\IMP_ACOG_ca.paa"
		};
	};
};