class CfgPatches
{
	class IMP_Weapons_SOK94
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
	class Rifle_Base;
	class IMP_SOK94_Base: Rifle_Base
	{
		scope=0;
		weight=2140;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		ironsightsExcludingOptics[]=
		{
			"KashtanOptic",
			"GrozaOptic",
			"KobraOptic"
		};
		WeaponLength=0.77;
		barrelArmor=4.444;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		magazines[]=
		{
			"IMP_Mag_SOK94_10Rnd",
			"IMP_Mag_SOK94_20Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"hide_barrel"
		};
		hiddenSelections[]=
		{
			"camoflage1",
			"camoflage2"
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
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.125;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"AK_Shot_SoundSet",
				"AK_Tail_SoundSet",
				"AK_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"AK_silencer_SoundSet",
					"AK_silencerTail_SoundSet",
					"AK_silencerInteriorTail_SoundSet"
				},
				
				{
					"AK_silencerHomeMade_SoundSet",
					"AK_silencerHomeMadeTail_SoundSet",
					"AK_silencerInteriorHomeMadeTail_SoundSet"
				}
			};
			reloadTime=0.1;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=82;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300,400,500,600,700,800,900,1000};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=1000;
		};
	};
	class IMP_SOK94: IMP_SOK94_Base
	{
		scope=2;
		displayName="$STR_IMP_SOK94";
		descriptionShort="$STR_IMP_SOK94D";
		model="IMPWMOD\Weapons\Automatic\SOK94\models\SOK94.p3d";
		attachments[]=
		{
			"weaponWrap",
			"weaponOpticsAK",
			"weaponMuzzleAK",
			"Rail",
			"weaponOptics"
		};
		itemSize[] = {9, 3};
		hiddenSelectionsTextures[] = 
		{
			"IMPWMOD\Weapons\Automatic\SOK94\data\Body_co.paa",
			"IMPWMOD\Weapons\Automatic\SOK94\data\Grips_co.paa"
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
					overrideParticle="weapon_shot_akm_01";
					ignoreIfSuppressed=1;
					illuminateWorld=1;
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
				maxOverheatingValue=40;
				shotsToStartOverheating=5;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.5};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot1
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.5,0.80000001};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrelHot3
				{
					overrideParticle="smoking_barrel_heavy";
					onlyWithinOverheatLimits[]={0.80000001,1};
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
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body.rvmat",
								"IMPWMOD\Weapons\Automatic\SOK94\data\Grips.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body.rvmat",
								"IMPWMOD\Weapons\Automatic\SOK94\data\Grips.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_damage.rvmat",
								"IMPWMOD\Weapons\Automatic\SOK94\data\Grips_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_damage.rvmat",
								"IMPWMOD\Weapons\Automatic\SOK94\data\Grips_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_destruct.rvmat",
								"IMPWMOD\Weapons\Automatic\SOK94\data\Grips_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};

class cfgMagazines {
	class Magazine_Base;
	
	class IMP_Mag_SOK94_10Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_SOK94Mag";
		descriptionShort="$STR_IMP_SOK94Mag1";
		model="\IMPWMOD\Weapons\Automatic\SOK94\models\SOK94Mag.p3d";
		weight=430;
		itemSize[]={1,2};
		count=10;
		ammo="Bullet_762x39";
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\SOK94\data\Body_co.paa"};
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
							1.01,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_destruct.rvmat"
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
	class IMP_Mag_SOK94_20Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_SOK94Mag";
		descriptionShort="$STR_IMP_SOK94Mag2";
		model="\IMPWMOD\Weapons\Automatic\SOK94\models\SOK94Mag_Coupled.p3d";
		weight=800;
		itemSize[]={2,2};
		count=20;
		ammo="Bullet_762x39";
		ammoItems[]=
		{
			"Ammo_762x39",
			"Ammo_762x39Tracer"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\SOK94\data\Body_co.paa"};
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
							1.01,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\SOK94\data\Body_destruct.rvmat"
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


	class ProxySOK94Mag : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SOK94\models\SOK94Mag.p3d";
	};
	class ProxySOK94Mag_Coupled : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\SOK94\models\SOK94Mag_Coupled.p3d";
	};
};