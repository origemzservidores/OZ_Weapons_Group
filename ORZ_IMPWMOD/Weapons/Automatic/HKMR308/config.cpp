class CfgPatches
{
	class IMP_Weapons_HKMR308
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
	class Rifle_Base;
	class IMP_HKMR308_Base : Rifle_Base 
	{
		scope = 0;
		displayName = "HKMR 308";
		descriptionShort = "$STR_IMP_HKMR308descr";
		itemSize[] = {9, 3};
		barrelArmor=3.75;
		weight = 3800;
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {25};
		PPDOFProperties[] = {1, 0.5, 20, 170, 4, 10};
		WeaponLength = 0.67;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		model = "IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_HKMR308.p3d";
		chamberedRound = "";
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = {"IMP_Mag_HKMR308_20Rnd", "IMP_Mag_HKMR308_Tape_40Rnd", "IMP_Mag_HKMR308_Clip_40Rnd"};
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[]={0.5,0.5,0.5};
		hiddenSelections[]={"camoflage"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"};
		attachments[] = {"weaponWrap", "weaponOptics", "weaponFlashlight", "Suppressor_308", "weaponButtstockM4", "grip1", "HandlesM4"};
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down", "HandlesM4"};
		modes[] = {"SemiAuto"};
		
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"HKMR308_Shot_SoundSet", "HKMR308_Tail_SoundSet", "HKMR308_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "HKMR308_silencer_SoundSet", "HKMR308_silencerTail_SoundSet", "HKMR308_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.125;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0007;
			magazineSlot = "magazine";
		};
		
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {25};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 25;
			distanceZoomMax = 25;
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
				
				class MuzzleFlashStar {
					overrideParticle = "weapon_shot_Flame_3D_4star";
					ignoreIfSuppressed = 1;
					overrideDirectionVector[] = {0, 45, 0};
					positionOffset[] = {0.01, 0, 0};
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
					onlyWithinOverheatLimits[] = {0, 0.4};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.4, 0.9};
					onlyWithinRainLimits[] = {0, 0.2};
				};

				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.2, 0, 0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.9, 1};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHotSteam {
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.2, 0, 0};
					onlyWithinOverheatLimits[] = {0, 1};
					onlyWithinRainLimits[] = {0.2, 1};
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

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_destruct.rvmat"}}
					};
				};
			};
		};
	};
	
	class IMP_HKMR308_Black : IMP_HKMR308_Base 
	{
		scope = 2;
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_co.paa"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_HKMR308_20Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_HKMR308Mag";
		descriptionShort="$STR_IMP_G28Mag1";
		model="IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_Mag_HKMR308.p3d";
		weight=400;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={1,3};
		count=20;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_HKMR308_Tape_40Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_HKMR308Mag";
		descriptionShort="$STR_IMP_G28Mag2";
		model="IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_Mag_HKMR308_Tape_40Rnd.p3d";
		weight=800;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={2,3};
		count=40;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_HKMR308_Clip_40Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_HKMR308Mag";
		descriptionShort="$STR_IMP_G28Mag2";
		model="IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_Mag_HKMR308_Clip_40Rnd.p3d";
		weight=800;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={2,3};
		count=40;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HKMR308\data\HKMR308_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;
	
	class ProxyIMP_Mag_HKMR308 : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_Mag_HKMR308.p3d";
	};
	class ProxyIMP_Mag_HKMR308_Clip_40Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_Mag_HKMR308_Clip_40Rnd.p3d";
	};
	class ProxyIMP_Mag_HKMR308_Tape_40Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HKMR308\models\IMP_Mag_HKMR308_Tape_40Rnd.p3d";
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
	class HKMR308_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HKMR308_closeShot_SoundShader",
			"HKMR308_midShot_SoundShader",
			"HKMR308_distShot_SoundShader"
		};
	};
	class HKMR308_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HKMR308_tailDistant_SoundShader",
			"HKMR308_tailTrees_SoundShader",
			"HKMR308_tailForest_SoundShader",
			"HKMR308_tailMeadows_SoundShader",
			"HKMR308_tailHouses_SoundShader"
		};
	};
	class HKMR308_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HKMR308_tailInterior_SoundShader"
		};
	};
	class HKMR308_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HKMR308_silencerCloseShot_SoundShader",
			"HKMR308_silencerMidShot_SoundShader",
			"HKMR308_silencerDistShot_SoundShader"
		};
	};
	class HKMR308_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HKMR308_silencerTailTrees_SoundShader",
			"HKMR308_silencerTailForest_SoundShader",
			"HKMR308_silencerTailMeadows_SoundShader",
			"HKMR308_silencerTailHouses_SoundShader"
		};
	};
	class HKMR308_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HKMR308_silencerTailInterior_SoundShader"
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
	class HKMR308_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
		volume=0.8;
	};
	class HKMR308_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
		volume=0.5;
	};
	class HKMR308_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
		volume=0.3;
	};
	class HKMR308_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
		volume=0.8;
	};
	class HKMR308_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
	};
	class HKMR308_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
	};
	class HKMR308_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
	};
	class HKMR308_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
	};
	class HKMR308_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot", 1}};
	};
	class HKMR308_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
		volume=0.5;
	};
	class HKMR308_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
		volume=0.3;
	};
	class HKMR308_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
		volume=0.15;
	};
	class HKMR308_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
	};
	class HKMR308_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
	};
	class HKMR308_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
	};
	class HKMR308_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
	};
	class HKMR308_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HKMR308\sounds\HKMR308_Shot_Supp", 1}};
	};
};