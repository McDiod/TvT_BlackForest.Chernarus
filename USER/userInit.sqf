/*  Wird zum Missionsstart auf Server und Clients ausgeführt.
*   Funktioniert wie die init.sqf.
*/

enableEngineArtillery false;

if (isServer) then {
    [] execVM "USER\scripts\createProtectionMarkers.sqf";
};
