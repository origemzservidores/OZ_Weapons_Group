class CfgPatches {
	class IMP_Weapons_ACR {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Scripts"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons {
	class Rifle_Base;
	
	class IMP_ACR_Base : Rifle_Base {
		scope = 0;
		weight = 2276;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {};
		displayName = "Bushmaster ACR";
		descriptionShort = "$STR_IMP_Bushdescr";
		model = "IMPWMOD\Weapons\Automatic\ACR\models\IMP_ACR.p3d";
		attachments[] = 
		{
			"weaponOptics", 
			"weaponMuzzleM4",
			"weaponWrap",
			"weaponFlashlight",
			"grip1",
			"HandlesM4"
		};
		itemSize[] = {9, 3};
		ironsightsExcludingOptics[] = {"ReflexOptic", "ACOGOptic"};
		WeaponLength = 0.87;
		barrelArmor = 2.5;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45", "Ammo_556x45Tracer"};
		magazines[] = 
		{
			"Mag_STANAG_30Rnd",
			"Mag_STANAGCoupled_30Rnd",
			"Mag_CMAG_10Rnd",
			"Mag_CMAG_20Rnd",
			"Mag_CMAG_30Rnd",
			"Mag_CMAG_40Rnd",
			"Mag_CMAG_10Rnd_Green",
			"Mag_CMAG_20Rnd_Green",
			"Mag_CMAG_30Rnd_Green",
			"Mag_CMAG_40Rnd_Green",
			"Mag_CMAG_10Rnd_Black",
			"Mag_CMAG_20Rnd_Black",
			"Mag_CMAG_30Rnd_Black",
			"Mag_CMAG_40Rnd_Black",
		    "Mag_STANAG_60Rnd", 
			"IMP_Mag_M4_Drum60Rnd", 
			"IMP_Mag_M4_Cmag_100Rnd", 
			"IMP_Mag_M4_Drum_60Rnd", 
			"IMP_Mag_M4_Gen2_30Rnd",
			"IMP_Mag_HK_Polymer_30Rnd", 
			"IMP_Mag_M4_Stanag_30Rnd", 
			"IMP_Mag_M4_Polymer_10Rnd", 
			"IMP_Mag_M4_Polymer_20Rnd", 
			"IMP_Mag_M4_Polymer_30Rnd",
			"IMP_Mag_M4_Polymer_40Rnd", 
			"IMP_Mag_M4_Stanag_100Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {0.9, 0.9, 0.9};
		swayModifier[] = {0.5, 0.5, 0.5};
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down", "HandlesM4"};
		hiddenSelections[] = {"camoflage1", "camoflage2", "camoflage3", "camoflage4"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS.rvmat"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[] = {"ACR_Shot_SoundSet", "ACR_Tail_SoundSet", "ACR_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ACR_silencer_SoundSet", "ACR_silencerTail_SoundSet", "ACR_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};		
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[] = {"ACR_Shot_SoundSet", "ACR_Tail_SoundSet", "ACR_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ACR_silencer_SoundSet", "ACR_silencerTail_SoundSet", "ACR_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.063;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};		
		class NoiseShoot {
			strength = 82;
			type = "shot";
		};		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
		};		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.0, {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS.rvmat"}}, 
						{0.6, {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS.rvmat"}},
						{0.5, {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1_damage.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2_damage.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3_damage.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS.rvmat"}},
						{0.3, {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1_damage.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2_damage.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3_damage.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS.rvmat"}}, 
						{0.0, {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1_destruct.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2_destruct.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3_destruct.rvmat", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS.rvmat"}}
					};
				};
			};
		};
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				
				class ChamberSmokeBurst {
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			
			class OnOverheating {
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0, 0.2};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2, 0.6};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6, 1};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35, 0, 0};
					onlyWithinOverheatLimits[] = {0, 1};
					onlyWithinRainLimits[] = {0.2, 1};
				};
				
				class OpenChamberSmoke {
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			class OnBulletCasingEject 
			{
				class ChamberSmokeRaise 
				{
				overrideParticle = "weapon_shot_chamber_smoke_raise";
				overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	class IMP_ACR : IMP_ACR_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\ACR\data\ACRNew1_co.paa", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew2_co.paa", "IMPWMOD\Weapons\Automatic\ACR\data\ACRNew3_co.paa", "IMPWMOD\Weapons\Automatic\ACR\data\MBUS_co.paa"};
	};
};

class CfgSoundSets 
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class ACR_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"ACR_closeShot_SoundShader",
			"ACR_midShot_SoundShader",
			"ACR_distShot_SoundShader"
		};
	};
	class ACR_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ACR_tailDistant_SoundShader",
			"ACR_tailTrees_SoundShader",
			"ACR_tailForest_SoundShader",
			"ACR_tailMeadows_SoundShader",
			"ACR_tailHouses_SoundShader"
		};
	};
	class ACR_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ACR_tailInterior_SoundShader"
		};
	};
	class ACR_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"ACR_silencerCloseShot_SoundShader",
			"ACR_silencerMidShot_SoundShader",
			"ACR_silencerDistShot_SoundShader"
		};
	};
	class ACR_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ACR_silencerTailTrees_SoundShader",
			"ACR_silencerTailForest_SoundShader",
			"ACR_silencerTailMeadows_SoundShader",
			"ACR_silencerTailHouses_SoundShader"
		};
	};
	class ACR_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"ACR_silencerTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders 
{
	class tailInteriorRifle_SoundShader;
	class tailTreesRifle_SoundShader;
	class tailMeadowsRifle_SoundShader;
	class tailHousesRifle_SoundShader;
	class tailForestRifle_SoundShader;
	class tailDistantRifle_SoundShader;
	class base_Closure_SoundShader;
	class distShotRifle_SoundShader;
	class midShotRifle_SoundShader;
	class closeShotRifle_SoundShader;
	class base_ProfessionalSilenced_closeShot_SoundShader;
	class base_ProfessionalSilenced_midShot_SoundShader;
	class base_ProfessionalSilenced_distShot_SoundShader;
	class base_ProfessionalSilenced_tailForest_SoundShader;
	class base_ProfessionalSilenced_tailHouses_SoundShader;
	class base_ProfessionalSilenced_tailMeadows_SoundShader;
	class base_ProfessionalSilenced_tailTrees_SoundShader;
	class base_ProfessionalSilenced_tailInterior_SoundShader;
	class ACR_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
		volume=0.8;
	};
	class ACR_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
		volume=0.5;
	};
	class ACR_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
		volume=0.3;
	};
	class ACR_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
		volume=0.4;
	};
	class ACR_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
	};
	class ACR_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
	};
	class ACR_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
	};
	class ACR_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
	};
	class ACR_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot", 1}};
	};
	class ACR_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
		volume=0.5;
	};
	class ACR_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
		volume=0.3;
	};
	class ACR_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
		volume=0.15;
	};
	class ACR_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
	};
	class ACR_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
	};
	class ACR_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
	};
	class ACR_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
	};
	class ACR_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\ACR\sounds\ACR_Shot_Supp", 1}};
	};
};