if ( isServer ) then {
    {
        if ( !( isPlayer _x ) ) then {
            _x addEventHandler ["killed", { 
                    _nul = [ "DMCount.sqf" , "BIS_fnc_execVM", true ] call BIS_fnc_MP;
            }];
        };
    } forEach allUnits;
};

/* PLAYERS - MP AND SP COMPATIBLE */ 
if ( !( isDedicated ) ) then {
    waitUntil { !( isNull player ) && ( player == player ) }; 

    IDD_DM_DISPLAY                      =    60300;
    IDC_DM_TEXT_EAST_SOLDIER_COUNT         =    70300;
    IDC_DM_TEXT_WEST_SOLDIER_COUNT        =    70301;
    ( "DM_HUD_LAYER" call BIS_fnc_rscLayer ) cutRsc [ "DM_HUD","PLAIN" ];
    _nul = execVM "DMCount.sqf";    
    
    player addEventHandler ["killed", { 
        _nul = [ "DMCount.sqf", "BIS_fnc_execVM", true ] call BIS_fnc_MP;
    }];
};  