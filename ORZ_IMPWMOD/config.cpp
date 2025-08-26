class CfgPatches 
{
	class ORZ_IMPWMOD 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data", 
			"DZ_Scripts",  
			"DZ_Gear_Medical", 
			"DZ_Structures_Furniture", 
			"DZ_Characters", 
			"DZ_gear_food", 
			"DZ_Gear_Consumables", 
			"DZ_Characters_Vests", 
			"DZ_Gear_Containers", 
			"DZ_Weapons_Melee", 
			"DZ_Weapons_Magazines", 
			"DZ_Weapons_Supports",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Muzzles",
			"Paragon_Arsenal",
			"Paragon_Arsenal2",
			"IMPWMOD"
		};
	};
};
class CfgMods
{
	class ORZ_IMPWMOD
	{
		dir = ORZ_IMPWMOD;
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = ORZ_IMPWMOD;
		credits = "https://origemz.com";
		author = "https://origemz.com";
		authorID = "0";
		version = 0.1;
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		
		class defs
		{
			class imageSets
			{
				files[] = {"IMPCOREMOD\GUI\imagesets\Slots.imageset"};
			};
			
			class worldScriptModule {
				value = "";
				files[] = {"ORZ_IMPWMOD\scripts\4_World"};
			};
		};
	};
};
class CfgSlots
{
	class Slot_weaponBipod
	{
		name = "weaponBipod";
		displayName = "$STR_IMP_BipodSlot";
		modGhostIcon = "set:Slots image:Soshki";
	};
};
