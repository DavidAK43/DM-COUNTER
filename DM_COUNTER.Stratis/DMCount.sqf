#define     DMDisplay         (uiNamespace getVariable "DM_DISPLAY") 
#define     DMctrl(ctrl)         ((uiNamespace getVariable "DM_DISPLAY") displayCtrl ctrl)
#define     EASTCOUNT         { alive _x && { ( side _x ) == east } } count allUnits
#define     WESTCOUNT         { alive _x && { ( side _x ) == west } } count allUnits

waitUntil { !( isNull DMDisplay ) };    
DMctrl(IDC_DM_TEXT_WEST_SOLDIER_COUNT) ctrlSettext format ["%1", WESTCOUNT ];
DMctrl(IDC_DM_TEXT_EAST_SOLDIER_COUNT) ctrlSetText format [ "%1", EASTCOUNT ];

nil  