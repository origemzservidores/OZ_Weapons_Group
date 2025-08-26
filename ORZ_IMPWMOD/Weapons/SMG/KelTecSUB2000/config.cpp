class CfgPatches
{
	class IMP_KelTecSUB2000
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Weapons_Firearms"
		};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class OpticsInfoRifle;
class CfgWeapons
{
	class Rifle_Base;
	class IMP_KelTecSUB2000_Base: Rifle_Base
	{
		scope=0;
		displayName="KelTec SUB 2000";
		descriptionShort="$STR_KELTECSD";
		model="IMPWMOD\Weapons\SMG\KelTecSUB2000\models\KelTecSub2000.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponWrap",
			"weaponFlashlight"
		};
		itemSize[]={6,3};
		weight=1500;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.1,20,200,10,10};
		WeaponLength=0.624;
		initSpeedMultiplier=1;
		chamberSize=1;
		chamberedRound="";
		chamberableFrom[]=
		{
			"Ammo_9x19"
		};
		magazines[]=
		{
			"IMP_KelTecSUB2000_Mag_15Rnd",
			"IMP_KelTecSUB2000_Mag_50Rnd"
		};
		barrelArmor=5;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.1,1.1,1};
		hiddenSelections[]=
		{
			"camoflage",
			"camoflage1"
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
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.12;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Glock19_Shot_SoundSet",
				"Glock19_Tail_SoundSet",
				"Glock19_InteriorTail_SoundSet"
			};
			soundSetShotExt[]=
			{
				
				{
					"Glock19_silencerPro_SoundSet",
					"Glock19_silencerTail_SoundSet",
					"Glock19_silencerInteriorTail_SoundSet"
				}
			};
			reloadTime=0.064999998;
			dispersion=0.0020000001;
			magazineSlot="magazine";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlashForward
				{
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					overrideParticle="weapon_shot_fnx_01";
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=15;
				overheatingDecayInterval=1;
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
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera="eye";
			discreteDistance[]={25,50,100,150};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=25;
			distanceZoomMax=150;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_destruct.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
				};
			};
		};
	};
	class IMP_KelTecSUB2000: IMP_KelTecSUB2000_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_co.paa",
			"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_co.paa"
		};
	};
	class IMP_KelTecSUB2000_Supp_Base: IMP_KelTecSUB2000_Base
	{
		scope=0;
		displayName="KelTec SUB 2000";
		descriptionShort="$STR_KELTECSD";
		model="IMPWMOD\Weapons\SMG\KelTecSUB2000\models\KelTecSub2000_supp.p3d";
		attachments[]=
		{
			"weaponOptics",
			"weaponWrap"
		};
		hiddenSelections[]=
		{
			"camoflage",
			"camoflage1"
		};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]=
			{
				"Glock19_silencerPro_SoundSet",
				"Glock19_silencerTail_SoundSet",
				"Glock19_silencerInteriorTail_SoundSet"
			};
			reloadTime=0.125;
			dispersion=0.0035000001;
			magazineSlot="magazine";
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[]=
			{
				"Glock19_silencerPro_SoundSet",
				"Glock19_silencerTail_SoundSet",
				"Glock19_silencerInteriorTail_SoundSet"
			};
			reloadTime=0.067000002;
			dispersion=0.0035000001;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=8;
			type="sound";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					overrideParticle="weapon_shot_fnx_02";
				};
				class SmokeCloud
				{
					overrideParticle="weapon_shot_winded_smoke_small";
				};
			};
			class OnOverheating
			{
				shotsToStartOverheating=5;
				maxOverheatingValue=10;
				overheatingDecayInterval=1;
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
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_destruct.rvmat",
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.1;
					};
				};
			};
		};
	};
	class IMP_KelTecSUB2000_Supp: IMP_KelTecSUB2000_Supp_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_co.paa",
			"impwmod\weapons\smg\keltecsub2000\data\keltecsub2000_co.paa"
		};
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_KelTecSUB2000_Mag_15Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_MagKELTECSD";
		descriptionShort="$STR_MagKELTECSDD";
		model="IMPWMOD\Weapons\SMG\KelTecSUB2000\models\KelTecSub2000_Mag2.p3d";
		weight=80;
		itemSize[]={1,2};
		count=15;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
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
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_destruct.rvmat"
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
	class IMP_KelTecSUB2000_Mag_50Rnd: Magazine_Base
	{
		scope=2;
		displayName="$STR_MagKELTECSD";
		descriptionShort="$STR_MagKELTECSDD2";
		model="IMPWMOD\Weapons\SMG\KelTecSUB2000\models\KelTecSub2000_Mag.p3d";
		weight=160;
		itemSize[]={1,3};
		count=50;
		ammo="Bullet_9x19";
		ammoItems[]=
		{
			"Ammo_9x19"
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
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"impwmod\weapons\smg\keltecsub2000\data\keltecsub20001_destruct.rvmat"
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
