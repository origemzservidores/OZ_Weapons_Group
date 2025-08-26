class CfgPatches
{
	class IMP_Weapons_HK417
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
	class IMP_HK417_Base: Rifle_Base
	{
		scope = 0;
		weight = 1746;
		absorbency = 0.0;
		repairableWithKits[]={5,1};
		repairCosts[]={30,25};
		hasRailFunctionality = 1;
		initSpeedMultiplier = 1;
		model = "IMPWMOD\Weapons\Automatic\HK417\models\HK417.p3d";
		attachments[] = {"HK417Supp", "weaponOptics", "weaponFlashlight", "weaponWrap", "grip1", "weaponButtstockM4", "weaponBipod", "HandlesM4"};
		itemSize[] = {9, 3};
		PPDOFProperties[] = {};
		ironsightsExcludingOptics[] = {"M4_CarryHandleOptic","BUISOptic","M68Optic","M4_T3NRDSOptic","ReflexOptic","ACOGOptic"};
		WeaponLength = 0.85;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[]={"Ammo_308Win","Ammo_308WinTracer"};
		magazines[] = 
		{
			"IMP_Mag_HK417_10Rnd", 
			"IMP_Mag_HK417_20Rnd"
		};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier[] = {1,1,1};
		swayModifier[]={0.5,0.5,0.5};
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down", "HandlesM4"};
		hiddenSelections[] = {"camoflage1", "camoflage2"};
		modes[] = {"FullAuto", "SemiAuto"};
		class SemiAuto : Mode_SemiAuto {
			soundSetShot[] = {"HK417_Shot_SoundSet", "HK417_Tail_SoundSet", "HK417_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "HK417_silencer_SoundSet", "HK417_silencerTail_SoundSet", "HK417_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.086;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto {
			soundSetShot[] = {"HK417_Shot_SoundSet", "HK417_Tail_SoundSet", "HK417_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "HK417_silencer_SoundSet", "HK417_silencerTail_SoundSet", "HK417_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.086;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.00125;
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
					overrideParticle = "weapon_shot_ump45_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
				};
				class ChamberSmokeBurst
				{
					overrideParticle = "weapon_shot_chamber_smoke";
					overridePoint = "Nabojnicestart";
					overrideDirectionPoint = "Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue = 60;
				shotsToStartOverheating = 7;
				overheatingDecayInterval = 1;
				class SmokingBarrel1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0.0,0.2};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHot1
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2,0.6};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHot3
				{
					positionOffset[] = {0.2,0,0};
					overrideParticle = "smoking_barrel_heavy";
					onlyWithinOverheatLimits[] = {0.6,1};
					onlyWithinIMPinLimits[] = {0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam";
					positionOffset[] = {0.35,0,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinIMPinLimits[] = {0.2,1};
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
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[] = {{1.0,{"impwmod\weapons\automatic\hk417\data\hk417\receiver.rvmat", "impwmod\weapons\automatic\hk417\data\hk417\hk417.rvmat"}},{0.7,{"impwmod\weapons\automatic\hk417\data\hk417\receiver.rvmat", "impwmod\weapons\automatic\hk417\data\hk417\hk417.rvmat"}},{0.5,{"impwmod\weapons\automatic\hk417\data\hk417\receiver_damage.rvmat", "impwmod\weapons\automatic\hk417\data\hk417\hk417_damage.rvmat"}},{0.3,{"impwmod\weapons\automatic\hk417\data\hk417\receiver_damage.rvmat", "impwmod\weapons\automatic\hk417\data\hk417\hk417_damage.rvmat"}},{0.0,{"impwmod\weapons\automatic\hk417\data\hk417\receiver_destruct.rvmat", "impwmod\weapons\automatic\hk417\data\hk417\hk417_destruct.rvmat"}}};
				};
			};
		};
	};
	class IMP_HK417: IMP_HK417_Base
	{
		scope = 2;
		displayName = "HK 417";
		descriptionShort = "$STR_IMP_HK417descr";
		hiddenSelectionsTextures[] = {"impwmod\weapons\automatic\hk417\data\hk417\receiver_co.paa", "impwmod\weapons\automatic\hk417\data\hk417\hk417_co.paa"};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_HK417_10Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_HK417Mag";
		descriptionShort="$STR_IMP_SR25magcap";
		model="IMPWMOD\Weapons\Automatic\HK417\models\Mag_HK417_10Rnd.p3d";
		weight=75;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo = "Bullet_308Win";
		ammoItems[] = {"Ammo_308Win", "Ammo_308WinTracer"};
		itemSize[]={1,2};
		count=10;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]= {
					{1.0,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag10.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag10.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag10_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag10_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag10_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_Mag_HK417_20Rnd : Magazine_Base {
		scope = 2;
		displayName="$STR_IMP_HK417Mag";
		descriptionShort="$STR_IMP_G28Mag1";
		model="IMPWMOD\Weapons\Automatic\HK417\models\Mag_HK417_20Rnd.p3d";
		weight=75;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
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
					{1.0,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag20.rvmat"}},
					{0.7,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag20.rvmat"}},
					{0.5,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag20_damage.rvmat"}},
					{0.3,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag20_damage.rvmat"}},
					{0.0,{"IMPWMOD\Weapons\Automatic\HK417\data\HK417\Mag20_destruct.rvmat"}}
					};
				};
			};
		};
	};
};


class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyMag_HK417_10Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HK417\models\Mag_HK417_10Rnd.p3d";
	};
	
	class ProxyMag_HK417_20Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\HK417\models\Mag_HK417_20Rnd.p3d";
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
	class HK417_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK417_closeShot_SoundShader",
			"HK417_midShot_SoundShader",
			"HK417_distShot_SoundShader"
		};
	};
	class HK417_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK417_tailDistant_SoundShader",
			"HK417_tailTrees_SoundShader",
			"HK417_tailForest_SoundShader",
			"HK417_tailMeadows_SoundShader",
			"HK417_tailHouses_SoundShader"
		};
	};
	class HK417_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK417_tailInterior_SoundShader"
		};
	};
	class HK417_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK417_silencerCloseShot_SoundShader",
			"HK417_silencerMidShot_SoundShader",
			"HK417_silencerDistShot_SoundShader"
		};
	};
	class HK417_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK417_silencerTailTrees_SoundShader",
			"HK417_silencerTailForest_SoundShader",
			"HK417_silencerTailMeadows_SoundShader",
			"HK417_silencerTailHouses_SoundShader"
		};
	};
	class HK417_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"HK417_silencerTailInterior_SoundShader"
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
	class HK417_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
		volume=0.8;
	};
	class HK417_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
		volume=0.5;
	};
	class HK417_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
		volume=0.3;
	};
	class HK417_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
		volume=0.8;
	};
	class HK417_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
	};
	class HK417_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
	};
	class HK417_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
	};
	class HK417_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
	};
	class HK417_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot", 1}};
	};
	class HK417_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
		volume=0.5;
	};
	class HK417_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
		volume=0.3;
	};
	class HK417_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1},{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
		volume=0.15;
	};
	class HK417_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
	};
	class HK417_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
	};
	class HK417_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
	};
	class HK417_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
	};
	class HK417_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Automatic\HK417\sounds\HK417_Shot_Supp", 1}};
	};
};