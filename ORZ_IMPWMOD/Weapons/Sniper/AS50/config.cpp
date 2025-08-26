class CfgPatches
{
	class IMP_AS50
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Firearms"};
		magazines[] = {};
		ammo[] = {};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class OpticsInfoRifle;
class cfgWeapons
{
	class Rifle_Base;
	class IMP_AS50_Base: Rifle_Base
	{
		scope = 0;		
		displayName = "AS50";
		descriptionShort = "$STR_AS50D";				
		model = "IMPWMOD\Weapons\Sniper\AS50\models\AS50.p3d";
		attachments[] = {"weaponOpticsHunting","weaponWrap"};
		weight = 12000;
		absorbency = 0.0;
		repairableWithKits[] = {1};//кит для починки
		repairCosts[] = {10};//сколько % будет снимать за починку из кита
		initSpeedMultiplier = 1;
		PPDOFProperties[] = {1,0.5,50,160,4,10};//
		WeaponLength = 1.406;
		barrelArmor = 4.0;		
		chamberedRound = "";
		chamberSize = 1;
		chamberableFrom[] = {"IMP_Ammo_127x99"};
		magazines[] = {"IMP_Mag_AS50_10rnd"};		
		ejectType = 1;
		itemSize[] = {10,3};
		recoilModifier[] = {1,1,1};//модификатор отдачи
		simpleHiddenSelections[] = {"hide_barrel"};
		hiddenSelections[] = {"camoflage"};		
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[]= {"AX50_Shot_SoundSet","AX50_Tail_SoundSet","AX50_InteriorTail_SoundSet"};
			soundSetShotExt[]={{"AX50_silencerHomeMade_SoundSet","AX50_silencerHomeMadeTail_SoundSet","AX50_silencerInteriorHomeMadeTail_SoundSet"}};
			reloadTime = 1.8;
			dispersion=0.0001;
			magazineSlot = "magazine";
		};
		class NoiseShoot
		{
			strength=80;
			type="shot";
		};
		class Particles
		{
			class OnFire
			{
				class MuzzleFlash
				{
					ignoreIfSuppressed=1;
					illuminateWorld=1;
					overridePoint="Usti hlavne";
				};
				class ChamberFlash
				{
					overridePoint="dust_point";
					overrideParticle="weapon_dust_izh18_01";
				};
			};
			class OnOverheating
			{
				maxOverheatingValue=8;
				shotsToStartOverheating=4;
				overheatingDecayInterval=1;
				class SmokingBarrel1
				{
					overrideParticle="smoking_barrel_small";
					onlyWithinOverheatLimits[]={0,0.60000002};
					positionOffset[]={0.1,0,0};
					onlyWithinRainLimits[]={0,0.2};
				};
				class SmokingBarrel2
				{
					overrideParticle="smoking_barrel";
					onlyWithinOverheatLimits[]={0.60000002,1};
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
					overrideParticle="weapon_shot_chamber_smoke";
					overridePoint="Nabojnicestart";
				};
			};
		};
		class OpticsInfo: OpticsInfoRifle
		{
			memoryPointCamera = "eye";
			discreteDistance[] = {100};
			discreteDistanceInitIndex = 0;
			modelOptics = "-";
			distanceZoomMin = 100;
			distanceZoomMax = 100;
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class walkErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 1;
				};
				class walkErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_R_SoundSet";
					id = 2;
				};
				class runErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 3;
				};
				class runErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_R_SoundSet";
					id = 4;
				};
				class sprintErc_L
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 5;
				};
				class sprintErc_R
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 6;
				};
				class walkCro_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 21;
				};
				class walkCro_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 22;
				};
				class runCro_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 23;
				};
				class runCro_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 24;
				};
				class walkProne_L
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 31;
				};
				class walkProne_R
				{
					soundSet = "Weapon_Movement_HRifle_walkCro_SoundSet";
					id = 32;
				};
				class runProne_L
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 33;
				};
				class runProne_R
				{
					soundSet = "Weapon_Movement_HRifle_runCro_SoundSet";
					id = 34;
				};
				class jumpErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 35;
				};
				class jumpErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 36;
				};
				class landFootErc_L
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 37;
				};
				class landFootErc_R
				{
					soundSet = "Weapon_Movement_HRifle_landFootErc_SoundSet";
					id = 38;
				};
				class walkRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 51;
				};
				class walkRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_walkRasErc_SoundSet";
					id = 52;
				};
				class runRasErc_L
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 53;
				};
				class runRasErc_R
				{
					soundSet = "Weapon_Movement_HRifle_runRasErc_SoundSet";
					id = 54;
				};
				class HandStep_L
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 61;
				};
				class HandStep_R
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 62;
				};
				class HandStep_Hard_L
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 63;
				};
				class HandStep_Hard_R
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 64;
				};
				class landFeetErc
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 100;
				};
				class Weapon_Movement_HRifle_Walk
				{
					soundSet = "Weapon_Movement_HRifle_walkErc_L_SoundSet";
					id = 101;
				};
				class Weapon_Movement_HRifle_Run
				{
					soundSet = "Weapon_Movement_HRifle_runErc_L_SoundSet";
					id = 102;
				};
				class Weapon_Movement_HRifle_Sprint
				{
					soundSet = "Weapon_Movement_HRifle_sprintErc_SoundSet";
					id = 103;
				};
				class Weapon_Movement_HRifle_Land
				{
					soundSet = "Weapon_Movement_HRifle_landFeetErc_SoundSet";
					id = 104;
				};
				class Char_Gestures_Hand_Grab_Rifle
				{
					soundSet = "Char_Gestures_Hand_Grab_FabricRifle_SoundSet";
					id = 892;
				};
			};
		};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 2000;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_destruct.rvmat"}}
					};
				};
			};
		};	
	};
	class IMP_AS50: IMP_AS50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\AS50\data\AS50_co.paa"};		
	};	
	class IMP_AS50_1: IMP_AS50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\AS50\data\AS50_1_co.paa"};				
	};
	class IMP_AS50_2: IMP_AS50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\AS50\data\AS50_2_co.paa"};				
	};
	class IMP_AS50_3: IMP_AS50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\AS50\data\AS50_3_co.paa"};				
	};
	class IMP_AS50_4: IMP_AS50_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\AS50\data\AS50_4_co.paa"};		
	};
};
class cfgMagazines
{
	class Magazine_Base;
	class IMP_Mag_AS50_10rnd: Magazine_Base
	{
		scope = 2;
		displayName = "$STR_AS50DMag";
		descriptionShort = "$STR_AS50DMagD";
		model = "IMPWMOD\Weapons\Sniper\AS50\models\AS50_Mag.p3d";
		weight = 600;
		itemSize[] = {3,3};
		count = 10;
		ammo = "IMP_Bullet_127x99";
		ammoItems[] = {"IMP_Ammo_127x99"};
		tracersEvery = 0;
		hiddenSelections[] = {"camoflage"};		
		hiddenSelectionsTextures[] = {"IMPWMOD\Weapons\Sniper\AS50\data\AS50_Mag_co.paa"};	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = 
					{
						{1.0,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_Mag.rvmat"}},
						{0.7,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_Mag.rvmat"}},
						{0.5,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_Mag_damage.rvmat"}},
						{0.3,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_Mag_damage.rvmat"}},
						{0.0,{"IMPWMOD\Weapons\Sniper\AS50\data\AS50_Mag_destruct.rvmat"}}
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

class CfgNonAIVehicles
{
    class ProxyAttachment;
    class ProxyAS50_Mag: ProxyAttachment
    {
        scope = 2;
        inventorySlot = "magazine";
        model="IMPWMOD\Weapons\Sniper\AS50\models\AS50_Mag.p3d";
    };
};