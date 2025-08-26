class CfgPatches
{
	class IMP_Optic_LongRangeScope20x
	{
		units[] = {"IMP_Optic_LongRangeScope20x"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics",
			"DZ_Scripts"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics;
	
	class IMP_Optic_LongRangeScope20x_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "LongRange 20x";
		descriptionShort = "$STR_IMP_20xzoom";
		model = "IMPWMOD\Weapons\Optics\LongRangeScope\models\LongRangeScope.p3d";
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 700;
		itemSize[] = {3,2};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "IMPWMOD\Weapons\Optics\LongRangeScope\models\LongRangeScope20x_Reticle.p3d";
			preloadOpticType = "LongRangeScope20x_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/12";
			opticsZoomMax = "0.3926/20";
			opticsZoomInit = "0.3926/12";
			discretefov[] = {"0.3926/4","0.3926/6","0.3926/8","0.3926/12","0.3926/16","0.3926/20"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0.5,0.5,0.43,0.1};
			PPLensProperties[] = {0.3,0.15,0,0};
			PPBlurProperties = 0.3;
		};
		class AnimationSources
		{
			class hide
			{
				source = "user";
				animPeriod = 0.01;
				initPhase = 0;
			};
		};
	};
	class LongRangeScope20x_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\LongRangeScope\models\LongRangeScope20x_Reticle.p3d";
	};
	class IMP_Optic_LongRangeScope20x: IMP_Optic_LongRangeScope20x_Base
	{
		scope = 2;
	};
};
