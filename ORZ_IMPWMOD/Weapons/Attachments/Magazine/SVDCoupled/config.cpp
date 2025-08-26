class CfgPatches
{
	class IMP_Mag_SVD_Coupled
	{
		units[] = {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Magazines",
			"DZ_Sounds_Effects",
			"DZ_Scripts"
		};
	};
};

class cfgWeapons
{
	class Rifle_Base;
	class SVD_Base: Rifle_Base
	{
		magazines[] += {"IMP_Mag_SVD_CoupledTape_20Rnd","IMP_Mag_SVD_CoupledClip_20Rnd","Mag_SVD_10Rnd"};
	};
};

class CfgMagazines
{
	class Mag_SVD_10Rnd;
	class IMP_Mag_SVD_CoupledTape_20Rnd: Mag_SVD_10Rnd
	{
		scope=2;
		displayName="$STR_IMP_svdmagcdu";
		descriptionShort="$STR_IMP_svdmagdesc";
		model="IMPWMOD\Weapons\Attachments\Magazine\SVDCoupled\models\SVDMagTape_Coupled.p3d";
		weight=240;
		weightPerQuantityUnit=9;
		itemSize[]={2,2};
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		count=20;
		ammo="Bullet_762x54";
		ammoItems[]=
		{
			"Ammo_762x54",
			"Ammo_762x54Tracer"
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
								"dz\weapons\attachments\data\svd_mag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"dz\weapons\attachments\data\svd_mag.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"dz\weapons\attachments\data\svd_mag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"dz\weapons\attachments\data\svd_mag_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"dz\weapons\attachments\data\svd_mag_destruct.rvmat"
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
	class IMP_Mag_SVD_CoupledClip_20Rnd: IMP_Mag_SVD_CoupledTape_20Rnd
	{
		scope=2;
		displayName="$STR_IMP_svdmagplasticclip";
		recoilModifier[]={0.95, 0.95, 1};
		swayModifier[]={0.95, 0.95, 1};
		descriptionShort="$STR_IMP_svdmagdesc";
		model="IMPWMOD\Weapons\Attachments\Magazine\SVDCoupled\models\SVDMagClip_Coupled.p3d";
	};
};

class CfgNonAIVehicles {
	class ProxyAttachment;


	class ProxySVDMagClip_Coupled : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\SVDCoupled\models\SVDMagClip_Coupled.p3d";
	};
	class ProxySVDMagTape_Coupled : ProxyAttachment {
		scope = 2;
		inventorySlot = "magazine";
		model = "IMPWMOD\Weapons\Attachments\Magazine\SVDCoupled\models\SVDMagTape_Coupled.p3d";
	};
};