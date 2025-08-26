class CfgPatches 
{
	class IMP_Weapons_PKM 
	{
		units[] = {};
		weapons[] = 
		{
			"IMP_PKM"
		};
		requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Magazines",
			"DZ_Sounds_Effects",
			"DZ_Scripts"
		};
		magazines[]=
		{
			"IMP_Mag_PKM_150Rnd"
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
	
	class IMP_PKM_Base : Rifle_Base {
		scope = 0;
		displayName = "$STR_IMP_PKMname";
		descriptionShort = "$STR_IMP_PKMname1";
		model = "IMPWMOD\Weapons\Submachine\PKM\models\IMP_PKM.p3d";
		attachments[] = 
		{
			"weaponWrap",
			"weaponMuzzleAK",
			"weaponOpticsAK",
			"Rail",
			"weaponOptics",
			"HandlesAK"
		};
		itemSize[] = {10, 3};
		initSpeedMultiplier = 1;
		weight = 18200;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		WeaponLength = 1.22;
		magazineSwitchTime = 0.4;
		barrelArmor = 8.5;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_762x39", "Ammo_762x39Tracer"};
		magazines[] = {"IMP_Mag_PKM_150Rnd"};
		ejectType = 1;
		recoilModifier[] = {0.9,0.7,0.7};
		swayModifier[] = {1.5, 1.2, 1.1};
		hiddenSelections[] = {""};
		simpleHiddenSelections[] = {"hide_barrel", "ammobelt", "HandlesAK"};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.144;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto {
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime = 0.134;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1_destruct.rvmat"}}
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
					overrideParticle = "weapon_shot_akm_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
				
				class ChamberSmokeBurst {
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			
			class OnOverheating {
				maxOverheatingValue = 80;
				shotsToStartOverheating = 20;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0, 0.5};
					positionOffset[] = {0.1, 0, 0};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.5, 0.8};
					positionOffset[] = {0.1, 0, 0};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot3 {
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.8, 1};
					positionOffset[] = {0.1, 0, 0};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteamSmall {
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.3, 0, 0};
					onlyWithinRainLimits[] = {0.2, 0.5};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.3, 0, 0};
					onlyWithinRainLimits[] = {0.5, 1};
				};
				
				class OpenChamberSmoke {
					onlyIfBoltIsOpen = 1;
					overrideParticle = "smoking_barrel_small";
					overridePoint = "Nabojnicestart";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
	};
	
	class IMP_PKM : IMP_PKM_Base 
	{
		scope = 2;
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_PKM_150Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_PKMname12";
		descriptionShort = "$STR_IMP_PKMname123";
		model = "IMPWMOD\Weapons\Submachine\PKM\models\IMP_PKM_Mag.p3d";
		weight = 500;
		itemSize[] = {4,3};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count = 150;
		ammo = "Bullet_762x39";
		ammoItems[] = {"Ammo_762x39", "Ammo_762x39Tracer"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {
						{1.0, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1_damage.rvmat"}}, 
						{0.01, {"IMPWMOD\Weapons\Submachine\PKM\data\pkm1_destruct.rvmat"}}
					};
				};
			};
		};
		
		class AnimEvents {
			class SoundWeapon {
				class MagRifle_fill_in {
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				
				class MagRifle_fill_loop {
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				
				class MagRifle_fill_out {
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				
				class MagRifle_empty_in {
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				
				class MagRifle_empty_loop {
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				
				class MagRifle_empty_out {
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				
				class MagPistol_fill_in {
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				
				class MagPistol_fill_loop {
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				
				class MagPistol_fill_out {
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				
				class MagPistol_empty_in {
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				
				class MagPistol_empty_loop {
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				
				class MagPistol_empty_out {
					soundSet = "MagPistol_empty_out_SoundSet";
					id = 12;
				};
			};
		};
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class PKM_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKM_closeShot_SoundShader",
			"PKM_midShot_SoundShader",
			"PKM_distShot_SoundShader"
		};
	};
	class PKM_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKM_tailDistant_SoundShader",
			"PKM_tailTrees_SoundShader",
			"PKM_tailForest_SoundShader",
			"PKM_tailMeadows_SoundShader",
			"PKM_tailHouses_SoundShader"
		};
	};
	class PKM_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKM_tailInterior_SoundShader"
		};
	};
	class PKM_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKM_silencerHomeMadeCloseShot_SoundShader",
			"PKM_silencerHomeMadeMidShot_SoundShader",
			"PKM_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class PKM_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKM_silencerHomeMadeTailTrees_SoundShader",
			"PKM_silencerHomeMadeTailForest_SoundShader",
			"PKM_silencerHomeMadeTailMeadows_SoundShader",
			"PKM_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class PKM_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"PKM_silencerHomeMadeTailInterior_SoundShader"
		};
	};
};
class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	class base_tailDistant_SoundShader;
	class base_tailForest_SoundShader;
	class base_tailHouses_SoundShader;
	class base_tailMeadows_SoundShader;
	class base_tailTrees_SoundShader;
	class base_tailInterior_SoundShader;
	class base_HomeSilenced_closeShot_SoundShader;
	class base_HomeSilenced_midShot_SoundShader;
	class base_HomeSilenced_distShot_SoundShader;
	class base_HomeSilenced_tailForest_SoundShader;
	class base_HomeSilenced_tailHouses_SoundShader;
	class base_HomeSilenced_tailMeadows_SoundShader;
	class base_HomeSilenced_tailTrees_SoundShader;
	class base_HomeSilenced_tailInterior_SoundShader;
	class PKM_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
		volume=0.8;
	};
	class PKM_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
		volume=0.5;
	};
	class PKM_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
		volume=0.3;
	};
	class PKM_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
		volume=0.8;
	};
	class PKM_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
	};
	class PKM_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
	};
	class PKM_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
	};
	class PKM_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
	};
	class PKM_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot", 1}};
	};
	class PKM_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
		volume=0.5;
	};
	class PKM_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
		volume=0.3;
	};
	class PKM_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}, {"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
		volume=0.15;
	};
	class PKM_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
	};
	class PKM_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
	};
	class PKM_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
	};
	class PKM_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
	};
	class PKM_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Submachine\PKM\sounds\PKM_Shot_Supp", 1}};
	};
};