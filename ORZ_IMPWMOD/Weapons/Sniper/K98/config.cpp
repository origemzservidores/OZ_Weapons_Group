class CfgPatches
{
	class IMP_Weapons_K98
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
class Mode_Single;
class Mode_FullAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class BoltActionRifle_InnerMagazine_Base;
	class IMP_K98_Base: BoltActionRifle_InnerMagazine_Base
	{
		scope = 0;
		displayName = "$STR_IMP_K98";
		descriptionShort = "$STR_IMP_descrk98";
		animName = "Mosin9130";
		weight = 4000;
		absorbency = 0.0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30.0,25.0};
		PPDOFProperties[] = {};
		itemSize[] = {10, 3};
		DisplayMagazine = 0;
		WeaponLength = 1.113;
		initSpeedMultiplier = 1;
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		chamberableFrom[] = {"IMP_Ammo_792x57"};
		ejectType = 0;
		recoilModifier[] = {1,1,1};
		swayModifier[]={0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130.rvmat"};
		modes[] = {"Single"};
		class Single: Mode_Single
		{
			soundSetShot[]= {"K98_Shot_SoundSet","K98_Tail_SoundSet","K98_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"K98_silencerHomeMade_SoundSet","K98_silencerHomeMadeTail_SoundSet","K98_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle = "weapon_shot_mosin9130_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.03,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 1;
				maxOverheatingValue = 3;
				overheatingDecayInterval = 4;
				class BarrelSmoke
				{
					overrideParticle = "smoking_barrel_small";
				};
				class OpenChamberSmoke
				{
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = {{1.0,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.7,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130.rvmat"}},{0.5,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"}},{0.3,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130_damage.rvmat"}},{0.0,{"DZ\weapons\firearms\mosin9130\Data\mosin_9130_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_K98: IMP_K98_Base
	{
		scope = 2;
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsMosin",
			"suppressorImpro"
		};
		model="IMPWMOD\Weapons\Sniper\K98\models\IMP_K98.p3d";
		hiddenSelections[] = {"camo"};
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class K98_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"K98_closeShot_SoundShader",
			"K98_midShot_SoundShader",
			"K98_distShot_SoundShader"
		};
	};
	class K98_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"K98_tailDistant_SoundShader",
			"K98_tailTrees_SoundShader",
			"K98_tailForest_SoundShader",
			"K98_tailMeadows_SoundShader",
			"K98_tailHouses_SoundShader"
		};
	};
	class K98_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"K98_tailInterior_SoundShader"
		};
	};
	class K98_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"K98_silencerHomeMadeCloseShot_SoundShader",
			"K98_silencerHomeMadeMidShot_SoundShader",
			"K98_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class K98_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"K98_silencerHomeMadeTailTrees_SoundShader",
			"K98_silencerHomeMadeTailForest_SoundShader",
			"K98_silencerHomeMadeTailMeadows_SoundShader",
			"K98_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class K98_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"K98_silencerHomeMadeTailInterior_SoundShader"
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
	class K98_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_close", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_close", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_close", 1}};
		volume=1.5;
	};
	class K98_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_distant", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_distant", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_distant", 1}};
		volume=1.2;
	};
	class K98_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
		volume=0.7;
	};
	class K98_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
		volume=1.5;
	};
	class K98_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
	};
	class K98_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
	};
	class K98_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
	};
	class K98_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
	};
	class K98_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_far", 1}};
	};
	class K98_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
		volume=1.0;
	};
	class K98_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
		volume=0.8;
	};
	class K98_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}, {"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
		volume=0.5;
	};
	class K98_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
	};
	class K98_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
	};
	class K98_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
	};
	class K98_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
	};
	class K98_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\K98\sounds\Kar98_silenced", 1}};
	};
};