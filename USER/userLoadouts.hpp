/*  Hier können eigene factions für grad-loadout eingetragen werden.
*   Anleitung im Wiki
*/


class bf_us_army: us_army {
	class AllUnits: AllUnits {};

	class Type:Type {

		class Soldier_F: Soldier_F {};

		//AT specialist
		class Soldier_AT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_smaw_green";
            secondaryWeaponOptics = "rhs_weap_optic_smaw";
            secondaryWeaponMagazine = "rhs_mag_smaw_HEAA";
		};

        //AT specialist assistant
		class soldier_AAT_F: Soldier_F {
            backpack = "rhsusf_assault_eagleaiii_ocp";
            addItemsToBackpack[] = {
                "rhs_mag_smaw_HEAA"
            };
		};

		//mortar gunner
		class support_Mort_F: Soldier_F {
            binoculars = "ACE_VectorDay";
            addItemsToUniform[] = {
                "ACE_RangeTable_82mm",
                "ACE_Kestrel4500",
                "ACE_microDAGR"
            };
			backpack = "B_Mortar_01_support_F";
		};

		//mortar assistant
		class support_AMort_F: Soldier_F {
            binoculars = "ACE_VectorDay";
            addItemsToUniform[] = {
                "ACE_RangeTable_82mm",
                "ACE_Kestrel4500",
                "ACE_microDAGR"
            };
			backpack = "B_Mortar_01_weapon_F";
		};

		//HMG gunner
		class support_MG_F: Soldier_F {
            binoculars = "ACE_VectorDay";
			backpack = "RHS_M2_MiniTripod_Bag";
		};

		//hmg assistant
		class support_AMG_F: Soldier_F {
            binoculars = "ACE_VectorDay";
			backpack = "RHS_M2_Gun_Bag";
		};

		//crewman
		class crew_F: Soldier_F {
			headgear = "rhsusf_cvc_green_helmet";
		};
	};
};

class bf_rus_msv_w: rus_msv_w {
	class AllUnits: AllUnits {};

	class Type:Type {

		class Soldier_F: Soldier_F {};

		//AT specialist
		class Soldier_AT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg7";
            secondaryWeaponOptics = "rhs_acc_pgo7v";
            secondaryWeaponMagazine = "rhs_rpg7_PG7V_mag";
		};

        //AT specialist assistant
		class soldier_AAT_F: Soldier_F {
            backpack = "rhs_rpg_empty";
            addItemsToBackpack[] = {
                LIST_2("rhs_rpg7_PG7V_mag")
            };
		};

		//mortar gunner
		class support_Mort_F: Soldier_F {
            binoculars = "ACE_VectorDay";
            addItemsToUniform[] = {
                "ACE_RangeTable_82mm",
                "ACE_Kestrel4500",
                "ACE_microDAGR"
            };
			backpack = "O_Mortar_01_support_F";
		};

		//mortar assistant
		class support_AMort_F: Soldier_F {
            binoculars = "ACE_VectorDay";
            addItemsToUniform[] = {
                "ACE_RangeTable_82mm",
                "ACE_Kestrel4500",
                "ACE_microDAGR"
            };
			backpack = "O_Mortar_01_weapon_F";
		};

		//HMG gunner
		class support_MG_F: Soldier_F {
            binoculars = "ACE_VectorDay";
			backpack = "RHS_Kord_Tripod_Bag";
		};

		//hmg assistant
		class support_AMG_F: Soldier_F {
            binoculars = "ACE_VectorDay";
			backpack = "RHS_Kord_Gun_Bag";
		};

		//crewman
		class crew_F: Soldier_F {
			headgear = "rhs_tsh4";
		};
	};
};
