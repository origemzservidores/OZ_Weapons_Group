class CfgPatches
{
	class IMP_VSK94
	{
		units[]=
		{
			"IMP_VSK94"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms"
		};
		magazines[]=
		{
			"IMP_Mag_VSK94_20Rnd"
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
	class IMP_VSK94_Base: Rifle_Base
	{
		scope=0;
		weight=2600;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,150,4,10};
		WeaponLength=0.907;
		barrelArmor=2.4000001;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		magazines[]=
		{
			"IMP_Mag_VSK94_20Rnd"
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
			"camoflage1",
			"camoflage2",
			"camoflage3"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"VSS_Vintorez_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
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
				"VSS_Vintorez_Shot_SoundSet",
				"VSS_Vintorez_Tail_SoundSet",
				"VSS_Vintorez_InteriorTail_SoundSet"
			};
			reloadTime=0.064999998;
			recoil="recoil_VSS";
			recoilProne="recoil_VSS_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=5;
			type="sound";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 50;
			distanceZoomMax = 400;
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
					positionOffset[]={-0.050000001,0,0};
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
				maxOverheatingValue=30;
				shotsToStartOverheating=15;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,1};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHotSteamSmall
				{
					overrideParticle="smoking_barrel_steam_small";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.2,0.5};
				};
				class SmokingBarrelHotSteam
				{
					overrideParticle="smoking_barrel_steam";
					positionOffset[]={0.30000001,0,0};
					onlyWithinRainLimits[]={0.5,1};
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
	};
	class IMP_VSK94: IMP_VSK94_Base
	{
		scope=2;
		displayName="$STR_IMP_VSK94";
		descriptionShort="$STR_IMP_VSK94D";
		model="IMPWMOD\Weapons\Automatic\VSK94\models\VSK94.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK"
		};
		itemSize[]={8,3};
		hiddenSelectionsTextures[]=
		{
			"impwmod\weapons\automatic\vsk94\data\vsk94_co.paa",
			"impwmod\weapons\automatic\vsk94\data\vsk94mag_co.paa",
			"impwmod\weapons\automatic\vsk94\data\vsk94sile_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"impwmod\weapons\automatic\vsk94\data\vsk94.rvmat",
			"impwmod\weapons\automatic\vsk94\data\vsk94mag.rvmat",
			"impwmod\weapons\automatic\vsk94\data\vsk94sile.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"impwmod\weapons\automatic\vsk94\data\vsk94.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94mag.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94sile.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\automatic\vsk94\data\vsk94.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94mag.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94sile.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\automatic\vsk94\data\vsk94_damage.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94mag_damage.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94sile_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\automatic\vsk94\data\vsk94_damage.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94mag_damage.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94sile_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\automatic\vsk94\data\vsk94_destruct.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94mag_destruct.rvmat",
								"impwmod\weapons\automatic\vsk94\data\vsk94sile_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_VSK94_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_VSK94Mag";
		descriptionShort="$STR_IMP_VSSm1";
		model="IMPWMOD\Weapons\Automatic\VSK94\models\VSK94_Mag.p3d";
		weight=350;
		weightPerQuantityUnit=8;
		itemSize[]={1,2};
		count=20;
		recoilModifier[]={0.9, 0.9, 1};
		swayModifier[]={0.9, 0.9, 1};
		ammo="Bullet_9x39";
		ammoItems[]=
		{
			"Ammo_9x39",
			"Ammo_9x39AP"
		};
		tracersEvery=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Automatic\VSK94\data\VSK94Mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\VSK94\data\VSK94Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\VSK94\data\VSK94Mag_Damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\VSK94\data\VSK94Mag_Damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\VSK94\data\VSK94Mag_Destruct.rvmat"
							}
						}
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
					soundSet="MagRifle_fill_in_SoundSet";
					id=1;
				};
				class MagRifle_fill_loop
				{
					soundSet="MagRifle_fill_loop_SoundSet";
					id=2;
				};
				class MagRifle_fill_out
				{
					soundSet="MagRifle_fill_out_SoundSet";
					id=3;
				};
				class MagRifle_empty_in
				{
					soundSet="MagRifle_empty_in_SoundSet";
					id=4;
				};
				class MagRifle_empty_loop
				{
					soundSet="MagRifle_empty_loop_SoundSet";
					id=5;
				};
				class MagRifle_empty_out
				{
					soundSet="MagRifle_empty_out_SoundSet";
					id=6;
				};
				class MagPistol_fill_in
				{
					soundSet="MagPistol_fill_in_SoundSet";
					id=7;
				};
				class MagPistol_fill_loop
				{
					soundSet="MagPistol_fill_loop_SoundSet";
					id=8;
				};
				class MagPistol_fill_out
				{
					soundSet="MagPistol_fill_out_SoundSet";
					id=9;
				};
				class MagPistol_empty_in
				{
					soundSet="MagPistol_empty_in_SoundSet";
					id=10;
				};
				class MagPistol_empty_loop
				{
					soundSet="MagPistol_empty_loop_SoundSet";
					id=11;
				};
				class MagPistol_empty_out
				{
					soundSet="MagPistol_empty_out_SoundSet";
					id=12;
				};
			};
		};
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyVSK94_Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model="IMPWMOD\Weapons\Automatic\VSK94\models\VSK94_Mag.p3d";
	};
};