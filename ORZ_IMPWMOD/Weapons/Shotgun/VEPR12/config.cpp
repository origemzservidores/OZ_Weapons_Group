class CfgPatches
{
    class IMP_Weapons_VEPR12
    {
        units[]={"IMP_VEPR12"};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]={"DZ_Data", "DZ_Weapons_Firearms"};
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
    class IMP_VEPR12_Base : Rifle_Base
    {
        scope=0;
        weight=3600;
        absorbency=0;
        repairableWithKits[]={1};
        repairCosts[]={25};
        chamberSize=1;
        chamberedRound="";
        chamberableFrom[]={"Ammo_12gaPellets", "Ammo_12gaSlug", "Ammo_12gaRubberSlug", "Ammo_12gaBeanbag"};
        magazines[]={"IMP_Mag_VEPR12_20Rnd"};
        magazineSwitchTime=0.2;
        PPDOFProperties[]={1, 0.5, 10, 140, 4, 10};
        WeaponLength=0.95;
        barrelArmor=1.68;
        ejectType=1;
        recoilModifier[]={1, 1, 1};
        swayModifier[]={2.5, 2.5, 1.3};
		simpleHiddenSelections[]=
		{
			"hide_barrel", 
			"HandlesAK"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo6"
		};
        modes[]={"FullAuto", "SemiAuto"};
        class SemiAuto : Mode_SemiAuto
        {
            soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
            reloadTime=0.13;
            recoil="recoil_Saiga12";
            recoilProne="recoil_Saiga12_prone";
            dispersion=0.01;
            firespreadangle=1.5;
            magazineSlot="magazine";
        };
        class FullAuto : Mode_FullAuto
        {
            soundSetShot[]={"Saiga12_Shot_SoundSet", "Saiga12_Tail_SoundSet", "Saiga12_InteriorTail_SoundSet"};
            reloadTime=0.13;
            dispersion=0.0015;
            magazineSlot="magazine";
        };
        class OpticsInfo : OpticsInfoShotgun
        {
        };
        class InventorySlotsOffsets
        {
            class Shoulder
            {
                position[]={-0.02, 0.03, 0.1};
                orientation[]={0, 60, 0};
            };
            class Melee
            {
                position[]={-0.02, 0.02, -0.12};
                orientation[]={0, -60, 0};
            };
        };
        class Particles
        {
            class OnFire
            {
                class SmokeCloud
                {
                    overrideParticle="weapon_shot_mp5k_01";
                };
                class SmokeCloud2
                {
                    overrideParticle="weapon_shot_mp5k_01";
                };
                class SmokeCloud3BadlyDamaged
                {
                    overrideParticle="weapon_shot_mp5k_01";
                    onlyWithinHealthLabel[]={3, 4};
                };
                class MuzzleFlash
                {
                    overrideParticle="weapon_shot_mp5k_01";
                    illuminateWorld=1;
                };
                class BadlyDamagedChamberSmoke
                {
                    overrideParticle="weapon_shot_chamber_smoke";
                    overridePoint="Nabojnicestart";
                    overrideDirectionPoint="Nabojniceend";
                    onlyWithinHealthLabel[]={3, 4};
                };
                class BadlyDamagedChamberSmokeRaise
                {
                    overrideParticle="weapon_shot_chamber_smoke_raise";
                    overridePoint="Nabojnicestart";
                    onlyWithinHealthLabel[]={3, 4};
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
    };
    class IMP_VEPR12 : IMP_VEPR12_Base
    {
        scope=2;
        displayName="$STR_IMP_VEPR12";
        descriptionShort="$STR_IMP_VEPR12D";
        model="IMPWMOD\Weapons\Shotgun\VEPR12\models\VEPR12.p3d";
        itemSize[]={9,3};
        attachments[]=
		{
			"weaponFlashlight",
			"weaponButtstockAK",
			"weaponWrap",
			"grip1",
			"weaponOptics",
			"HandlesAK"
		};
		hiddenSelectionsTextures[]={"IMPWMOD\Weapons\Shotgun\VEPR12\data\magwell_co.paa", "IMPWMOD\Weapons\Shotgun\VEPR12\data\barrel_co.paa", "IMPWMOD\Weapons\Shotgun\VEPR12\data\mainbody_co.paa", "IMPWMOD\Weapons\Shotgun\VEPR12\data\upper_co.paa", "IMPWMOD\Weapons\Shotgun\VEPR12\data\gastubep_co.paa", "IMPWMOD\Weapons\Shotgun\VEPR12\data\hndgrd_co.paa"};
		hiddenSelectionsMaterials[]={"impwmod\weapons\shotgun\vepr12\data\magwell.rvmat", "impwmod\weapons\shotgun\vepr12\data\barrel.rvmat", "impwmod\weapons\shotgun\vepr12\data\mainbody.rvmat", "impwmod\weapons\shotgun\vepr12\data\upper.rvmat", "impwmod\weapons\shotgun\vepr12\data\gastubep.rvmat", "impwmod\weapons\shotgun\vepr12\data\hndgrd.rvmat"};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=1000;
                    healthLevels[]=
					{
						{1, {"impwmod\weapons\shotgun\vepr12\data\magwell.rvmat", "impwmod\weapons\shotgun\vepr12\data\barrel.rvmat", "impwmod\weapons\shotgun\vepr12\data\mainbody.rvmat", "impwmod\weapons\shotgun\vepr12\data\upper.rvmat", "impwmod\weapons\shotgun\vepr12\data\gastubep.rvmat", "impwmod\weapons\shotgun\vepr12\data\hndgrd.rvmat"}}, 
						{0.7, {"impwmod\weapons\shotgun\vepr12\data\magwell.rvmat", "impwmod\weapons\shotgun\vepr12\data\barrel.rvmat", "impwmod\weapons\shotgun\vepr12\data\mainbody.rvmat", "impwmod\weapons\shotgun\vepr12\data\upper.rvmat", "impwmod\weapons\shotgun\vepr12\data\gastubep.rvmat", "impwmod\weapons\shotgun\vepr12\data\hndgrd.rvmat"}}, 
						{0.5, {"impwmod\weapons\shotgun\vepr12\data\magwell_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\barrel_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\mainbody_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\upper_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\gastubep_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\hndgrd_damage.rvmat"}}, 
						{0.3, {"impwmod\weapons\shotgun\vepr12\data\magwell_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\barrel_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\mainbody_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\upper_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\gastubep_damage.rvmat", "impwmod\weapons\shotgun\vepr12\data\hndgrd_damage.rvmat"}}, 
						{0, {"impwmod\weapons\shotgun\vepr12\data\magwell_destruct.rvmat", "impwmod\weapons\shotgun\vepr12\data\barrel_destruct.rvmat", "impwmod\weapons\shotgun\vepr12\data\mainbody_destruct.rvmat", "impwmod\weapons\shotgun\vepr12\data\upper_destruct.rvmat", "impwmod\weapons\shotgun\vepr12\data\gastubep_destruct.rvmat", "impwmod\weapons\shotgun\vepr12\data\hndgrd_destruct.rvmat"}}
					};
                };
            };
        };
    };
};

class CfgMagazines
{
	class Magazine_Base;
	
	class IMP_Mag_VEPR12_20Rnd : Magazine_Base {
		scope = 2;
		displayName = "$STR_IMP_VEPR12Mag";
		descriptionShort = "$STR_IMP_VEPR12MagD";
		model = "IMPWMOD\Weapons\Shotgun\VEPR12\models\VEPR12Mag.p3d";
		weight = 300;
		itemSize[] = {1, 3};
		count = 20;
		ammo="Bullet_12GaugePellets";
        ammoItems[]={"Ammo_12gaPellets", "Ammo_12gaSlug", "Ammo_12gaRubberSlug", "Ammo_12gaBeanbag"};
		tracersEvery = 0;
		
		class DamageSystem {
			class GlobalHealth {
				class Health {
					hitpoints = 100;
					healthLevels[] = 
					{
						{1, {"IMPWMOD\Weapons\Shotgun\VEPR12\data\Magazine.rvmat"}}, 
						{0.7, {"IMPWMOD\Weapons\Shotgun\VEPR12\data\Magazine.rvmat"}}, 
						{0.5, {"IMPWMOD\Weapons\Shotgun\VEPR12\data\Magazine_damage.rvmat"}}, 
						{0.3, {"IMPWMOD\Weapons\Shotgun\VEPR12\data\Magazine_damage.rvmat"}}, 
						{0, {"IMPWMOD\Weapons\Shotgun\VEPR12\data\Magazine_destruct.rvmat"}}
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

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxyVEPR12Mag : ProxyAttachment 
	{
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Shotgun\VEPR12\models\VEPR12Mag.p3d";
	};
};