// common defines

// RADIOS
#define RADIO_SR "ACRE_PRC343"
#define RADIO_MR "ACRE_PRC148"
#define RADIO_LR "ACRE_PRC117F"

// GEAR
#define BASE_MEDICAL "ACE_elasticBandage:4","ACE_packingBandage:4","ACE_tourniquet:2","ACE_splint"
#define MEDIC_MEDICAL "ACE_packingBandage:20","ACE_elasticBandage:20","ACE_splint:8","ACE_tourniquet:6","ACE_bloodIV:5","ACE_morphine:10","ACE_epinephrine:10"
#define BASE_TOOLS "ACE_MapTools","ACE_CableTie:2","ACE_Fortify","ACE_EntrenchingTool"
#define BASE_LEADER_TOOLS 
#define BASE_LINKED "ItemMap","ItemCompass","ItemWatch"
#define BASE_LEADER_LINKED 
#define BASE_FRAG "vn_m61_grenade_mag:2"
#define BASE_SMOKES "SmokeShell:2"
#define BASE_GRENADES BASE_FRAG,BASE_SMOKES
#define LEADER_SMOKES BASE_SMOKES,"SmokeShellGreen:2"
#define MEDIC_GRENADES BASE_SMOKES,BASE_SMOKES
#define CREW_GRENADES BASE_SMOKES,"SmokeShellGreen:2"
#define BASE_ENG "ACE_DefusalKit"
#define BASE_EXP "SatchelCharge_Remote_Mag:2"
#define BASE_MINE 
#define MINE_DETECTOR "ACE_VMM3"
#define BINOS "Binocular"
#define RANGE_FINDER BINOS
#define BASE_BALLISTICS 
#define BASE_ARTILLERY "ACE_artilleryTable"
#define VZ99 "potato_vz99_carryWeapon"
#define VZ99HE "potato_vz99_HE:6"

// OPTIX
#define WARSAW_OPTICS "cup_optic_1p63","cup_optic_ekp_8_02","cup_optic_okp_7","cup_optic_pso_1_1_open","rhs_acc_rakurspm","rhs_acc_1p87","rhs_acc_ekp8_18"
#define STANAG_OPTICS WARSAW_OPTICS,"hlc_optic_docterr","rhsusf_acc_eotech_552","rhsusf_acc_compm4","optic_aco_grn","optic_holosight","cup_optic_compm2_low","cup_optic_mars","rhsusf_acc_mrds","rhsusf_acc_rx01_nofilter","cup_optic_zddot","cup_optic_mepro_tri_clear","cup_optic_mepro_openx_orange","cup_optic_mepro","cup_optic_trijiconrx01_black","cup_optic_vortexrazor_uh1_black","cup_optic_zeisszpoint"

// FUNCTIONS
#define SAM_GEAR(BACKPACK,MAG) backpack[] = {BACKPACK}; backpackItems[] = {}; magazines[] += {MAG}; items[] += {BASE_MEDICAL};
#define MORTAR_GEAR(BACKPACK) backpack[] = {BACKPACK}; items[] += {BASE_ARTILLERY};

// FACES
#define F_C "WhiteHead_04","WhiteHead_08","WhiteHead_02","WhiteHead_18","WhiteHead_12","WhiteHead_13","WhiteHead_16","WhiteHead_27" // Caucasian
#define F_G "GreekHead_A3_06","GreekHead_A3_01","GreekHead_A3_02","GreekHead_A3_03"                     // Mediterranean (Greek)
#define F_M "PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03","PersianHead_A3_02"             // Middle-Eastern
#define F_P "AsianHead_A3_01","AsianHead_A3_02","AsianHead_A3_03","AsianHead_A3_06","AsianHead_A3_07"   // East-Asian
#define F_A "AfricanHead_01","AfricanHead_02","AfricanHead_03","TanoanHead_A3_01","TanoanHead_A3_08"   // African  

// NATIONALITIES
// North African - Mixed, Middle-Eastern/African 
#define MIXED "PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03","PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03","AfricanHead_01","AfricanHead_02","AfricanHead_03"
// North-American - Mixed, Caucasian/African/Asian/Middle-Eastern 
#define F_USA "WhiteHead_04","WhiteHead_18","WhiteHead_02","WhiteHead_04","WhiteHead_18","WhiteHead_02","WhiteHead_06","WhiteHead_03","WhiteHead_02","AfricanHead_01","AfricanHead_02","AfricanHead_03","AfricanHead_01","AfricanHead_02","TanoanHead_A3_08","AsianHead_A3_01","AsianHead_A3_02","AsianHead_A3_03","AsianHead_A3_01","AsianHead_A3_02","AsianHead_A3_03","PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03" 
// Russian - Mixed, Caucasian/Asian
#define F_RUS "WhiteHead_04","WhiteHead_04","WhiteHead_02","WhiteHead_04","WhiteHead_18","WhiteHead_02","WhiteHead_04","WhiteHead_08","WhiteHead_02","WhiteHead_06","WhiteHead_08","WhiteHead_02","AsianHead_A3_01","AsianHead_A3_02","AsianHead_A3_03"
// British - Mixed, Caucasian/Middle-Eastern/African
#define F_GBR "WhiteHead_04","WhiteHead_03","WhiteHead_02","WhiteHead_04","WhiteHead_03","WhiteHead_02","WhiteHead_04","WhiteHead_08","WhiteHead_02","AfricanHead_01","AfricanHead_02","AfricanHead_03","PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03"
// French - Mixed, Caucasian/Middle-Eastern/African
#define F_FRA "WhiteHead_04","WhiteHead_06","WhiteHead_08","WhiteHead_06","WhiteHead_03","WhiteHead_02","WhiteHead_04","WhiteHead_03","WhiteHead_02","GreekHead_A3_01","GreekHead_A3_02","GreekHead_A3_03","GreekHead_A3_01","GreekHead_A3_02","GreekHead_A3_03","GreekHead_A3_01","GreekHead_A3_02","GreekHead_A3_03","AsianHead_A3_01","AsianHead_A3_02","AsianHead_A3_03","PersianHead_A3_01","PersianHead_A3_02","PersianHead_A3_03"
// Greek - Caucasian/Mediterranean
#define F_MED "GreekHead_A3_06","GreekHead_A3_11","GreekHead_A3_02","GreekHead_A3_12","GreekHead_A3_13","GreekHead_A3_02","GreekHead_A3_03","WhiteHead_06","WhiteHead_03","WhiteHead_02" 
// Mixed - All
#define F_MN F_C,F_M,F_P,F_A,F_G
