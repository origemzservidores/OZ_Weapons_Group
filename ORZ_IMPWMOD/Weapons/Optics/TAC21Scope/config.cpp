class CfgPatches
{
	class IMP_Optic_TAC21
	{
		units[] = {"IMP_Optic_TAC21"};
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
	
	class IMP_Optic_TAC21_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "TAC21 Scope";
		descriptionShort = "$STR_IMP_8xzoom";
		model = "IMPWMOD\Weapons\Optics\TAC21Scope\models\TAC21_Scope.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {3,1};
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
			modelOptics = "IMPWMOD\Weapons\Optics\TAC21Scope\models\TAC21_Optic_reticle.p3d";
			preloadOpticType = "TAC_21_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/4";
			opticsZoomMax = "0.3926/8";
			opticsZoomInit = "0.3926/4";
			discretefov[] = {"0.3926/4","0.3926/6","0.3926/8"};
			discreteInitIndex = 0;
			distanceZoomMin = 150;
			distanceZoomMax = 600;
			discreteDistance[] = {150,200,300,400,500,600};
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
	class TAC_21_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\TAC21Scope\models\TAC21_Optic_reticle.p3d";
	};
	class IMP_Optic_TAC21: IMP_Optic_TAC21_Base
	{
		scope = 2;
	};
};
