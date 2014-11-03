class RscText
{
    access = 0;
    type = 0;
    style = 0x02;
    idc = -1;
    colorBackground[] = {0,0,0,0.8};
    colorText[] = {1,1,1,0.8};
    text = "";
    fixedWidth = 0;
    x = 0;
    y = 0;
    h = 0;
    w = 0;
    shadow = 2;
    font = "puristaMedium";
    SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
    moving = 1;      
};

#define IDD_DM_DISPLAY                      60300
#define IDC_DM_TEXT_EAST_SOLDIER_COUNT         70300
#define IDC_DM_TEXT_WEST_SOLDIER_COUNT        70301
#define COLORRED                             { 0.78, 0.27, 0.27, 1 }
#define COLORBLUE                             { 0.31, 0.395, 0.72, 1 }

class DM_HUD
{
    idd = IDD_DM_DISPLAY; 
    duration = 1e+1000; 
    fadeIn = 0; 
    fadeOut = 0; 
    onLoad = "uiNamespace setVariable ['DM_Display', _this select 0];";  
    
    controls[]=
    {
        DM_TEXT_WEST_HEADER,
        DM_TEXT_EAST_HEADER,
        DM_TEXT_EAST_SOLDIER_COUNT,
        DM_TEXT_WEST_SOLDIER_COUNT
    };

    class DM_TEXT_WEST_HEADER: RscText
    {
        text = "Blufor";
        colorBackground[] = COLORBLUE;
        x = 0.927087 * safezoneW + safezoneX;
        y = 0.220681 * safezoneH + safezoneY;
        w = 0.0741219 * safezoneW;
        h = 0.028 * safezoneH;
    };
    class DM_TEXT_EAST_HEADER: RscText
    {
        text = "Opfor";
        colorBackground[] = COLORRED;
        x = 0.927351 * safezoneW + safezoneX;
        y = 0.346 * safezoneH + safezoneY;
        w = 0.0741219 * safezoneW;
        h = 0.028 * safezoneH;
    };
    class DM_TEXT_WEST_SOLDIER_COUNT: RscText
    {
        idc = IDC_DM_TEXT_WEST_SOLDIER_COUNT;
        colorText[] = COLORBLUE;
        x = 0.926954 * safezoneW + safezoneX;
        y = 0.248 * safezoneH + safezoneY;
        w = 0.072927 * safezoneW;
        h = 0.098 * safezoneH;
    };
    class DM_TEXT_EAST_SOLDIER_COUNT: RscText
    {
        idc = IDC_DM_TEXT_EAST_SOLDIER_COUNT;
        colorText[] = COLORRED;
        x = 0.927351 * safezoneW + safezoneX;
        y = 0.374 * safezoneH + safezoneY;
        w = 0.072927 * safezoneW;
        h = 0.098 * safezoneH;
    };
};  