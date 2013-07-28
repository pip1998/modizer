/*
 *  ModizerConstants.h
 *  modizer
 *
 *  Created by yoyofr on 22/08/10.
 *  Copyright 2010 __YoyoFR / Yohann Magnien__. All rights reserved.
 *
 */

//#define LOAD_PROFILE

#define MODIZER_COMPIL 1

#define DEFAULT_WAIT_TIME_MS  0.001   //in s
#define DEFAULT_WAIT_TIME_UADE_MS  0.001   //in s

//#define STATISTICS_URL @"http://localhost:8080"
#define STATISTICS_URL @"https://modizerdb.appspot.com"
#define USERGUIDE_URL @"UserGuide"
#define WORLDCHARTS_DEFAULTLIST @"ListALL"

#define BROWSE_LOCAL_MODE 0
#define BROWSE_MODLAND_MODE 1
#define BROWSE_HVSC_MODE 2
#define BROWSE_PLAYLIST_MODE 3
#define BROWSE_RATED_MODE 4
#define BROWSE_MOSTPLAYED_MODE 5
#define BROWSE_WEB_MODE 6
#define BROWSE_WORLDCHARTS_MODE 7
#define BROWSE_USERGUIDE_MODE 8

#define PLAYBACK_FREQ 44100

#define SOUND_BUFFER_SIZE_SAMPLE PLAYBACK_FREQ/30
#define SOUND_BUFFER_NB 60 //2seconds

#define SPECTRUM_BANDS 64
#define LOG2_SPECTRUM_BANDS 6
#define BEAT_THRESHOLD_MIN 256
#define BEAT_THRESHOLD_FACTOR 2.0f


#define SND_THREAD_PRIO 0.9f

#define SND_BUFFER_CURRENTTIME_FIX 1000

#define SEEK_START_MARGIN_FROM_END 2000
//#define GME_END_TRACK_DETECT_LENGTH_LIMIT_LOW 500
//#define GME_END_TRACK_DETECT_LENGTH_LIMIT_HIGH 1500
//#define GME_END_TRACK_DETECT_LENGTH_LIMIT_NBTRACK 5
#define GME_DEFAULT_LENGTH 150000
#define SID_DEFAULT_LENGTH 150000
#define SC68_DEFAULT_LENGTH 150000
#define MDX_DEFAULT_LENGTH 150000
#define PMD_DEFAULT_LENGTH 150000
#define AOSDK_DEFAULT_LENGTH 150000

#define SONG_DEFAULT_LENGTH 150000

#define MAX_STIL_DATA_LENGTH 4400

#define VERSION_MAJOR 1
#define VERSION_MAJOR_STR "1"
#define VERSION_MINOR 7
#define VERSION_MINOR_STR "7"


#define MAX_PL_ENTRIES 4096

#define MAX_RANDFX_TIME 15   //max is in fact min + max (seconds)
#define MIN_RANDFX_TIME 15
#define ALLOW_CHANGE_ON_BEAT_TIME 10   //change on beat is allowed after this threashold (seconds)

#define MODLAND_BASEDIR @"MODLAND"
#define HVSC_BASEDIR @"HVSC"

#define DATABASENAME_MAIN @"databaseMAIN.modizerdb"
#define DATABASENAME_USER @"database.modizerdb"
#define DATABASENAME_TMP @"database.modizerdb.old"

#define MODLAND_FTPHOST @"ftp.amigascne.org/mirrors/ftp.modland.com/"

#define MODLAND_FTPHOST1 @"ftp.amigascne.org/mirrors/ftp.modland.com/"
#define MODLAND_FTPHOST2 @"ftp://hangar18.exotica.org.uk/modland/"
#define MODLAND_FTPHOST3 @"ftp://modland.ziphoid.com/"

//#define HVSC_FTPHOST @"dl.xs4all.nl/pub/mirror/HVSC/C64Music/"
#define HVSC_FTPHOST @"hangar18.exotica.org.uk/exotica/exotica/media/audio/High_Voltage_Sid_Collection/C64Music/"

#define SUPPORTED_FILETYPE_MDX @"MDX"

#define SUPPORTED_FILETYPE_PMD @"M,M2,MZ"

#define SUPPORTED_FILETYPE_SID @"SID"

#define SUPPORTED_FILETYPE_STSOUND @"YM"

#define SUPPORTED_FILETYPE_SC68 @"SC68,SNDH"

#define SUPPORTED_FILETYPE_ASAP @"SAP,CMC,CM3,CMR,CMS,DMC,DLT,MPT,MPD,RMT,TMC,TM8,TM2"

#define SUPPORTED_FILETYPE_ARCHIVE @"7Z,ZIP,GZ,RAR,RSN,LZH,LHA"

#define SUPPORTED_FILETYPE_ARCFILE @"7Z,ZIP,GZ,RAR,RSN"
#define SUPPORTED_FILETYPE_GME_MULTISONGS @"NSF,NSFE,GBS,KES,HES"

#define SUPPORTED_FILETYPE_DUMB @"MOD,MDZ,FT,S3M,S3Z,STM,STZ,IT,ITZ,XM,XMZ,PTM,PTZ,MTM,MTZ,669,PSM,UMX,AM,J2B,DSM,AMF,OKT,OKTA"

#define SUPPORTED_FILETYPE_LHA_ARCHIVE @"LZH,LHA"

#define SUPPORTED_FILETYPE_UADE_WITHEXTFILE @"MDAT,SNG,DUM"

#define SUPPORTED_FILETYPE_UADE @"AST,AHX,THX,ADPCM,AMC,ABK,AAM,ALP,AON,AON4,AON8,ADSC,MOD_ADSC4,BSS,BD,BDS,UDS,KRIS,CIN,CORE,CUS,CUST,CUSTOM,\
CM,RK,RKB,DZ,MKIIO,DL,DL_DELI,DLN,DH,DW,DWOLD,DLM2,DM2,DLM1,DM1,DSR,DB,DIGI,DSC,DSS,DNS,EMS,EMSV6,EX,\
FC13,FC3,FC,FC14,FC4,FRED,GRAY,BFC,BSI,FC-BSI,FP,FW,GLUE,GM,EA,MG,HD,HIPC,SOC,EMOD,QC,IMS,DUM,IS,IS20,\
JAM,JC,JMF,JCB,JCBO,JPN,JPND,JP,JT,MON_OLD,JO,HIP,MCMD,SOG,HIP7,S7G,HST,KH,POWT,PT,LME,MON,MFP,HN,MTP2,\
THN,MC,MCR,MCO,MK2,MKII,AVP,MW,MAX,MCMD_ORG,MED,MMD0,MMD1,MMD2,MSO,MD,MMDC,DMU,MUG,DMU2,MUG2,MA,MM4,\
MM8,MMS,NTP,TWO,OCTAMED,OKT,ONE,DAT,PS,SNK,PVP,PAP,PSA,MOD_DOC,MOD15,MOD15_MST,MOD_NTK,MOD_NTK1,MOD_NTK2,\
MOD_NTKAMP,MOD_FLT4,MOD,MOD_COMP,!PM!,40A,40B,41A,50A,60A,61A,AC1,AC1D,AVAL,CHAN,CP,CPLX,CRB,DI,EU,FC-M,FCM,\
FT,FUZ,FUZZ,GMC,GV,HMC,HRT,HRT!,ICE,IT1,KEF,KEF7,KRS,KSM,LAX,MEXXMP,MPRO,NP,NP1,NP2,NOISEPACKER2,NP3,NOISEPACKER3,\
NR,NRU,NTPK,P10,P21,P30,P40A,P40B,P41A,P4X,P50A,P5A,P5X,P60,P60A,P61,P61A,P6X,PHA,PIN,PM,PM0,PM01,PM1,PM10C,PM18A,\
PM2,PM20,PM4,PM40,PMZ,POLK,PP10,PP20,PP21,PP30,PPK,PR1,PR2,PROM,PRU,PRU1,PRU2,PRUN,PRUN1,PRUN2,PWR,PYG,PYGM,PYGMY,\
SKT,SKYT,SNT,SNT!,ST2,ST26,ST30,STAR,STPK,TP,TP1,TP2,TP3,UN2,UNIC,UNIC2,WN,XAN,XANN,ZEN,PUMA,RJP,SNG,RIFF,\
RH,RHO,SA-P,SCUMM,S-C,SCN,SCR,SID1,SMN,SID2,MOK,SA,SONIC,SA_OLD,SMUS,SNX,TINY,SPL,SC,SCT,PSF,\
SFX,SFX13,TW,SM,SM1,SM2,SM3,SMPRO,BP,SNDMON,BP3,SJS,JD,DODA,SAS,SS,SB,JPO,JPOLD,SUN,SYN,SDR,OSP,\
ST,SYNMOD,TFMX1.5,TFHD1.5,TFMX7V,TFHD7V,MDAT,TFMXPRO,TFHDPRO,TFMX,MDST,THM,TF,TME,SG,DP,TRC,TRO,TRONIC,MOD15_UST,\
VSS,WB,ML,MOD15_ST-IV,AGI,TPU,QPA,SQT,QTS"
//deleted : MID

#define SUPPORTED_FILETYPE_HVL @"AHX,HVL"

#define SUPPORTED_FILETYPE_MODPLUG @"FT,MOD,S3M,XM,MED,MMD0,MMD1,MMD2,MMD3,MMD4,MMDC,MTM,IT,669,ULT,STM,FAR,WAV,AMF,AMS,DSM,MDL,OKT,DMF,PTM,DBM,MT2,AMF0,PSM,J2B,ABC,PAT,UMX"
//deleted : MID

#define SUPPORTED_FILETYPE_GME @"AY,GBS,GYM,HES,KSS,NSF,NSFE,SGC,SPC,VGM,VGZ"
#define SUPPORTED_FILETYPE_GME_WITHEXTFILE @"AY,GBS,GYM,HES,KSS,NSF,NSFE,SGC,SPC,VGM,VGZ"
#define SUPPORTED_FILETYPE_GME_EXT @"AY,GBS,GYM,HES,KSS,M3U,NSF,NSFE,SGC,SPC,VGM,VGZ"
//deleted: SAP

#define SUPPORTED_FILETYPE_ADPLUG @"A2M,ADL,AMD,AS3M,BAM,BMF,CFF,CMF,D00,DFM,DM0,DMO,DR0,DRO,DTM,HSC,HSP,IMF,KSM,LAA,LDS,M,MAD,MKJ,MSC,MTK,RAD,RAW,RIX,ROL,S3M,SA2,SAT,SCI,SNG,XAD,XMS,XSM"
//deleted : MID

#define SUPPORTED_FILETYPE_SEXYPSF_WITHEXTFILE @"MINIPSF"
#define SUPPORTED_FILETYPE_SEXYPSF @"PSF,MINIPSF"
#define SUPPORTED_FILETYPE_SEXYPSF_EXT @"PSF,MINIPSF,PSFLIB"

#define SUPPORTED_FILETYPE_AOSDK_WITHEXTFILE @"MINIPSF2,MINISPU,MINIDSF,MINIQSF,MINISSF"
#define SUPPORTED_FILETYPE_AOSDK @"PSF2,MINIPSF2,SPU,MINISPU,DSF,MINIDSF,QSF,MINIQSF,SSF,MINISSF"
#define SUPPORTED_FILETYPE_AOSDK_EXT @"PSF2,MINIPSF2,SPU,MINISPU,DSF,MINIDSF,QSF,MINIQSF,SSF,MINISSF,PSF2LIB,PSFLIB,SPULIB,DSFLIB,QSFLIB,SSFLIB"

#define SUPPORTED_FILETYPE_GSF_WITHEXTFILE @"MINIGSF"
#define SUPPORTED_FILETYPE_GSF @"GSF,MINIGSF"
#define SUPPORTED_FILETYPE_GSF_EXT @"GSF,MINIGSF,GSFLIB"

#define SUPPORTED_FILETYPE_WMIDI @"MID,MIDI"

#define extAMIGAList @"AST,AHX,THX,ADPCM,AMC,ABK,AAM,ALP,AON,AON4,AON8,ADSC,MOD_ADSC4,BSS,BD,BDS,UDS,KRIS,CIN,CORE,CUS,CUST,CUSTOM,CM,RK,RKB,DZ,MKIIO,DL,DL_DELI,DLN,DH,DW,DWOLD,DLM2,DM2,DLM1,DM1,DSR,DB,DIGI,DSC,DSS,DNS,EMS,EMSV6,EX,FC13,FC3,FC,FC14,FC4,FRED,GRAY,BFC,BSI,FC-BSI,FP,FW,GLUE,GM,EA,MG,HD,HIPC,SOC,EMOD,QC,IMS,DUM,IS,IS20,JAM,JC,JMF,JCB,JCBO,JPN,JPND,JP,JT,MON_OLD,JO,HIP,MCMD,SOG,HIP7,S7G,HST,KH,POWT,PT,LME,MON,MFP,HN,MTP2,THN,MC,MCR,MCO,MK2,MKII,AVP,MW,MAX,MCMD_ORG,MED,MMD0,MMD1,MMD2,MSO,MD,MMDC,DMU,MUG,DMU2,MUG2,MA,MM4,MM8,MMS,NTP,TWO,OCTAMED,OKT,ONE,DAT,PS,SNK,PVP,PAP,PSA,MOD_DOC,MOD15,MOD15_MST,MOD_NTK,MOD_NTK1,MOD_NTK2,MOD_NTKAMP,MOD_FLT4,MOD,MOD_COMP,!PM!,40A,40B,41A,50A,60A,61A,AC1,AC1D,AVAL,CHAN,CP,CPLX,CRB,DI,EU,FC-M,FCM,FT,FUZ,FUZZ,GMC,GV,HMC,HRT,HRT!,ICE,IT1,KEF,KEF7,KRS,KSM,LAX,MEXXMP,MPRO,NP,NP1,NP2,NOISEPACKER2,NP3,NOISEPACKER3,NR,NRU,NTPK,P10,P21,P30,P40A,P40B,P41A,P4X,P50A,P5A,P5X,P60,P60A,P61,P61A,P6X,PHA,PIN,PM,PM0,PM01,PM1,PM10C,PM18A,PM2,PM20,PM4,PM40,PMZ,POLK,PP10,PP20,PP21,PP30,PPK,PR1,PR2,PROM,PRU,PRU1,PRU2,PRUN,PRUN1,PRUN2,PWR,PYG,PYGM,PYGMY,SKT,SKYT,SNT,SNT!,ST2,ST26,ST30,STAR,STPK,TP,TP1,TP2,TP3,UN2,UNIC,UNIC2,WN,XAN,XANN,ZEN,PUMA,RJP,SNG,RIFF,RH,RHO,SA-P,SCUMM,S-C,SCN,SCR,SID1,SMN,SID2,MOK,SA,SONIC,SA_OLD,SMUS,SNX,TINY,SPL,SC,SCT,SFX,SFX13,TW,SM,SM1,SM2,SM3,SMPRO,BP,SNDMON,BP3,SJS,JD,DODA,SAS,SS,SB,JPO,JPOLD,SUN,SYN,SDR,OSP,ST,SYNMOD,TFMX1.5,TFHD1.5,TFMX7V,TFHD7V,MDAT,TFMXPRO,TFHDPRO,TFMX,MDST,THM,TF,TME,SG,DP,TRC,TRO,TRONIC,MOD15_UST,VSS,WB,ML,MOD15_ST-IV,AGI,TPU,QPA,SQT,QTS"
#define extPCList @"FT,MOD,S3M,XM,MED,MMD0,MMD1,MMD2,MMD3,MMD4,MMDC,MTM,IT,669,ULT,STM,FAR,WAV,AMF,AMS,DSM,MDL,OKT,DMF,PTM,DBM,MT2,AMF0,PSM,J2B,ABC,PAT,UMX,A2M,ADL,AMD,AS3M,BAM,BMF,CFF,CMF,D00,DFM,DM0,DMO,DR0,DRO,DTM,HSC,HSP,IMF,KSM,LAA,LDS,M,MAD,MKJ,MSC,MTK,RAD,RAW,RIX,ROL,SA2,SAT,SCI,SNG,XAD,XMS,XSM"
#define extC64ChipList @"SID,AHX,HVL"
#define extSNESList @"SPC,RSN"
#define extNESList @"NSF,NSFE"
#define extGBList @"GBS"
#define extSEGAMDList @"GYM,VGM,VGZ"
#define extNECList @"HES"
#define extMSXList @"KSS"
#define extPOKEYList @"SAP,CMC,CM3,CMR,CMS,DMC,DLT,MPT,MPD,RMT,TMC,TM8,TM2"
#define extYMAYList @"YM,AY"
#define extATARISTList @"SC68,SNDH"
#define extPS1List @"PSF,MINIPSF,SPU,MINISPU"
#define extPS2List @"PSF2,MINIPSF2"
#define extX68List @"MDX,PDX"
#define extGBAList @"GSF,MINIGSF"
#define extDCList @"DSF,MINIDSF"
#define extCAPCOMList @"QSF,MINIQSF"
#define extSATList @"SSF,MINISSF"
#define extMIDIList @"MID,MIDI"
#define extPC98List @"M,M2,MZ"
