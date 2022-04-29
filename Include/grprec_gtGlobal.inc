!BOF
!
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtGlobal.inc
! Date-Time:    2022/04/28 - 03:11:49PM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!Region
! Name:         gtGlobal
! Prefix:       gtGLO
! Description:  Global Definitions
!EndRegion
!
!-Record-
!
!Region
GTGLO_tRec                                GROUP,TYPE,BINDABLE,PRE(rGTGLO)
defIntl                                     GROUP,NAME('defIntl|GROUP|@S1|[0000-0000]|PR(''def Intl:'')|CO(''def Intl'')')                                                         ! [0000-0000] 
intl_code_def                                 GROUP,NAME('intl_code_def|GROUP|@S20|[0000-0000]|PR(''intl code def:'')|CO(''intl code def'')')                                      ! [0000-0000] 
ic_led                                          STRING(9),NAME('ic_led|STRING(9)|@S9|[0001-0009]|PR(''Default Language:'')|CO(''LED'')')                                           ! [0001-0009] Language default.
ic_le                                           STRING(9),NAME('ic_le|STRING(9)|@S9|[0010-0018]|PR(''Language:'')|CO(''LE'')')                                                     ! [0010-0018] Language.
ic_cu                                           STRING(9),NAME('ic_cu|STRING(9)|@S9|[0019-0027]|PR(''Currency:'')|CO(''CU'')')                                                     ! [0019-0027] Currency.
ic_cr                                           STRING(9),NAME('ic_cr|STRING(9)|@S9|[0028-0036]|PR(''Calendar:'')|CO(''CR'')')                                                     ! [0028-0036] Calendar.
ic_tz                                           STRING(9),NAME('ic_tz|STRING(9)|@S9|[0037-0045]|PR(''Time Zone:'')|CO(''TZ'')')                                                    ! [0037-0045] Time zone.
ic_mc                                           STRING(9),NAME('ic_mc|STRING(9)|@S9|[0046-0054]|PR(''Measure Class:'')|CO(''MC'')')                                                ! [0046-0054] Measure class.
ic_md                                           STRING(9),NAME('ic_md|STRING(9)|@S9|[0055-0063]|PR(''Measure Dimension:'')|CO(''MD:'')')                                           ! [0055-0063] Measure dimension.
ic_mu                                           STRING(9),NAME('ic_mu|STRING(9)|@S9|[0064-0072]|PR(''Unit of Measure:'')|CO(''MU'')')                                              ! [0064-0072] Unit of measure.
                                              END                                                                                                                                  ! [0072-0072] 
i_code                                        STRING(9),DIM(8),OVER(intl_code_def),NAME('i_code|STRING(9)|@S9|[0072-0072]|PR(''I-CODE:'')|CO(''I-CODE'')')                         ! [0072-0072] I-CODE:
intl_guid_def                                 GROUP,NAME('intl_guid_def|GROUP|@S20|[0072-0072]|PR(''intl guid def:'')|CO(''intl guid def'')')                                      ! [0072-0072] 
ig_led                                          STRING(16),NAME('ig_led|STRING(16)|@S16|[0073-0088]|PR(''Language Default:'')|CO(''LED'')')                                        ! [0073-0088] Language default.
ig_le                                           STRING(16),NAME('ig_le|STRING(16)|@S16|[0089-0104]|PR(''Language:'')|CO(''LE'')')                                                  ! [0089-0104] Language.
ig_cu                                           STRING(16),NAME('ig_cu|STRING(16)|@S16|[0105-0120]|PR(''Currency:'')|CO(''CU'')')                                                  ! [0105-0120] Currency.
ig_cr                                           STRING(16),NAME('ig_cr|STRING(16)|@S16|[0121-0136]|PR(''Currency:'')|CO(''CR'')')                                                  ! [0121-0136] Calendar.
ig_tz                                           STRING(16),NAME('ig_tz|STRING(16)|@S16|[0137-0152]|PR(''Time Zone:'')|CO(''TZ'')')                                                 ! [0137-0152] Time zone.
ig_mc                                           STRING(16),NAME('ig_mc|STRING(16)|@S16|[0153-0168]|PR(''Measure Class:'')|CO(''MC'')')                                             ! [0153-0168] Measure class.
ig_md                                           STRING(16),NAME('ig_md|STRING(16)|@S16|[0169-0184]|PR(''Measure Dimension:'')|CO(''MD'')')                                         ! [0169-0184] Measure dimension.
ig_mu                                           STRING(16),NAME('ig_mu|STRING(16)|@S16|[0185-0200]|PR(''Unit of Measure:'')|CO(''MU'')')                                           ! [0185-0200] Unit of measure.
                                              END                                                                                                                                  ! [0200-0200] 
i_guid                                        STRING(16),DIM(8),OVER(intl_guid_def),NAME('i_guid|STRING(16)|@S16|[0200-0200]|PR(''I-GUID:'')|CO(''I-GUID'')')                      ! [0200-0200] I-GUID:
area_code_def                                 GROUP,NAME('area_code_def|GROUP|@S1|[0200-0200]|PR(''area code def:'')|CO(''area code def'')')                                       ! [0200-0200] 
ac_ga                                           STRING(9),NAME('ac_ga|STRING(9)|@S9|[0201-0209]|PR(''Star:'')|CO(''ST'')')                                                         ! [0201-0209] Star.
ac_gb                                           STRING(9),NAME('ac_gb|STRING(9)|@S9|[0210-0218]|PR(''Planet:'')|CO(''PT'')')                                                       ! [0210-0218] Planet.
ac_gc                                           STRING(9),NAME('ac_gc|STRING(9)|@S9|[0219-0227]|PR(''Continent:'')|CO(''CO'')')                                                    ! [0219-0227] Continent.
ac_gd                                           STRING(9),NAME('ac_gd|STRING(9)|@S9|[0228-0236]|PR(''Continent Area:'')|CO(''AR'')')                                               ! [0228-0236] Continent area.
ac_ge                                           STRING(9),NAME('ac_ge|STRING(9)|@S9|[0237-0245]|PR(''Country:'')|CO(''CY'')')                                                      ! [0237-0245] Country.
ac_g1                                           STRING(9),NAME('ac_g1|STRING(9)|@S9|[0246-0254]|PR(''ADM1:'')|CO(''A1'')')                                                         ! [0246-0254] ADM1:
ac_g2                                           STRING(9),NAME('ac_g2|STRING(9)|@S9|[0255-0263]|PR(''ADM2:'')|CO(''A2'')')                                                         ! [0255-0263] ADM2:
ac_g3                                           STRING(9),NAME('ac_g3|STRING(9)|@S9|[0264-0272]|PR(''ADM3:'')|CO(''A3'')')                                                         ! [0264-0272] ADM3:
ac_g4                                           STRING(9),NAME('ac_g4|STRING(9)|@S9|[0273-0281]|PR(''ADM4:'')|CO(''A4'')')                                                         ! [0273-0281] ADM4:
ac_g5                                           STRING(9),NAME('ac_g5|STRING(9)|@S9|[0282-0290]|PR(''ADM5:'')|CO(''A5'')')                                                         ! [0282-0290] ADM5:
ac_g6                                           STRING(9),NAME('ac_g6|STRING(9)|@S9|[0291-0299]|PR(''ADM6:'')|CO(''A6'')')                                                         ! [0291-0299] ADM6:
ac_g7                                           STRING(9),NAME('ac_g7|STRING(9)|@S9|[0300-0308]|PR(''ADM7:'')|CO(''A7'')')                                                         ! [0300-0308] ADM7:
ac_g8                                           STRING(9),NAME('ac_g8|STRING(9)|@S9|[0309-0317]|PR(''ADM8:'')|CO(''A8'')')                                                         ! [0309-0317] ADM8:
ac_g9                                           STRING(9),NAME('ac_g9|STRING(9)|@S9|[0318-0326]|PR(''ADM9:'')|CO(''A9'')')                                                         ! [0318-0326] ADM9:
                                              END                                                                                                                                  ! [0326-0326] 
a_code                                        STRING(9),DIM(14),OVER(area_code_def),NAME('a_code|STRING(9)|@S9|[0326-0326]|PR(''A-CODE:'')|CO(''A-CODE'')')                        ! [0326-0326] A-CODE:
area_guid_def                                 GROUP,NAME('area_guid_def|GROUP|@S1|[0326-0326]|PR(''area guid def:'')|CO(''area guid def'')')                                       ! [0326-0326] 
ag_ga                                           STRING(16),NAME('ag_ga|STRING(16)|@S16|[0327-0342]|PR(''Star:'')|CO(''ST'')')                                                      ! [0327-0342] Star.
ag_gb                                           STRING(16),NAME('ag_gb|STRING(16)|@S16|[0343-0358]|PR(''Planet:'')|CO(''PT'')')                                                    ! [0343-0358] Planet.
ag_gc                                           STRING(16),NAME('ag_gc|STRING(16)|@S16|[0359-0374]|PR(''Continent:'')|CO(''CO'')')                                                 ! [0359-0374] Continent.
ag_gd                                           STRING(16),NAME('ag_gd|STRING(16)|@S16|[0375-0390]|PR(''Continent Area:'')|CO(''AR'')')                                            ! [0375-0390] Continent area.
ag_ge                                           STRING(16),NAME('ag_ge|STRING(16)|@S16|[0391-0406]|PR(''Country:'')|CO(''CY'')')                                                   ! [0391-0406] Country.
ag_g1                                           STRING(16),NAME('ag_g1|STRING(16)|@S16|[0407-0422]|PR(''ADM1:'')|CO(''A1'')')                                                      ! [0407-0422] ADM1:
ag_g2                                           STRING(16),NAME('ag_g2|STRING(16)|@S16|[0423-0438]|PR(''ADM2:'')|CO(''A2'')')                                                      ! [0423-0438] ADM2:
ag_g3                                           STRING(16),NAME('ag_g3|STRING(16)|@S16|[0439-0454]|PR(''ADM3:'')|CO(''A3'')')                                                      ! [0439-0454] ADM3:
ag_g4                                           STRING(16),NAME('ag_g4|STRING(16)|@S16|[0455-0470]|PR(''ADM4:'')|CO(''A4'')')                                                      ! [0455-0470] ADM4:
ag_g5                                           STRING(16),NAME('ag_g5|STRING(16)|@S16|[0471-0486]|PR(''ADM5:'')|CO(''A5'')')                                                      ! [0471-0486] ADM5:
ag_g6                                           STRING(16),NAME('ag_g6|STRING(16)|@S16|[0487-0502]|PR(''ADM6:'')|CO(''A6'')')                                                      ! [0487-0502] ADM6:
ag_g7                                           STRING(16),NAME('ag_g7|STRING(16)|@S16|[0503-0518]|PR(''ADM7'')|CO(''A7'')')                                                       ! [0503-0518] ADM7:
ag_g8                                           STRING(16),NAME('ag_g8|STRING(16)|@S16|[0519-0534]|PR(''ADM8:'')|CO(''A8'')')                                                      ! [0519-0534] ADM8:
ag_g9                                           STRING(16),NAME('ag_g9|STRING(16)|@S16|[0535-0550]|PR(''ADM9:'')|CO(''A9'')')                                                      ! [0535-0550] ADM9:
                                              END                                                                                                                                  ! [0550-0550] 
a_guid                                        STRING(16),DIM(14),OVER(area_guid_def),NAME('a_guid|STRING(16)|@S16|[0550-0550]|PR(''A-GUID:'')|CO(''A-GUID'')')                     ! [0550-0550] A-GUID:
                                            END                                                                                                                                    ! [0550-0550] 
                                          END
!EndRegion
!
!-Queue-
!
!Region
GTGLO_qRec                                QUEUE(GTGLO_tRec),TYPE,BINDABLE,PRE(qGTGLO)
                                          END
!EndRegion
!
!-Equates-
!
!Region
C_GTGLO_IC_LED                              EQUATE(1)
C_GTGLO_IC_LE                               EQUATE(2)
C_GTGLO_IC_CU                               EQUATE(3)
C_GTGLO_IC_CR                               EQUATE(4)
C_GTGLO_IC_TZ                               EQUATE(5)
C_GTGLO_IC_MC                               EQUATE(6)
C_GTGLO_IC_MD                               EQUATE(7)
C_GTGLO_IC_MU                               EQUATE(8)
C_GTGLO_I_CODE                              EQUATE(9)
C_GTGLO_IG_LED                              EQUATE(10)
C_GTGLO_IG_LE                               EQUATE(11)
C_GTGLO_IG_CU                               EQUATE(12)
C_GTGLO_IG_CR                               EQUATE(13)
C_GTGLO_IG_TZ                               EQUATE(14)
C_GTGLO_IG_MC                               EQUATE(15)
C_GTGLO_IG_MD                               EQUATE(16)
C_GTGLO_IG_MU                               EQUATE(17)
C_GTGLO_I_GUID                              EQUATE(18)
C_GTGLO_AC_GA                               EQUATE(19)
C_GTGLO_AC_GB                               EQUATE(20)
C_GTGLO_AC_GC                               EQUATE(21)
C_GTGLO_AC_GD                               EQUATE(22)
C_GTGLO_AC_GE                               EQUATE(23)
C_GTGLO_AC_G1                               EQUATE(24)
C_GTGLO_AC_G2                               EQUATE(25)
C_GTGLO_AC_G3                               EQUATE(26)
C_GTGLO_AC_G4                               EQUATE(27)
C_GTGLO_AC_G5                               EQUATE(28)
C_GTGLO_AC_G6                               EQUATE(29)
C_GTGLO_AC_G7                               EQUATE(30)
C_GTGLO_AC_G8                               EQUATE(31)
C_GTGLO_AC_G9                               EQUATE(32)
C_GTGLO_A_CODE                              EQUATE(33)
C_GTGLO_AG_GA                               EQUATE(34)
C_GTGLO_AG_GB                               EQUATE(35)
C_GTGLO_AG_GC                               EQUATE(36)
C_GTGLO_AG_GD                               EQUATE(37)
C_GTGLO_AG_GE                               EQUATE(38)
C_GTGLO_AG_G1                               EQUATE(39)
C_GTGLO_AG_G2                               EQUATE(40)
C_GTGLO_AG_G3                               EQUATE(41)
C_GTGLO_AG_G4                               EQUATE(42)
C_GTGLO_AG_G5                               EQUATE(43)
C_GTGLO_AG_G6                               EQUATE(44)
C_GTGLO_AG_G7                               EQUATE(45)
C_GTGLO_AG_G8                               EQUATE(46)
C_GTGLO_AG_G9                               EQUATE(47)
C_GTGLO_A_GUID                              EQUATE(48)
!EndRegion
!
!EOF
