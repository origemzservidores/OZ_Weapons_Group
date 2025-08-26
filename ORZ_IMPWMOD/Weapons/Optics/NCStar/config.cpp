class CfgPatches
{
	class IMP_Optic_NCStar
	{
		units[] = {"IMP_Optic_NCStar"};
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
	class ItemOptics;
	class IMP_Optic_NCStar_Base: ItemOptics
	{
		scope = 0;
		repairableWithKits[]={7};
		repairCosts[]={25};
		displayName = "NC-Star";
		descriptionShort = "$STR_IMP_16xzoom";
		model = "IMPWMOD\Weapons\Optics\NCStar\models\NCStar.p3d";
		attachments[] = {};
		hiddenSelections[] = {"reddot","RMR"};
		hiddenSelectionsTextures[] = {"dz\weapons\attachments\optics\data\collimdot_red_ca.paa","IMPWMOD\Weapons\Optics\ACOGRmr\data\rmr.paa"};
		animClass = "Binoculars";
		rotationFlags = 17;
		reversed = 0;
		weight = 1000;
		itemSize[] = {3,1};
		inventorySlot[] = {"sniperOptics","weaponOpticsHunting","weaponOptics"};
		simulation = "itemoptics";
		dispersionModifier = -0.00025;
		dispersionCondition = "true";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		memoryPointCamera = "eyeScope";
		cameraDir = "cameraDir";
		NVOptic = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"DZ\weapons\attachments\data\scope_alpha_clear_ca.paa","IMPWMOD\Weapons\Optics\NCStar\data\NCStar.rvmat"}},{0.7,{}},{0.5,{"DZ\weapons\attachments\data\scope_alpha_damaged_ca.paa","IMPWMOD\Weapons\Optics\NCStar\data\NCStar_damage.rvmat"}},{0.3,{}},{0.01,{"DZ\weapons\attachments\data\scope_alpha_destroyed_ca.paa","IMPWMOD\Weapons\Optics\NCStar\data\NCStar_destruct.rvmat"}}};
				};
			};
		};
		class OpticsInfo
		{
			memoryPointCamera = "eyeScope";
			cameraDir = "cameraDir";
			useModelOptics = 1;
			modelOptics = "\DZ\weapons\attachments\optics\opticview_longrange.p3d";
			preloadOpticType = "Preload2DOptic_1PN51";
			opticsDisablePeripherialVision = 0.67;
			opticSightTexture = "IMPWMOD\Weapons\Optics\ACOGRmr\data\lens.paa";
			opticSightMaterial = "IMPWMOD\Weapons\Optics\LeupoldHAMR\data\Tritium.rvmat";
			opticsFlare = 1;
			opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur1"};
			opticsZoomMin = "0.3926/6";
			opticsZoomMax = "0.3926/16";
			opticsZoomInit = "0.3926/10";
			discretefov[] = {"0.3926/6","0.3926/10","0.3926/12", "0.3926/16"};
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 3;
			PPMaskProperties[] = {0.5,0.5,0.4,0.05};
			PPLensProperties[] = {-1.25,1,0,0};
			PPBlurProperties = 0.75;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera = "eyeIronsights";
			cameraDir = "cameraDirIronsights";
			opticsZoomMin = 0.5236;
			opticsZoomMax = 0.5236;
			opticsZoomInit = 0.5236;
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			PPMaskProperties[] = {0,0,0.5,0.05};
			PPLensProperties[] = {0.5,0.15,0,0};
			PPBlurProperties = 0;
			PPDOFProperties[] = {1,0.1,20,200,4,10};
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
	
	class IMP_Optic_NCStar: IMP_Optic_NCStar_Base
	{
		scope = 2;
	};
};
