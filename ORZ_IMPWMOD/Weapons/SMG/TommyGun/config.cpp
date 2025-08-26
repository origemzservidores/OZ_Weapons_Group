class CfgPatches
{
	class IMP_TommyGun
	{
		units[]=
		{
			"VSS"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
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
	class IMP_TommyGun_Base: Rifle_Base
	{
		scope=0;
		weight=2600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,150,4,10};
		barrelArmor=2.4000001;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazines[]=
		{
			"IMP_TommyGun_Drum_100Rnd"
		};
		magazineSwitchTime=0.38;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2.2,2.2,1.2};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camoflage"
		};
		class NoiseShoot
		{
			strength=15;
			type="sound";
		};
		modes[]=
		{
			"SemiAuto",
			"FullAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"FNX45_Shot_SoundSet",
				"FNX45_Tail_SoundSet",
				"FNX45_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNX45_silencerPro_SoundSet",
					"FNX45_silencerTail_SoundSet",
					"FNX45_silencerInteriorTail_SoundSet"
				}
			};
			envShootingDecrease=0.050000001;
			reloadTime=0.12;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"FNX45_Shot_SoundSet",
				"FNX45_Tail_SoundSet",
				"FNX45_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"FNX45_silencerPro_SoundSet",
					"FNX45_silencerTail_SoundSet",
					"FNX45_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
		};
		class InventorySlotsOffsets
		{
			class Shoulder
			{
				position[]={-0.1,0,0};
				orientation[]={0,-17,0};
			};
			class Melee
			{
				position[]={-0.1,-0.0099999998,0};
				orientation[]={0,20,0};
			};
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
					overrideParticle="weapon_shot_vss_01";
					ignoreIfSuppressed=1;
					illuminateWorld=0;
					positionOffset[]={-0.050000001,0,0};
				};
				class ChamberSmoke
				{
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
					overrideDirectionPoint="Nabojniceend";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0.30000001,1};
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
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
	};
	class IMP_TommyGun: IMP_TommyGun_Base
	{
		scope=2;
		weight=2200;
		displayName="$STR_Thompson";
		descriptionShort="$STR_ThompsonD";
		model="IMPWMOD\Weapons\SMG\TommyGun\models\TommyGun.p3d";
		WeaponLength=0.63999999;
		PPDOFProperties[]={1,0.5,50,180.10001,4,10};
		attachments[]=
		{
		};
		magazines[]=
		{
			"IMP_TommyGun_Drum_100Rnd"
		};
		itemSize[]={6,3};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy.rvmat"
		};
		class NoiseShoot
		{
			strength=66;
			type="shot";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\SMG\TommyGun\data\Tommy_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			discreteDistance[]={100,200};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=160;
			distanceZoomMax=160;
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Vikhr_Shot_SoundSet",
				"Vikhr_Tail_SoundSet",
				"Vikhr_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Vikhr_silencer_SoundSet",
					"Vikhr_silencerTail_SoundSet",
					"Vikhr_silencerInteriorTail_SoundSet"
				},
				
				{
					"Vikhr_silencerHomeMade_SoundSet",
					"Vikhr_silencerHomeMadeTail_SoundSet",
					"Vikhr_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			envShootingDecrease=0.050000001;
			reloadTime=0.12;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Vikhr_Shot_SoundSet",
				"Vikhr_Tail_SoundSet",
				"Vikhr_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Vikhr_silencer_SoundSet",
					"Vikhr_silencerTail_SoundSet",
					"Vikhr_silencerInteriorTail_SoundSet"
				},
				
				{
					"Vikhr_silencerHomeMade_SoundSet",
					"Vikhr_silencerHomeMadeTail_SoundSet",
					"Vikhr_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0022;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					positionOffset[]={-0.050000001,0,0};
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=0.69999999;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,1};
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0,0,0};
					onlyWithinRainLimits[]={0.30000001,1};
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
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		weaponStateAnim="dz\anims\anm\player\reloads\VSS\w_VSS_states.anm";
	};
};

class CfgMagazines
{
	class Magazine_Base;
	class IMP_TommyGun_Drum_100Rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_ThompsonDMag";
		descriptionShort = "$STR_ThompsonDMagD";
		model = "IMPWMOD\Weapons\SMG\TommyGun\models\TommyGun_Mag.p3d";
		weight = 230;
		itemSize[] = {3,3};
		count = 100;
		ammo = "Bullet_45ACP";
		ammoItems[] = 
		{
			"Ammo_45ACP"
		};
		isMeleeWeapon = 0;
		tracersEvery = 0;
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyTommyGun_Mag: ProxyAttachment
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\SMG\TommyGun\models\TommyGun_Mag.p3d";
	};
};