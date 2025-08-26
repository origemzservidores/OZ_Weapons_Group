	class CfgPatches {
	class IMP_Weapons_MK18 {
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
	class Rifle_Base;
	class IMP_MK18_Base: Rifle_Base
	{
		scope = 0;
		displayName = "$STR_IMP_MK18";
		descriptionShort = "$STR_IMP_MK182";
		model = "IMPWMOD\Weapons\Sniper\MK18\models\MK18.p3d";
		weight = 2900;
		attachments[] = 
		{
			"weaponOpticsHunting",
			"grip1", 
			"weaponWrap", 
			"weaponButtstockM4",
			"Suppressor_338",
			"weaponFlashlight",
			"weaponBipod",
			"HandlesM4"
		};
		absorbency = 0.1;
		repairableWithKits[] = {5, 1};
		repairCosts[] = {30, 25};
		initSpeedMultiplier = 1;
		WeaponLength=1;
		discreteDistanceInitIndex = 0;
		modelOptics = "-";
		recoilModifier[] = {0.8,0.8,1};
		swayModifier[]={0.8,0.8,1};
		PPDOFProperties[] = {1, 0.5, 20, 170, 4, 10};
		ironsightsExcludingOptics[] = {"BUISOptic", "M68Optic", "M4_T3NRDSOptic", "ReflexOptic", "M4_CarryHandleOptic", "M4_T3NRDSOptic", "ReflexOptic", "ACOGOptic", "HuntingOptic", "LongrangeOptic", "sniperOptic"};
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_338LM"};
		magazines[] = {"IMP_Mag_MK18_5Rnd"};
		magazineSwitchTime=0.44999999;
		barrelArmor = 3000;
		ejectType = 1;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\MK18\data\MK18_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\MK18\data\MK18.rvmat"};
		simpleHiddenSelections[] = {"HandlesM4"};
		modes[] = {"SemiAuto", "FullAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[]= {"MK18_Shot_SoundSet","MK18_Tail_SoundSet","MK18_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MK18_silencerHomeMade_SoundSet","MK18_silencerHomeMadeTail_SoundSet","MK18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.12;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto {
			soundSetShot[]= {"MK18_Shot_SoundSet","MK18_Tail_SoundSet","MK18_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"MK18_silencerHomeMade_SoundSet","MK18_silencerHomeMadeTail_SoundSet","MK18_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime=0.097999997;
			recoil="recoil_fal";
			recoilProne="recoil_fal_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=100;
			type="shot";
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
					overrideParticle="weapon_shot_ump45_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
				};
				class MuzzleFlashStar
				{
					overrideParticle="weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed=1;
					overrideDirectionVector[]={0,45,0};
					positionOffset[]={0.0099999998,0,0};
				};
				class ChamberSmokeBurst
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=60;
				shotsToStartOverheating=25;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.40000001};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.40000001,0.89999998};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[]={0.2,0,0};
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.89999998,1};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.2,0,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
				class OpenChamberSmoke
				{
					onlyIfBoltIsOpen=1;
					overrideParticle="smoking_barrel_small";
					overridePoint="Nabojnicestart";
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_MK18 : IMP_MK18_Base 
	{
		scope = 2;
		itemSize[] = {10, 3};
	};
};
	
class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_MK18_5Rnd : Magazine_Base 
	{
		scope = 2;
		displayName = "$STR_IMP_MK183";
		descriptionShort = "$STR_IMP_MK184";
		model = "IMPWMOD\Weapons\Sniper\MK18\models\MK18Mag.p3d";
		weight = 90;
		itemSize[] = {2, 2};
		count = 5;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "IMP_Bullet_338LM";
		ammoItems[] = {"IMP_Ammo_338LM"};
		tracersEvery = 0;
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag_co.paa"};
		hiddenSelectionsMaterials[]={"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag.rvmat"};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\MK18\data\MK18_Mag_destruct.rvmat"}}
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


class CfgNonAIVehicles {
	class ProxyAttachment;
	class ProxyMK18Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Sniper\MK18\models\MK18Mag.p3d";
	};
};
class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class MK18_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MK18_closeShot_SoundShader",
			"MK18_midShot_SoundShader",
			"MK18_distShot_SoundShader"
		};
	};
	class MK18_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MK18_tailDistant_SoundShader",
			"MK18_tailTrees_SoundShader",
			"MK18_tailForest_SoundShader",
			"MK18_tailMeadows_SoundShader",
			"MK18_tailHouses_SoundShader"
		};
	};
	class MK18_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MK18_tailInterior_SoundShader"
		};
	};
	class MK18_silencerHomeMade_SoundSet: Rifle_silencerHomemade_Base_SoundSet
	{
		soundShaders[]=
		{
			"MK18_silencerHomeMadeCloseShot_SoundShader",
			"MK18_silencerHomeMadeMidShot_SoundShader",
			"MK18_silencerHomeMadeDistShot_SoundShader"
		};
	};
	class MK18_silencerHomeMadeTail_SoundSet: Rifle_silencerHomemadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MK18_silencerHomeMadeTailTrees_SoundShader",
			"MK18_silencerHomeMadeTailForest_SoundShader",
			"MK18_silencerHomeMadeTailMeadows_SoundShader",
			"MK18_silencerHomeMadeTailHouses_SoundShader"
		};
	};
	class MK18_silencerInteriorHomeMadeTail_SoundSet: Rifle_silencerInteriorHomeMadeTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MK18_silencerHomeMadeTailInterior_SoundShader"
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
	class MK18_closeShot_SoundShader: base_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
		volume=1.5;
	};
	class MK18_midShot_SoundShader: base_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
		volume=1.2;
	};
	class MK18_distShot_SoundShader: base_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
		volume=0.7;
	};
	class MK18_tailDistant_SoundShader: base_tailDistant_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
		volume=1.5;
	};
	class MK18_tailForest_SoundShader: base_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
	};
	class MK18_tailHouses_SoundShader: base_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
	};
	class MK18_tailMeadows_SoundShader: base_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
	};
	class MK18_tailTrees_SoundShader: base_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
	};
	class MK18_tailInterior_SoundShader: base_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot", 1}};
	};
	class MK18_silencerHomeMadeCloseShot_SoundShader: base_HomeSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
		volume=1.0;
	};
	class MK18_silencerHomeMadeMidShot_SoundShader: base_HomeSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
		volume=0.8;
	};
	class MK18_silencerHomeMadeDistShot_SoundShader: base_HomeSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}, {"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
		volume=0.5;
	};
	class MK18_silencerHomeMadeTailForest_SoundShader: base_HomeSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
	};
	class MK18_silencerHomeMadeTailHouses_SoundShader: base_HomeSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
	};
	class MK18_silencerHomeMadeTailMeadows_SoundShader: base_HomeSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
	};
	class MK18_silencerHomeMadeTailTrees_SoundShader: base_HomeSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
	};
	class MK18_silencerHomeMadeTailInterior_SoundShader: base_HomeSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Sniper\MK18\sounds\MK18_Shot_Supp", 1}};
	};
};