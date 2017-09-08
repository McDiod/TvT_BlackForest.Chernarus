params ["_unit","_weapon"];

if (!local _weapon) exitWith {};
if !(typeOf _weapon in ["B_Mortar_01_F","RHS_M2StaticMG_MiniTripod_D"]) exitWith {};
if (_weapon getVariable ["bf_weaponHandled",false]) exitWith {};

_weapon setVariable ["bf_weaponHandled",true,true];

if (typeOf _weapon == "B_Mortar_01_F") then {
    _weapon removeMagazineTurret ["8Rnd_82mm_Mo_Flare_white", [0]];
    _weapon removeMagazineTurret ["8Rnd_82mm_Mo_shells", [0]];
    _weapon removeMagazineTurret ["8Rnd_82mm_Mo_shells", [0]];
} else {
    _weapon removeMagazineTurret ["rhs_mag_100rnd_127x99_mag_Tracer_Red",[0]];
};
