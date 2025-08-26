class CfgPatches {
	class IMP_Weapon_ORIGIN12 {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms", "DZ_Sounds_Effects", "DZ_Weapons_Magazines"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;

class cfgWeapons {
	class Rifle_Base;
	
	class IMP_Origin12_Base : Rifle_Base {
		scope = 0;
		displayName = "Origin 12";
		descriptionShort = "$STR_IMP_automshot";
		weight = 5800;
		initSpeedMultiplier = 1;
		model = "IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12.p3d";
		absorbency = 0;
		repairableWithKits[] = {1};
		repairCosts[] = {30, 25};
		PPDOFProperties[] = {1, 0.6, 50, 200, 4, 10};
		WeaponLength = 0.53;
		barrelArmor = 3.888;
		attachments[] = {"weaponWrap", "weaponOptics", "Suppressor_Origin12", "weaponButtstockM4", "grip1", "weaponFlashlight"};
		itemSize[] = {9, 3};
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_12gaPellets", "Ammo_12gaSlug", "Ammo_12gaRubberSlug", "Ammo_12gaBeanbag"};
		magazines[] = {"IMP_Origin12_Drum_30Rnd", "IMP_Origin12_Mag_15Rnd"};
		ejectType = 1;
		simpleHiddenSelections[] = {"hide_barrel", "irons_up", "irons_down"};
		recoilModifier[] = {1.2, 1.2, 1.2};
		swayModifier[] = {2, 2, 1};
		modes[] = {"FullAuto", "SemiAuto"};
		
		class NoiseShoot
        {
            strength=120;
            type="shot";
        };
		
		class SemiAuto : Mode_SemiAuto 
		{
			soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Origin12_silencer_SoundSet", "Origin12_silencerTail_SoundSet", "Origin12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.15;
			dispersion = 0.0001;
			magazineSlot = "magazine";
		};
		
		class FullAuto : Mode_FullAuto 
		{
			soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Origin12_silencer_SoundSet", "Origin12_silencerTail_SoundSet", "Origin12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.15;
			dispersion = 0.0001;
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
		
		class Particles {
			class OnFire {
				class SmokeCloud {
					overrideParticle = "weapon_shot_mp5k_01";
				};
				
				class MuzzleFlash {
					overrideParticle = "weapon_shot_mp5k_01";
					ignoreIfSuppressed = 1;
					illuminateWorld = 1;
					positionOffset[] = {-0.05, 0, 0};
				};
			};
			
			class OnOverheating {
				maxOverheatingValue = 170;
				shotsToStartOverheating = 20;
				overheatingDecayInterval = 1;
				
				class SmokingBarrel1 {
					positionOffset[] = {-0.02, 0, 0};
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0, 0.2};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot1 {
					positionOffset[] = {0.1, 0, 0};
					overrideParticle = "smoking_barrel";
					onlyWithinOverheatLimits[] = {0.2, 0.6};
					onlyWithinRainLimits[] = {0, 0.2};
				};
				
				class SmokingBarrelHot3 {
					positionOffset[] = {0.3, 0, 0};
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
			};
		};
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 1000;
					healthLevels[] = {{1.01, {"DZ\weapons\shotguns\saiga\data\saiga.rvmat"}}, {0.7, {"DZ\weapons\shotguns\saiga\data\saiga.rvmat"}}, {0.5, {"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"}}, {0.3, {"DZ\weapons\shotguns\saiga\data\saiga_damage.rvmat"}}, {0.01, {"DZ\weapons\shotguns\saiga\data\saiga_destruct.rvmat"}}};
				};
			};
		};
	};
	
	class IMP_Origin12 : IMP_Origin12_Base {
		scope = 2;
	};
};

class CfgMagazines {
	class Magazine_Base;
	
	class IMP_Origin12_Drum_30Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_Origin1";
		descriptionShort = "$STR_IMP_Origin2";
		model = "IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12Drum.p3d";
		weight = 400;
		itemSize[] = {3, 3};
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		count = 30;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets", "Ammo_12gaSlug", "Ammo_12gaRubberSlug", "Ammo_12gaBeanbag"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagDrum_BaseColor.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagDrum_BaseColor.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagDrum_BaseColor.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagDrum_BaseColor.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagDrum_BaseColor.rvmat"}}};
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
	
	class IMP_Origin12_Mag_15Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_Origin3";
		descriptionShort = "$STR_IMP_Origin4";
		model = "IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12Mag.p3d";
		weight = 200;
		recoilModifier[]={0.85, 0.85, 1};
		swayModifier[]={0.85, 0.85, 1};
		itemSize[] = {1, 3};
		count = 15;
		ammo = "Bullet_12GaugePellets";
		ammoItems[] = {"Ammo_12gaPellets", "Ammo_12gaSlug", "Ammo_12gaRubberSlug", "Ammo_12gaBeanbag"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = {{1.01, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagSmall_BaseColor.rvmat"}}, {0.7, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagSmall_BaseColor.rvmat"}}, {0.5, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagSmall_BaseColor.rvmat"}}, {0.3, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagSmall_BaseColor.rvmat"}}, {0.01, {"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_MagSmall_BaseColor.rvmat"}}};
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

class cfgVehicles {
	class ImprovisedSuppressor;
	class M4_Suppressor;
	class AK_Suppressor;

    class IMP_Supp_Origin12_Base : M4_Suppressor 
    {
        scope = 0;
        displayName="$STR_IMP_Origin5";
		descriptionShort="$STR_IMP_Origin6";
		model="IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12Supp.p3d";
        rotationFlags=17;
		reversed=0;
		weight=73;
		itemSize[]={3,1};
		itemModelLength=0.148;
		barrelArmor=15000;
		lootCategory="Attachments";
		lootTag[]=
		{
			"Military_east"
		};
		inventorySlot[]=
		{
			"Suppressor_Origin12"
		};
		simulation="ItemSuppressor";
		dispersionModifier=-0.00050000002;
		dispersionCondition="true";
		noiseShootModifier=-0.89999998;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		selectionFireAnim="zasleh";
		soundIndex=1;
		muzzlePos="usti hlavne";
        hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\d_suppressor_basecolor.paa",
		};
		class NoiseShoot
        {
            strength=40;
            type="shot";
        };
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
					onlyWithinHealthLabel[]={0,3};
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=3;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
				class SmokeTrail
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0.1,0};
					onlyWithinOverheatLimits[]={0,1};
					onlyWithinRainLimits[]={0.2,1};
				};
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5;
					healthLevels[] = {
						{1.01,{"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\d_suppressor_basecolor.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\d_suppressor_basecolor.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_Suppressor_BaseColor_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_Suppressor_BaseColor_damage.rvmat"}},
						{0.01,{"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\D_Suppressor_BaseColor_destruct.rvmat"}}
					};
				};
			};
		};
    };
    class IMP_Supp_Origin12 : IMP_Supp_Origin12_Base {
        scope = 2;
        hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Shotgun\ORIGIN12\data\d_suppressor_basecolor.paa",
		};
    };
};

class CfgSlots 
{
	class Slot_Suppressor_Origin12
	{
		name = "Suppressor_Origin12";
		displayName = "$STR_IMP_SuppOrigin12Name";
		modGhostIcon = "set:Slots image:AACHBSupp";
	};
};

class CfgNonAIVehicles 
{
	class ProxyAttachment;
	
	class ProxyOrigin12Supp : ProxyAttachment {
		scope = 2;
		inventorySlot = "Suppressor_Origin12";
		model="IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12Supp.p3d";
	};
	
	class ProxyOrigin12Drum : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12Drum.p3d";
	};
	
	class ProxyOrigin12Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Shotgun\ORIGIN12\models\Origin12Mag.p3d";
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
	class Origin12_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Origin12_closeShot_SoundShader",
			"Origin12_midShot_SoundShader",
			"Origin12_distShot_SoundShader"
		};
	};
	class Origin12_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Origin12_tailDistant_SoundShader",
			"Origin12_tailTrees_SoundShader",
			"Origin12_tailForest_SoundShader",
			"Origin12_tailMeadows_SoundShader",
			"Origin12_tailHouses_SoundShader"
		};
	};
	class Origin12_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Origin12_tailInterior_SoundShader"
		};
	};
	class Origin12_silencer_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"Origin12_silencerCloseShot_SoundShader",
			"Origin12_silencerMidShot_SoundShader",
			"Origin12_silencerDistShot_SoundShader"
		};
	};
	class Origin12_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Origin12_silencerTailTrees_SoundShader",
			"Origin12_silencerTailForest_SoundShader",
			"Origin12_silencerTailMeadows_SoundShader",
			"Origin12_silencerTailHouses_SoundShader"
		};
	};
	class Origin12_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"Origin12_silencerTailInterior_SoundShader"
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
	class Origin12_closeShot_SoundShader: closeShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.8;
	};
	class Origin12_midShot_SoundShader: midShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.5;
	};
	class Origin12_distShot_SoundShader: distShotRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.3;
	};
	class Origin12_tailDistant_SoundShader: tailDistantRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.3;
	};
	class Origin12_tailForest_SoundShader: tailForestRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_tailHouses_SoundShader: tailHousesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_tailMeadows_SoundShader: tailMeadowsRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_tailTrees_SoundShader: tailTreesRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_tailInterior_SoundShader: tailInteriorRifle_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_silencerCloseShot_SoundShader: base_ProfessionalSilenced_closeShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.5;
	};
	class Origin12_silencerMidShot_SoundShader: base_ProfessionalSilenced_midShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.4;
	};
	class Origin12_silencerDistShot_SoundShader: base_ProfessionalSilenced_distShot_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1},{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
		volume=0.3;
	};
	class Origin12_silencerTailForest_SoundShader: base_ProfessionalSilenced_tailForest_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_silencerTailHouses_SoundShader: base_ProfessionalSilenced_tailHouses_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_silencerTailMeadows_SoundShader: base_ProfessionalSilenced_tailMeadows_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_silencerTailTrees_SoundShader: base_ProfessionalSilenced_tailTrees_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
	class Origin12_silencerTailInterior_SoundShader: base_ProfessionalSilenced_tailInterior_SoundShader
	{
		samples[] = {{"IMPWMOD\Weapons\Shotgun\ORIGIN12\sounds\Origin12_Supp_Shot", 1}};
	};
};