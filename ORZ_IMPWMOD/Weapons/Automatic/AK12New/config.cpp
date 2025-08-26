class CfgPatches
{
	class IMP_Weapons_AK12New
	{
		units[]=
		{
			"IMP_AK12New"
		};
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

class cfgWeapons {
	class Rifle_Base;
	
	class IMP_AK12New_Base: Rifle_Base
	{
		scope=0;
		weight=3000;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.5,50,160,4,10};
		WeaponLength=0.87;
		barrelArmor=2.5;
		initSpeedMultiplier = 1;
		chamberSize=1;
		chamberedRound="";
		attachments[]=
		{
			"weaponWrap",
			"weaponOptics",
			"weaponMuzzleAK",
			"HandlesAK",
			"grip1"
		};
		itemSize[] = {9, 3};
		chamberableFrom[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		magazines[]=
		{
			"IMP_Mag_AK12_30Rnd",
			"IMP_Mag_AK12_Tape_60Rnd",
			"IMP_Mag_AK12_Clip_60Rnd",
			"IMP_Mag_AK_Arsenal_30Rnd"
		};
		magazineSwitchTime=0.2;
		ejectType=1;
		recoilModifier[]={0.45,1,1};
		swayModifier[]={2,2,1.1};
		simpleHiddenSelections[]=
		{
			"irons_up",
			"irons_down",
			"HandlesAK"
		};
		hiddenSelections[]=
		{
			"camoflage1",
			"camoflage2",
			"camoflage3",
			"camoflage4",
			"camoflage5",
			"camoflage6"
		};
		modes[]=
		{
			"FullAuto",
			"SemiAuto"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"AK12_Shot_SoundSet", "AK12_Tail_SoundSet", "AK12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AK12_silencer_SoundSet", "AK12_silencerTail_SoundSet", "AK12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.125;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK12_Shot_SoundSet", "AK12_Tail_SoundSet", "AK12_InteriorTail_SoundSet"};
			soundSetShotExt[]= {{ "AK12_silencer_SoundSet", "AK12_silencerTail_SoundSet", "AK12_silencerInteriorTail_SoundSet"}};
			reloadTime=0.092;
			recoil="recoil_AKM";
			recoilProne="recoil_AKM_prone";
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=40;
			type="shot";
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={100,200,300};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=300;
		};
	};
	class IMP_AK12New: IMP_AK12New_Base
	{
		scope=2;
		displayName="AK-12 New";
		descriptionShort="$STR_IMP_AK12descr";
		model="\IMPWMOD\Weapons\Automatic\AK12New\models\AK12New.p3d";
		hiddenSelectionsTextures[] = 
		{
			"impwmod\weapons\automatic\ak12new\data\grip_co.paa", 
			"impwmod\weapons\automatic\ak12new\data\body_co.paa", 
			"impwmod\weapons\automatic\ak12new\data\stock_co.paa", 
			"impwmod\weapons\automatic\ak12new\data\handguard_co.paa", 
			"impwmod\weapons\automatic\ak12new\data\barrel_co.paa", 
			"impwmod\weapons\automatic\ak12new\data\ironsight_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"impwmod\weapons\automatic\ak12new\data\grip.rvmat", 
			"impwmod\weapons\automatic\ak12new\data\body.rvmat",
			"impwmod\weapons\automatic\ak12new\data\stock.rvmat", 
			"impwmod\weapons\automatic\ak12new\data\handguard.rvmat",
			"impwmod\weapons\automatic\ak12new\data\barrel.rvmat",
			"impwmod\weapons\automatic\ak12new\data\ironsight.rvmat"
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
							1.01,
							
							{
								"impwmod\weapons\automatic\ak12new\data\grip.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\body.rvmat",
								"impwmod\weapons\automatic\ak12new\data\stock.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\handguard.rvmat",
								"impwmod\weapons\automatic\ak12new\data\barrel.rvmat",
								"impwmod\weapons\automatic\ak12new\data\ironsight.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\automatic\ak12new\data\grip.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\body.rvmat",
								"impwmod\weapons\automatic\ak12new\data\stock.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\handguard.rvmat",
								"impwmod\weapons\automatic\ak12new\data\barrel.rvmat",
								"impwmod\weapons\automatic\ak12new\data\ironsight.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\automatic\ak12new\data\grip_damage.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\body_damage.rvmat",
								"impwmod\weapons\automatic\ak12new\data\stock_damage.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\handguard_damage.rvmat",
								"impwmod\weapons\automatic\ak12new\data\barrel_damage.rvmat",
								"impwmod\weapons\automatic\ak12new\data\ironsight_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\automatic\ak12new\data\grip_damage.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\body_damage.rvmat",
								"impwmod\weapons\automatic\ak12new\data\stock_damage.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\handguard_damage.rvmat",
								"impwmod\weapons\automatic\ak12new\data\barrel_damage.rvmat",
								"impwmod\weapons\automatic\ak12new\data\ironsight_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"impwmod\weapons\automatic\ak12new\data\grip_destruct.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\body_destruct.rvmat",
								"impwmod\weapons\automatic\ak12new\data\stock_destruct.rvmat", 
								"impwmod\weapons\automatic\ak12new\data\handguard_destruct.rvmat",
								"impwmod\weapons\automatic\ak12new\data\barrel_destruct.rvmat",
								"impwmod\weapons\automatic\ak12new\data\ironsight_destruct.rvmat"
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
	
	class IMP_Mag_AK12_30Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_AK12MagMain";
		descriptionShort="$STR_IMP_30556";
		model="\IMPWMOD\Weapons\Automatic\AK12New\models\AK12MagNew.p3d";
		weight=430;
		itemSize[]={1,3};
		count=30;
		ammo="Bullet_556x45";
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_co.paa"};
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
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_destruct.rvmat"
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
	class IMP_Mag_AK12_Tape_60Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_AK12MagMain";
		descriptionShort="$STR_IMP_60556";
		model="\IMPWMOD\Weapons\Automatic\AK12New\models\AK12MagNew_Tape.p3d";
		weight=430;
		itemSize[]={2,3};
		count=60;
		ammo="Bullet_556x45";
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_co.paa"};
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
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_destruct.rvmat"
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
	class IMP_Mag_AK12_Clip_60Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_AK12MagMain";
		descriptionShort="$STR_IMP_60556";
		model="\IMPWMOD\Weapons\Automatic\AK12New\models\AK12MagNew_Clip.p3d";
		weight=430;
		itemSize[]={2,3};
		count=60;
		ammo="Bullet_556x45";
		ammoItems[]=
		{
			"Ammo_556x45",
			"Ammo_556x45Tracer"
		};
		hiddenSelections[] = {"camoflage"};
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_co.paa"};
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
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"IMPWMOD\Weapons\Automatic\AK12New\data\Magazine_destruct.rvmat"
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


	class ProxyAK12MagNew : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\AK12New\models\AK12MagNew.p3d";
	};
	class ProxyAK12MagNew_Clip : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\AK12New\models\AK12MagNew_Clip.p3d";
	};
	class ProxyAK12MagNew_Tape : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Automatic\AK12New\models\AK12MagNew_Tape.p3d";
	};
};