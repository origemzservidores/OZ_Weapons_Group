class CfgPatches {
	class IMP_Remington_MSR {
		units[] = {""};
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
	class BoltActionRifle_ExternalMagazine_Base;
	
	class IMP_RemingtonMSR_Base : BoltActionRifle_ExternalMagazine_Base {
		scope = 0;
		displayName = "Remington MSR";
		descriptionShort = "$STR_IMP_MSRDescr";
		model="IMPWMOD\Weapons\Sniper\RemingtonMSR\models\MSR.p3d";
		attachments[] = 
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"Suppressor_338",
			"weaponFlashlight",
			"grip1",
			"weaponBipod"
		};
		weight = 8391;
		absorbency = 0.0;
		repairableWithKits[] = {1};
		repairCosts[] = {30.0, 50.0};
		initSpeedMultiplier = 1;
		PPDOFProperties[] = {1, 0.5, 50, 180, 4, 10};
		WeaponLength=1.31;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_MSR_5Rnd"};
		ejectType = 1;
		itemSize[] = {10, 3};
		barrelArmor = 4.0;
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_Blue_co.paa"
		};
		recoilModifier[] = {2.7, 1.9, 1.9};
		swayModifier[] = {2.25, 2.25, 1.25};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[]= {"MSR_Shot_SoundSet","MSR_Tail_SoundSet","MSR_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MSR_silencerHomeMade_SoundSet","MSR_silencerHomeMadeTail_SoundSet","MSR_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			dispersion = 0.00014;
			magazineSlot = "magazine";
		};
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_winded_smoke";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				
				class BarrelSmoke {
					overrideParticle = "smoking_barrel_small";
				};
			};
			
			class OnBulletCasingEject {
				class ChamberSmokeRaise {
					overrideParticle = "weapon_shot_chamber_smoke_raise";
					overridePoint = "Nabojnicestart";
				};
			};
		};
		
		class OpticsInfo : OpticsInfoRifle {
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class IMP_RemingtonMSR_Blue : IMP_RemingtonMSR_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_Blue_co.paa"
		};
	};
	
	class IMP_RemingtonMSR_Tan : IMP_RemingtonMSR_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_Tan_co.paa"
		};
	};
	
	class IMP_RemingtonMSR_Grey : IMP_RemingtonMSR_Base {
		scope = 2;
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_Grey_co.paa"
		};
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_MSR_5Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_MSRDescr2";
		descriptionShort = "$STR_IMP_3385am";
		model = "IMPWMOD\Weapons\Sniper\RemingtonMSR\models\MSR_Mag.p3d";
		weight = 100;
		itemSize[] = {2, 2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 5;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		hiddenSelections[]=
		{
			"camoflage"
		};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_Blue_co.paa"
		};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 200;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_damage.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_damage.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\data\MSR_destruct.rvmat"}}};
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
	class MSR_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MSR_closeShot_SoundShader",
			"MSR_midShot_SoundShader",
			"MSR_distShot_SoundShader"
		};
	};
	class MSR_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MSR_tailDistant_SoundShader",
			"MSR_tailTrees_SoundShader",
			"MSR_tailForest_SoundShader",
			"MSR_tailMeadows_SoundShader",
			"MSR_tailHouses_SoundShader"
		};
	};
	class MSR_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MSR_tailInterior_SoundShader"
		};
	};
	class MSR_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"MSR_silencerHomeMadeCloseShot_SoundShader",
			"MSR_silencerHomeMadeMidShot_SoundShader",
			"MSR_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class MSR_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MSR_silencerHomeMadeTailTrees_SoundShader",
			"MSR_silencerHomeMadeTailForest_SoundShader",
			"MSR_silencerHomeMadeTailMeadows_SoundShader",
			"MSR_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class MSR_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MSR_silencerHomeMadeTailInterior_SoundShader"
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
	class MSR_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
		volume=1.5;
	};
	class MSR_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
		volume=1.2;
	};
	class MSR_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
		volume=0.7;
	};
	class MSR_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
		volume=1.5;
	};
	class MSR_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
	};
	class MSR_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
	};
	class MSR_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
	};
	class MSR_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
	};
	class MSR_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot", 1}};
	};
	class MSR_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
		volume=1.0;
	};
	class MSR_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
		volume=0.8;
	};
	class MSR_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
		volume=0.5;
	};
	class MSR_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
	};
	class MSR_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
	};
	class MSR_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
	};
	class MSR_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
	};
	class MSR_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\RemingtonMSR\sounds\MSR_Shot_Supp", 1}};
	};
};