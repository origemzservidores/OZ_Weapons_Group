class CfgPatches {
	class IMP_Weapons_M24 {
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

class cfgWeapons 
{
	class BoltActionRifle_ExternalMagazine_Base;
	
	class IMP_M24_Base : BoltActionRifle_ExternalMagazine_Base 
	{
		scope = 0;
		displayName = "M24";
		descriptionShort = "$STR_IMP_M24descr";
		model = "IMPWMOD\Weapons\Sniper\M24\models\IMP_M24.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","Suppressor_308","ImprovisedSuppressor"};
		weight = 5400;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {10};
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		HealthDmgMultiply = 1.5;
		// BloodDmgMultiply = 1.5;
		ShockDmgMultiply = 4.0;
		initSpeedMultiplier = 1.5;
		WeaponLength=1.21;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_M24_5Rnd"};
		ironsightsExcludingOptics[] = {"HuntingOptic"};
		ejectType = 1;
		itemSize[] = {10, 3};
		recoilModifier[] = {0.7,0.7,0.7};
		barrelArmor = 900;
		simpleHiddenSelections[]={"hide_barrel"};
		hiddenSelections[]={"camoflage"};
		modes[] = {"Single"};
		
		class Single : Mode_SemiAuto {
			soundSetShot[]= {"M24_Shot_SoundSet","M24_Tail_SoundSet","M24_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M24_silencerHomeMade_SoundSet","M24_silencerHomeMadeTail_SoundSet","M24_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.52;
			recoil = "recoil_sks";
			recoilProne = "recoil_sks_prone";
			dispersion = 0.00012;
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
		
		class OpticsInfo : OpticsInfoRifle 
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\M24\data\m24.rvmat","IMPWMOD\Weapons\Sniper\M24\data\m24_1.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M24\data\m24.rvmat","IMPWMOD\Weapons\Sniper\M24\data\m24_1.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M24\data\m24_damage.rvmat","IMPWMOD\Weapons\Sniper\M24\data\m24_1_damage"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M24\data\m24_damage.rvmat","IMPWMOD\Weapons\Sniper\M24\data\m24_1_damage"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\M24\data\m24_destruct.rvmat","IMPWMOD\Weapons\Sniper\M24\data\m24_1_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class IMP_M24_SWS : IMP_M24_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\M24\data\m24_ca.paa"};
	};

	class IMP_M24_Camo1 : IMP_M24_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\M24\data\m24_camo1_ca.paa"};
	};

	class IMP_M24_Camo2 : IMP_M24_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\M24\data\M24_camo2_ca.paa"};
	};

	class IMP_M24_Camo3 : IMP_M24_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\M24\data\M24_camo3_ca.paa"};
	};
};

class CfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_M24_5Rnd : Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_m24mag";
		descriptionShort = "$STR_IMP_m24magdescr";
		model = "IMPWMOD\Weapons\Sniper\M24\models\IMP_M24_Mag.p3d";
		ammo = "Bullet_308Win";
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		count=5;
		itemSize[] = {1, 2};

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\M24\data\m24_1.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M24\data\m24_1.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M24\data\m24_1_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M24\data\m24_1_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Sniper\M24\data\m24_1_destruct.rvmat"}}
					};
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
	class M24_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M24_closeShot_SoundShader",
			"M24_midShot_SoundShader",
			"M24_distShot_SoundShader"
		};
	};
	class M24_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M24_tailDistant_SoundShader",
			"M24_tailTrees_SoundShader",
			"M24_tailForest_SoundShader",
			"M24_tailMeadows_SoundShader",
			"M24_tailHouses_SoundShader"
		};
	};
	class M24_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M24_tailInterior_SoundShader"
		};
	};
	class M24_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"M24_silencerHomeMadeCloseShot_SoundShader",
			"M24_silencerHomeMadeMidShot_SoundShader",
			"M24_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class M24_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M24_silencerHomeMadeTailTrees_SoundShader",
			"M24_silencerHomeMadeTailForest_SoundShader",
			"M24_silencerHomeMadeTailMeadows_SoundShader",
			"M24_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class M24_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M24_silencerHomeMadeTailInterior_SoundShader"
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
	class M24_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Shot", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Shot", 1}};
		volume=1.5;
	};
	class M24_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Mid", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Mid", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Mid", 1}};
		volume=1.2;
	};
	class M24_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
		volume=0.7;
	};
	class M24_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
		volume=1.5;
	};
	class M24_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
	};
	class M24_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
	};
	class M24_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
	};
	class M24_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
	};
	class M24_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Far", 1}};
	};
	class M24_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
		volume=1.0;
	};
	class M24_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
		volume=0.8;
	};
	class M24_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
		volume=0.5;
	};
	class M24_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
	};
	class M24_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
	};
	class M24_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
	};
	class M24_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
	};
	class M24_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M24\sounds\M24_Supp", 1}};
	};
};