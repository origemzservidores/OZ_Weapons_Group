class CfgPatches
{
	class IMP_Weapons_AA12
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
class OpticsInfoShotgun;

class cfgWeapons
{
	class Rifle_Base;
	class IMP_AA12_Base: Rifle_Base
	{
		scope=0;
		weight=3600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_12gaPellets",
			"Ammo_12gaSlug",
			"Ammo_12gaRubberSlug",
			"Ammo_12gaBeanbag"
		};
		magazines[]=
		{
			"Mag_Saiga_5Rnd",
			"Mag_Saiga_8Rnd",
			"Mag_Saiga_Drum20Rnd"
		};
		magazineSwitchTime=0.2;
		PPDOFProperties[]={1,0.5,10,140,4,10};
		initSpeedMultiplier = 1;
		WeaponLength=0.81;
		barrelArmor=1.6799999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.5,2.5,1.3};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Shotgun\AA12\data\korpus.paa"};
		hiddenSelectionsMaterials[] = {"IMPWMOD\Weapons\Shotgun\AA12\data\korpus.rvmat"};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Origin12_silencer_SoundSet", "Origin12_silencerTail_SoundSet", "Origin12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.2;
			recoil="recoil_Saiga12";
			recoilProne="recoil_Saiga12_prone";
			dispersion=0.0099999998;
			firespreadangle=1.5;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "Origin12_silencer_SoundSet", "Origin12_silencerTail_SoundSet", "Origin12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.2;
			dispersion=0.0015;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoShotgun
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
	};
	class IMP_AA12: IMP_AA12_Base
	{
		scope=2;
		displayName="$STR_IMP_aa12";
		descriptionShort="$STR_IMP_aa121";
		model="IMPWMOD\Weapons\Shotgun\AA12\models\IMP_AA12.p3d";
		itemSize[]={9,3};
		attachments[]= 
		{
			"weaponWrap", 
			"weaponFlashlight",
			"weaponBipod",
			"grip1"
		};
		class Particles
		{
			class OnFire
			{
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud2
				{
					overrideParticle="weapon_shot_winded_smoke";
				};
				class SmokeCloud3BadlyDamaged
				{
					overrideParticle="weapon_shot_winded_smoke";
					onlyWithinHealthLabel[]={3,4};
				};
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_mp133_01";
					illuminateWorld=1;
				};
				class BadlyDamagedChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
					onlyWithinHealthLabel[]={3,4};
				};
				class BadlyDamagedChamberSmokeRaise
				{
					overrideParticle="weapon_shot_chamber_smoke_raise";
					overridePoint="Nabojnicestart";
					onlyWithinHealthLabel[]={3,4};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=4;
				shotsToStartOverheating=1;
				overheatingDecayInterval=3;
				class SmokingBarrel
				{
					overrideParticle="smoking_barrel_small";
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
					hitpoints=1000;
					healthLevels[]=
					{
						{1,{"IMPWMOD\Weapons\Shotgun\AA12\data\korpus.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Shotgun\AA12\data\korpus.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Shotgun\AA12\data\korpus_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Shotgun\AA12\data\korpus_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Shotgun\AA12\data\korpus_destruct.rvmat"}}
					};
				};
			};
		};
	};
};