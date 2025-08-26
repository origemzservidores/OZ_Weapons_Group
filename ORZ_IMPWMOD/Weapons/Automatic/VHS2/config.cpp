class CfgPatches
{
	class IMP_VHS2
	{
		units[] = {};
		weapons[] = {};
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
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_VHS2_Base: Rifle_Base
	{
		scope = 0;
		weight = 3500;
		displayName = "VHS2";
		descriptionShort = "$STR_VHSD";
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[] = {1,0.5,10,190,4,10};
		WeaponLength=0.82;
		barrelArmor=1.6;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = {"IMP_Mag_VHS2_30Rnd", "IMP_Mag_VHS2_Tape_60Rnd", "IMP_Mag_VHS2_Clip_60Rnd"};
		magazineSwitchTime = 0.3;
		ejectType = 1;
		recoilModifier[] = {2,2,2};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"irons_up", "irons_down"};
		hiddenSelections[] = {"camoflage1", "camoflage2", "camoflage3"};
		modes[] = {"FullAuto","SemiAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet", "ASH12_Tail_SoundSet", "ASH12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ASH12_silencer_SoundSet", "ASH12_silencerTail_SoundSet", "ASH12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.15;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet", "ASH12_Tail_SoundSet", "ASH12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ASH12_silencer_SoundSet", "ASH12_silencerTail_SoundSet", "ASH12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.15;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
		class NoiseShoot
		{
			strength = 40;
			type = "shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			modelOptics = "-";
			discreteDistance[] = {100,200,300,400};
			discreteDistanceInitIndex = 0;
			distanceZoomMin = 100;
			distanceZoomMax = 400;
		};
	};
	class IMP_VHS2: IMP_VHS2_Base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2.p3d";
		hiddenSelectionsTextures[] = {"impwmod\weapons\automatic\vhs2\data\vhs2_co.paa", "impwmod\weapons\automatic\vhs2\data\vhs21_co.paa", "impwmod\weapons\automatic\vhs2\data\vhs22_co.paa"};
		attachments[] = 
		{
			"weaponWrap",
			"weaponOptics",
			"weaponMuzzleM4",
			"grip1"
		};
		itemSize[] = {7,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.01,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22_damage.rvmat"}},
						{0.01,{"impwmod\weapons\automatic\vhs2\data\vhs2_destruct.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21_destruct.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22_destruct.rvmat"}}
					};
				};
			};
		};
	};
	class IMP_VHS22_Base: Rifle_Base
	{
		scope = 0;
		weight = 3500;
		displayName = "VHS2";
		descriptionShort = "$STR_VHSD";
		absorbency = 0;
		repairableWithKits[] = {5,1};
		repairCosts[] = {30,25};
		PPDOFProperties[]={0,0,0,0,0,0};
		WeaponLength=0.82;
		barrelArmor=1.6;
		initSpeedMultiplier = 1;
		chamberSize = 1;
		chamberedRound = "";
		chamberableFrom[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		magazines[] = {"IMP_Mag_VHS2_30Rnd", "IMP_Mag_VHS2_Tape_60Rnd", "IMP_Mag_VHS2_Clip_60Rnd"};
		magazineSwitchTime = 0.3;
		ejectType = 1;
		recoilModifier[] = {2,2,2};
		swayModifier[] = {1,1,1};
		simpleHiddenSelections[] = {"irons_up", "irons_down", "hide_barrel"};
		hiddenSelections[] = {"camoflage1", "camoflage2", "camoflage3"};
		modes[] = {"FullAuto","SemiAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet", "ASH12_Tail_SoundSet", "ASH12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ASH12_silencer_SoundSet", "ASH12_silencerTail_SoundSet", "ASH12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.15;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"ASH12_Shot_SoundSet", "ASH12_Tail_SoundSet", "ASH12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "ASH12_silencer_SoundSet", "ASH12_silencerTail_SoundSet", "ASH12_silencerInteriorTail_SoundSet"}};
			reloadTime = 0.15;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.004;
			magazineSlot = "magazine";
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle = "weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating = 3;
				maxOverheatingValue = 10;
				overheatingDecayInterval = 1;
				class SmokingBarrel
				{
					overrideParticle = "smoking_barrel_small";
					onlyWithinOverheatLimits[] = {0,0.5};
					onlyWithinRainLimits[] = {0,0.2};
					ignoreIfSuppressed = 1;
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle = "smoking_barrel_steam_small";
					positionOffset[] = {0.1,0.02,0};
					onlyWithinOverheatLimits[] = {0,1};
					onlyWithinRainLimits[] = {0.2,1};
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
		class NoiseShoot
		{
			strength = 40;
			type = "shot";
		};
	};
	class IMP_VHS22: IMP_VHS22_Base
	{
		scope = 2;
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS22.p3d";
		hiddenSelectionsTextures[] = {"impwmod\weapons\automatic\vhs2\data\vhs2_co.paa", "impwmod\weapons\automatic\vhs2\data\vhs21_co.paa", "impwmod\weapons\automatic\vhs2\data\vhs22_co.paa"};
		attachments[] = 
		{
			"weaponWrap",
			"weaponMuzzleM4",
			"grip1",
			"weaponOpticsAug"
		};
		itemSize[] = {7,3};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[] = 
					{
						{1.01,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22.rvmat"}},
						{0.7,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22.rvmat"}},
						{0.5,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22_damage.rvmat"}},
						{0.3,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21_damage.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22_damage.rvmat"}},
						{0.01,{"impwmod\weapons\automatic\vhs2\data\vhs2_destruct.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs21_destruct.rvmat", "impwmod\weapons\automatic\vhs2\data\vhs22_destruct.rvmat"}}
					};
				};
			};
		};
	};
};

class cfgVehicles
{
	class Inventory_Base;
	class ItemOptics: Inventory_Base
	{
	};
	class VHS2Optic: ItemOptics
	{
		scope=2;
		model="IMPWMOD\Weapons\Automatic\VHS2\models\optic_vhs2.p3d";
		weight=1;
		inventorySlot[]=
		{
			"weaponOpticsAug"
		};
		reversed=0;
		class OpticsInfo
		{
			memoryPointCamera="eyeScope";
			cameraDir="cameraDir";
			modelOptics="-";
			opticsDisablePeripherialVision=0.67000002;
			opticsFlare=0;
			opticsPPEffects[]={};
			opticsZoomMin="0.5236/1.5";
			opticsZoomMax="0.5236/1.5";
			opticsZoomInit="0.5236/1.5";
			distanceZoomMin=50;
			distanceZoomMax=400;
			discreteDistance[]={50,100,150,200,300,400};
			discreteDistanceInitIndex=1;
			PPMaskProperties[]={0.5,0.5,0.185,0.0099999998};
			PPLensProperties[]={0,0,0,0};
			PPBlurProperties=0;
		};
		class OpticsInfoWeaponOverride
		{
			memoryPointCamera="eyeIronsights";
			cameraDir="cameraDirIronsights";
			opticsZoomMin=0.52359998;
			opticsZoomMax=0.52359998;
			opticsZoomInit=0.52359998;
			distanceZoomMin=50;
			distanceZoomMax=400;
			discreteDistance[]={50,100,150,200,300,400};
			discreteDistanceInitIndex=1;
			PPDOFProperties[]={1,0.1,20,200,4,10};
		};
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_VHS2_30Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_VHSDMag";
		descriptionShort = "$STR_VHSDMagD";
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2_Mag30.p3d";
		weight = 300;
		itemSize[] = {1,3};
		count = 30;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat"}},{0.7,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat"}},{0.5,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat"}},{0.3,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat"}},{0.01,{"impwmod\weapons\automatic\vhs2\data\vhs2_destruct.rvmat"}}};
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
	class IMP_Mag_VHS2_Tape_60Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_VHSDMag";
		descriptionShort = "$STR_VHSDMagD2";
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2_Mag_Tape_60Rnd.p3d";
		weight = 600;
		itemSize[] = {2,3};
		count = 60;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat"}},{0.7,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat"}},{0.5,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat"}},{0.3,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat"}},{0.01,{"impwmod\weapons\automatic\vhs2\data\vhs2_destruct.rvmat"}}};
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
	class IMP_Mag_VHS2_Clip_60Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_VHSDMag";
		descriptionShort = "$STR_VHSDMagD2";
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2_Mag_Clip_60Rnd.p3d";
		weight = 600;
		itemSize[] = {2,3};
		count = 60;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo = "Bullet_556x45";
		ammoItems[] = {"Ammo_556x45","Ammo_556x45Tracer"};
		tracersEvery = 0;
		mass = 10;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.01,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat"}},{0.7,{"impwmod\weapons\automatic\vhs2\data\vhs2.rvmat"}},{0.5,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat"}},{0.3,{"impwmod\weapons\automatic\vhs2\data\vhs2_damage.rvmat"}},{0.01,{"impwmod\weapons\automatic\vhs2\data\vhs2_destruct.rvmat"}}};
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

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyVHS2_Mag30 : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2_Mag30.p3d";
	};
	class ProxyVHS2_Mag_Clip_60Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2_Mag_Clip_60Rnd.p3d";
	};
	class ProxyVHS2_Mag_Tape_60Rnd : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\VHS2\models\VHS2_Mag_Tape_60Rnd.p3d";
	};
	class Proxyscope: ProxyAttachment
	{
		scope=2;
		inventorySlot="weaponOpticsAug";
		model="IMPWMOD\Weapons\Automatic\VHS2\models\optic_vhs2.p3d";
	};
};