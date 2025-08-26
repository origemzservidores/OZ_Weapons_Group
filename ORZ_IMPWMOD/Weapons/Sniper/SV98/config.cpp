class CfgPatches
{
	class IMP_Weapons_SV98
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
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
	class IMP_SV98_Base: BoltActionRifle_ExternalMagazine_Base
	{
		scope=0;
		animName="cz527";
		weight=5400;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={10};
		distanceZoomMin=100;
		distanceZoomMax=100;
		PPDOFProperties[] = {1,0.5,50,160,4,10};
		initSpeedMultiplier = 1;
		WeaponLength=1.33;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"IMP_Ammo_338LM"
		};
		magazines[]=
		{
			"IMP_Mag_SV98_5Rnd"
		};
		magazineSwitchTime=0.38;
		barrelArmor=900;
		ejectType=0;
		recoilModifier[]={1,1,1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camoflage"
		};
		modes[]=
		{
			"Single"
		};
		class Single: Mode_SemiAuto
		{
			soundSetShot[]= {"SV98_Shot_SoundSet","SV98_Tail_SoundSet","SV98_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"SV98_silencerHomeMade_SoundSet","SV98_silencerHomeMadeTail_SoundSet","SV98_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=1;
			recoil="recoil_cz527";
			recoilProne="recoil_cz527_prone";
			dispersion=0.001;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_cz527_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=1;
				maxOverheatingValue=4;
				overheatingDecayInterval=3;
				class BarrelSmoke
				{
					overrideParticle="smoking_barrel_small";
				};
			};
			class OnBulletCasingEject
			{
				class ChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 1000;
		};
	};
	
	class IMP_SV98: IMP_SV98_Base
	{
		scope=2;
		displayName="SV-98";
		descriptionShort="$STR_IMP_SV98descr";
		model="IMPWMOD\Weapons\Sniper\SV98\models\IMP_SV98.p3d";
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\SV98\data\sv98_co.paa"};
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsHunting",
			"Suppressor_338"
		};
		itemSize[] = {10, 3};
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_SV98_5Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_SV98mag";
		descriptionShort="$STR_IMP_3385am";
		model="IMPWMOD\Weapons\Sniper\SV98\models\IMP_Mag_SV98_5Rnd.p3d";
		weight=90;
		itemSize[]={2,2};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count=5;
		ammo="IMP_Bullet_338LM";
		ammoItems[]={"IMP_Ammo_338LM"};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Sniper\SV98\data\sv98_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\SV98\data\SV98.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98_damage.rvmat"}},
						{0,{"IMPWMOD\Weapons\Sniper\SV98\data\SV98_destruct.rvmat"}}
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
	class SV98_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"SV98_closeShot_SoundShader",
			"SV98_midShot_SoundShader",
			"SV98_distShot_SoundShader"
		};
	};
	class SV98_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SV98_tailDistant_SoundShader",
			"SV98_tailTrees_SoundShader",
			"SV98_tailForest_SoundShader",
			"SV98_tailMeadows_SoundShader",
			"SV98_tailHouses_SoundShader"
		};
	};
	class SV98_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SV98_tailInterior_SoundShader"
		};
	};
	class SV98_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"SV98_silencerHomeMadeCloseShot_SoundShader",
			"SV98_silencerHomeMadeMidShot_SoundShader",
			"SV98_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class SV98_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SV98_silencerHomeMadeTailTrees_SoundShader",
			"SV98_silencerHomeMadeTailForest_SoundShader",
			"SV98_silencerHomeMadeTailMeadows_SoundShader",
			"SV98_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class SV98_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"SV98_silencerHomeMadeTailInterior_SoundShader"
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
	class SV98_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
		volume=1.5;
	};
	class SV98_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
		volume=1.2;
	};
	class SV98_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
		volume=0.7;
	};
	class SV98_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
		volume=1.5;
	};
	class SV98_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
	};
	class SV98_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
	};
	class SV98_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
	};
	class SV98_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
	};
	class SV98_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot", 1}};
	};
	class SV98_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
		volume=1.0;
	};
	class SV98_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
		volume=0.8;
	};
	class SV98_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
		volume=0.5;
	};
	class SV98_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
	};
	class SV98_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
	};
	class SV98_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
	};
	class SV98_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
	};
	class SV98_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\SV98\sounds\SV98_Shot_Supp", 1}};
	};
};