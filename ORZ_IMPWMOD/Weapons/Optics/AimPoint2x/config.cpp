class CfgPatches
{
	class IMP_Optic_AimPoint
	{
		units[]={"IMP_Optic_AimPoint"};
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
	
	class IMP_Optic_AimPoint_Base: ItemOptics
	{
		scope=0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName="AimPoint";
		descriptionShort="$STR_IMP_2xzoom";
		model="\IMPWMOD\Weapons\Optics\AimPoint2x\models\AimPoint.p3d";
		animClass="Binoculars";
		simulation="itemoptics";
		debug_ItemCategory=3;
		attachments[]=
		{
			"BatteryD"
		};
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
			"reddot"
		};
		hiddenSelectionsTextures[]=
		{
			""
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
			opticSightTexture="IMPWMOD\Weapons\Optics\AimPoint2x\data\Reticle.paa";
			opticsZoomMin = 0.3926/2;
			opticsZoomMax = 0.3926/2;
			opticsZoomInit = 0.3926/2;
			distanceZoomMin = 25;
			distanceZoomMax = 400;
			discreteDistance[]={25,50,100,200,300,400};
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
	
	class IMP_Optic_AimPoint: IMP_Optic_AimPoint_Base
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