class CfgPatches
{
	class IMP_Pistol_MP443
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Pistols",
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
class OpticsInfoPistol;
class cfgWeapons
{
	class Pistol_Base;
	class IMP_MP443_Base: Pistol_Base
	{
		scope=0;

		weight=1106;
		absorbency=0;
		repairableWithKits[]={1};
		repairCosts[]={25};
		PPDOFProperties[]={1,0.89999998,10,250,4,10};
		WeaponLength=0.204;
		barrelArmor=1.523;
		initSpeedMultiplier=1;
		chamberSize=1;
		chamberedRound="";
		magazines[]=
		{
			"IMP_Mag_MP443_18Rnd"
		};
		chamberableFrom[]=
		{
			"Ammo_45ACP"
		};
		magazineSwitchTime=0.23999999;
		ejectType=1;
		recoilModifier[]={1,1,1};
		swayModifier[]={1.3,1.3,0.80000001};
		hiddenSelections[]=
		{
			"camoGround"
		};
		modes[]=
		{
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
			reloadTime=0.13;
			recoil="recoil_1911";
			recoilProne="recoil_1911_prone";
			dispersion=0.0044999998;
			magazineSlot="magazine";
		};
		class NoiseShoot
		{
			strength=50;
			type="shot";
		};
		class OpticsInfo: OpticsInfoPistol
		{
			memoryPointCamera="eye";
			discreteDistance[]={25};
			discreteDistanceInitIndex=0;
			modelOptics="-";
			distanceZoomMin=100;
			distanceZoomMax=100;
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
	};
	class IMP_MP443: IMP_MP443_Base
	{
		scope=2;
		displayName="MP443";
		descriptionShort="$STR_IMP_Grach";
		hiddenSelections[]=
		{
			"camoflage"
		};
		model="IMPWMOD\Weapons\Pistol\MP443\models\MP443.p3d";
		attachments[]=
		{
			"pistolFlashlight",
			"pistolMuzzle"
		};
		itemSize[]={3,3};
		hiddenSelectionsTextures[]=
		{
			"IMPWMOD\Weapons\Pistol\MP443\data\MP443_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"IMPWMOD\Weapons\Pistol\MP443\data\MP443.rvmat"
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
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_MP443_18Rnd : Magazine_Base
	{
		scope=2;
		displayName="$STR_IMP_Mp443mag1";
		descriptionShort="$STR_IMP_Mp443mag2";
		model="IMPWMOD\Weapons\Pistol\MP443\models\MP443_Mag.p3d";
		weight=68;
		itemSize[]={1,2};
		count=18;
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		ammo="Bullet_45ACP";
		ammoItems[]=
		{
			"Ammo_45ACP"
		};
		tracersEvery=0;
		mass=10;
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
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_Mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_Mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_Mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_Mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"IMPWMOD\Weapons\Pistol\MP443\data\MP443_Mag_destruct.rvmat"
							}
						}
					};
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
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyMP443_Mag: ProxyAttachment
	{
		scope=2;
		inventorySlot="magazine";
		model="IMPWMOD\Weapons\Pistol\MP443\models\MP443_Mag.p3d";
	};
	class ProxyMP443: ProxyAttachment
	{
		scope=2;
		inventorySlot="pistol";
		model="IMPWMOD\Weapons\Pistol\MP443\models\MP443.p3d";
	};
};

class CfgSoundShaders {
	class baseCharacter_SoundShader;
	class base_closeShot_SoundShader;
	class base_midShot_SoundShader;
	class base_distShot_SoundShader;
	
	class MP443_Shot_SoundShader : base_closeShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Pistol\MP443\sound\MP443_Shot", 1}};
		volume = 1.0;
		range = 150;
		rangeCurve = "closeShotCurve";
	};
	
	class MP443_midshot_SoundShader : base_midShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Pistol\MP443\sound\MP443_Shot", 1}};
		volume = 0.5;
		range = 400;
		
	};
	
	class MP443_distShot_SoundShader : base_distShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Pistol\MP443\sound\MP443_Shot", 1}};
		volume = 0.1;
		range = 600;
		
	};
	
	class MP443_Suppressed_Shot_SoundShader : base_closeShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Pistol\MP443\sound\MP443_Shot_Silence", 1}};
		volume = 0.4;
		range = 200;
		rangeCurve = "closeShotCurve";
	};
	
	class MP443_Suppressed_midshot_SoundShader : base_midShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Pistol\MP443\sound\MP443_Shot_Silence", 1}};
		volume = 0.3;
		range = 400;
		
	};
	
	class MP443_Suppressed_distShot_SoundShader : base_distShot_SoundShader {
		samples[] = {{"IMPWMOD\Weapons\Pistol\MP443\sound\MP443_Shot_Silence", 1}};
		volume = 0.1;
		range = 600;
		
	};
};

class CfgSoundSets {
	class Rifle_Shot_Base_SoundSet;
	class rifle_tail_Base_soundset;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerHomemade_Base_SoundSet;
	class Rifle_silencerHomemadeTail_Base_SoundSet;
	class Rifle_silencerInteriorHomeMadeTail_Base_SoundSet;
	class baseCharacter_SoundSet;
	
	class MP443_Shot_SoundSet : Rifle_Shot_Base_SoundSet {
		soundShaders[] = {"MP443_Shot_SoundShader", "MP443_midShot_SoundShader", "MP443_distShot_SoundShader"};
	};
	
	class MP443_Shot_Supp_SoundSet : Rifle_silencerHomemade_Base_SoundSet {
		soundShaders[] = {"MP443_Suppressed_Shot_SoundShader", "MP443_Suppressed_midshot_SoundShader", "MP443_Suppressed_distShot_SoundShader"};
	};
};
