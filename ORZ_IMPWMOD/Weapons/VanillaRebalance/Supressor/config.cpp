class CfgPatches
{
	class DZ_Weapons_Muzzles_OZW
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base;
    class ItemSuppressor;
    class ImprovisedSuppressor: ItemSuppressor
	{
		scope=2;
		inventorySlot[]+=
		{
			"Suppressor_308"
		};
    }
};