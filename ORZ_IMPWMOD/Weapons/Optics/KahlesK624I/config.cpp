class CfgPatches
{
	class IMP_Optic_K624i
	{
		units[] = {"IMP_Optic_K624i"};
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
	
	class IMP_Optic_K624i_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "Kahles 624I";
		descriptionShort = "$STR_IMP_16xzoom";
		model = "IMPWMOD\Weapons\Optics\KahlesK624I\models\K624I.p3d";
		animClass = "Binoculars";
		rotationFlags = 4;
		reversed = 0;
		weight = 700;
		itemSize[] = {4,1};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.0001;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		memoryPointCamera = "eyeScope";
		hiddenSelections[]=
		{
			"camoflage",
			"mount"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Optics\KahlesK624I\data\K624i_ca.paa",
			"IMPWMOD\Weapons\Optics\KahlesK624I\data\Mount_ca.paa"
		};
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
			modelOptics = "IMPWMOD\Weapons\Optics\KahlesK624I\models\K624I_Reticle.p3d";
			preloadOpticType = "K624I_Reticle";
			opticsDisablePeripherialVision = 0.67;
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/8";
			opticsZoomMax = "0.3926/16";
			opticsZoomInit = "0.3926/12";
			discretefov[] = {"0.3926/8","0.3926/12","0.3926/16"};
			discreteInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 800;
			discreteDistance[] = {100,200,300,400,500,600,700,800};
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
	class K624I_Reticle: Inventory_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Optics\KahlesK624I\models\K624I_Reticle.p3d";
	};
	class IMP_Optic_K624i: IMP_Optic_K624i_Base
	{
		scope = 2;
	};
};
