class CfgPatches
{
	class IMP_Optic_PKAS
	{
		units[]={"IMP_Optic_PKAS"};
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
	
	class IMP_Optic_PKAS_Base: ItemOptics
	{
		scope=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName="$STR_IMP_PKAS";
		descriptionShort="$STR_IMP_3xzoom";
		model="\IMPWMOD\Weapons\Optics\PKAS\models\PKAS.p3d";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
		animClass="Binoculars";
		simulation="itemoptics";
		inventorySlot[]=
		{
			"weaponOpticsAK"
		};
		selectionFireAnim="zasleh";
		memoryPointCamera="eyeScope";
		cameraDir="cameraDir";
		rotationFlags=17;
		reversed=0;
		weight=250;
		itemSize[]={2,2};
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		hiddenSelections[]=
		{
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\attachments\optics\data\collimdot_red_ca.paa"
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
			opticsPPEffects[]=
			{
				"OpticsCHAbera3",
				"OpticsBlur1"
			};
			opticSightTexture="dz\weapons\attachments\optics\data\collimdot_red_ca.paa";
			opticsZoomMin = 0.3926/3;
			opticsZoomMax = 0.3926/3;
			opticsZoomInit = 0.3926/3;
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
	
	class IMP_Optic_PKAS: IMP_Optic_PKAS_Base
	{
		scope = 2;
		hiddenSelections[]=
		{
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
};