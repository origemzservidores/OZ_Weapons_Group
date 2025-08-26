class CfgPatches
{
	class IMP_Weapons_M98B
	{
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
	class IMP_M98B_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope = 0;
		model = "IMPWMOD\Weapons\Sniper\M98B\models\IMP_M98B.p3d";
		attachments[] = {"weaponWrap","weaponOpticsHunting","Suppressor_338", "HandlesM4"};
		weight = 6120;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,50.0};
		PPDOFProperties[] = {1,0.5,50,180,4,10};
		WeaponLength=1.26;
		initSpeedMultiplier = 1;
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_M98B_10Rnd"};		
		ejectType = 1;
		itemSize[] = {10, 3};
		barrelArmor = 3.0;		
		recoilModifier[] = {1.9,1.9,1.7};
		swayModifier[] = {2.4,2.4,1.4};
		simpleHiddenSelections[] = {"hide_barrel", "HandlesM4"};	
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"M98B_Shot_SoundSet","M98B_Tail_SoundSet","M98B_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"M98B_silencerHomeMade_SoundSet","M98B_silencerHomeMadeTail_SoundSet","M98B_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 0.92;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0006;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_cz527_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 4;
				overheatingDecayInterval = 3;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
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
		class OpticsInfo: OpticsInfoRifle
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
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1.rvmat","IMPWMOD\Weapons\Sniper\M98B\data\m98b_2.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1.rvmat","IMPWMOD\Weapons\Sniper\M98B\data\m98b_2.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1_damage.rvmat","IMPWMOD\Weapons\Sniper\M98B\data\m98b_2_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1_damage.rvmat","IMPWMOD\Weapons\Sniper\M98B\data\m98b_2_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1_destruct.rvmat","IMPWMOD\Weapons\Sniper\M98B\data\m98b_2_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	class IMP_M98B: IMP_M98B_Base
	{
		scope = 2;
		displayName = "Barret M98b";
		descriptionShort = "$STR_IMP_M981";		
	};	
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_M98B_10Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_IMP_M982";
		descriptionShort = "$STR_IMP_M983";
		model = "IMPWMOD\Weapons\Sniper\M98B\models\IMP_M98B_Mag.p3d";
		weight = 350;
		itemSize[] = {2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 10;
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\M98B\data\m98b_1_destruct.rvmat"}}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class MagRifle_fill_in
				{
					soundSet = "MagRifle_fill_in_SoundSet";
					id = 1;
				};
				class MagRifle_fill_loop
				{
					soundSet = "MagRifle_fill_loop_SoundSet";
					id = 2;
				};
				class MagRifle_fill_out
				{
					soundSet = "MagRifle_fill_out_SoundSet";
					id = 3;
				};
				class MagRifle_empty_in
				{
					soundSet = "MagRifle_empty_in_SoundSet";
					id = 4;
				};
				class MagRifle_empty_loop
				{
					soundSet = "MagRifle_empty_loop_SoundSet";
					id = 5;
				};
				class MagRifle_empty_out
				{
					soundSet = "MagRifle_empty_out_SoundSet";
					id = 6;
				};
				class MagPistol_fill_in
				{
					soundSet = "MagPistol_fill_in_SoundSet";
					id = 7;
				};
				class MagPistol_fill_loop
				{
					soundSet = "MagPistol_fill_loop_SoundSet";
					id = 8;
				};
				class MagPistol_fill_out
				{
					soundSet = "MagPistol_fill_out_SoundSet";
					id = 9;
				};
				class MagPistol_empty_in
				{
					soundSet = "MagPistol_empty_in_SoundSet";
					id = 10;
				};
				class MagPistol_empty_loop
				{
					soundSet = "MagPistol_empty_loop_SoundSet";
					id = 11;
				};
				class MagPistol_empty_out
				{
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
	class M98B_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"M98B_closeShot_SoundShader",
			"M98B_midShot_SoundShader",
			"M98B_distShot_SoundShader"
		};
	};
	class M98B_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M98B_tailDistant_SoundShader",
			"M98B_tailTrees_SoundShader",
			"M98B_tailForest_SoundShader",
			"M98B_tailMeadows_SoundShader",
			"M98B_tailHouses_SoundShader"
		};
	};
	class M98B_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M98B_tailInterior_SoundShader"
		};
	};
	class M98B_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"M98B_silencerHomeMadeCloseShot_SoundShader",
			"M98B_silencerHomeMadeMidShot_SoundShader",
			"M98B_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class M98B_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M98B_silencerHomeMadeTailTrees_SoundShader",
			"M98B_silencerHomeMadeTailForest_SoundShader",
			"M98B_silencerHomeMadeTailMeadows_SoundShader",
			"M98B_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class M98B_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"M98B_silencerHomeMadeTailInterior_SoundShader"
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
	class M98B_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Close", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Close", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Close", 1}};
		volume=1.5;
	};
	class M98B_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Mid", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Mid", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Mid", 1}};
		volume=1.2;
	};
	class M98B_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
		volume=0.7;
	};
	class M98B_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
		volume=1.5;
	};
	class M98B_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
	};
	class M98B_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
	};
	class M98B_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
	};
	class M98B_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
	};
	class M98B_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Dist", 1}};
	};
	class M98B_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
		volume=1.0;
	};
	class M98B_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
		volume=0.8;
	};
	class M98B_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}, {"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
		volume=0.5;
	};
	class M98B_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
	};
	class M98B_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
	};
	class M98B_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
	};
	class M98B_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
	};
	class M98B_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\M98B\sounds\M98B_Supp", 1}};
	};
};