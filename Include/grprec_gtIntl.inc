!BOF
!
!Region Generate
!
! Dictionary:   C:\_GIT_\RobertArtigas\real\Dictionary\rybabc.dct
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtIntl.inc
! Date-Time:    2023/04/08 - 10:43:28AM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!EndRegion
!Region Header
! Name:         gtIntl
! Prefix:       gtINTL
! Description:  International Definitions
!EndRegion
!Region RecordDefinition
!
!-Record-
!
GTINTL_tRec                               GROUP,TYPE,BINDABLE,PRE(rGTINTL)
defIntl                                     GROUP,NAME('defIntl|GROUP|@S1|[0000-0000]|PR(''def Intl:'')|CO(''def Intl'')|ATTRIBUTE')                                               ! [0000-0000] 
intl_code_def                                 GROUP,NAME('intl_code_def|GROUP|@S20|[0000-0000]|PR(''intl code def:'')|CO(''intl code def'')|ATTRIBUTE')                            ! [0000-0000] 
ic_led                                          STRING(9),NAME('ic_led|STRING(9)|@S9|[0001-0009]|PR(''Default Language:'')|CO(''LED'')|ATTRIBUTE')                                 ! [0001-0009] Language default.
ic_le                                           STRING(9),NAME('ic_le|STRING(9)|@S9|[0010-0018]|PR(''Language:'')|CO(''LE'')|ATTRIBUTE')                                           ! [0010-0018] Language.
ic_cu                                           STRING(9),NAME('ic_cu|STRING(9)|@S9|[0019-0027]|PR(''Currency:'')|CO(''CU'')|ATTRIBUTE')                                           ! [0019-0027] Currency.
ic_cr                                           STRING(9),NAME('ic_cr|STRING(9)|@S9|[0028-0036]|PR(''Calendar:'')|CO(''CR'')|ATTRIBUTE')                                           ! [0028-0036] Calendar.
ic_tz                                           STRING(9),NAME('ic_tz|STRING(9)|@S9|[0037-0045]|PR(''Time Zone:'')|CO(''TZ'')|ATTRIBUTE')                                          ! [0037-0045] Time zone.
ic_mc                                           STRING(9),NAME('ic_mc|STRING(9)|@S9|[0046-0054]|PR(''Measure Class:'')|CO(''MC'')|ATTRIBUTE')                                      ! [0046-0054] Measure class.
ic_md                                           STRING(9),NAME('ic_md|STRING(9)|@S9|[0055-0063]|PR(''Measure Dimension:'')|CO(''MD:'')|ATTRIBUTE')                                 ! [0055-0063] Measure dimension.
ic_mu                                           STRING(9),NAME('ic_mu|STRING(9)|@S9|[0064-0072]|PR(''Unit of Measure:'')|CO(''MU'')|ATTRIBUTE')                                    ! [0064-0072] Unit of measure.
                                              END                                                                                                                                  ! [0072-0072] 
i_code                                        STRING(9),DIM(8),OVER(intl_code_def),NAME('i_code|STRING(9)|@S9|[0072-0072]|PR(''I-CODE:'')|CO(''I-CODE'')|ATTRIBUTE')               ! [0072-0072] I-CODE:
intl_guid_def                                 GROUP,NAME('intl_guid_def|GROUP|@S20|[0072-0072]|PR(''intl guid def:'')|CO(''intl guid def'')|ATTRIBUTE')                            ! [0072-0072] 
ig_led                                          STRING(16),NAME('ig_led|STRING(16)|@S16|[0073-0088]|PR(''Language Default:'')|CO(''LED'')|ATTRIBUTE')                              ! [0073-0088] Language default.
ig_le                                           STRING(16),NAME('ig_le|STRING(16)|@S16|[0089-0104]|PR(''Language:'')|CO(''LE'')|ATTRIBUTE')                                        ! [0089-0104] Language.
ig_cu                                           STRING(16),NAME('ig_cu|STRING(16)|@S16|[0105-0120]|PR(''Currency:'')|CO(''CU'')|ATTRIBUTE')                                        ! [0105-0120] Currency.
ig_cr                                           STRING(16),NAME('ig_cr|STRING(16)|@S16|[0121-0136]|PR(''Currency:'')|CO(''CR'')|ATTRIBUTE')                                        ! [0121-0136] Calendar.
ig_tz                                           STRING(16),NAME('ig_tz|STRING(16)|@S16|[0137-0152]|PR(''Time Zone:'')|CO(''TZ'')|ATTRIBUTE')                                       ! [0137-0152] Time zone.
ig_mc                                           STRING(16),NAME('ig_mc|STRING(16)|@S16|[0153-0168]|PR(''Measure Class:'')|CO(''MC'')|ATTRIBUTE')                                   ! [0153-0168] Measure class.
ig_md                                           STRING(16),NAME('ig_md|STRING(16)|@S16|[0169-0184]|PR(''Measure Dimension:'')|CO(''MD'')|ATTRIBUTE')                               ! [0169-0184] Measure dimension.
ig_mu                                           STRING(16),NAME('ig_mu|STRING(16)|@S16|[0185-0200]|PR(''Unit of Measure:'')|CO(''MU'')|ATTRIBUTE')                                 ! [0185-0200] Unit of measure.
                                              END                                                                                                                                  ! [0200-0200] 
i_guid                                        STRING(16),DIM(8),OVER(intl_guid_def),NAME('i_guid|STRING(16)|@S16|[0200-0200]|PR(''I-GUID:'')|CO(''I-GUID'')|ATTRIBUTE')            ! [0200-0200] I-GUID:
area_code_def                                 GROUP,NAME('area_code_def|GROUP|@S1|[0200-0200]|PR(''area code def:'')|CO(''area code def'')|ATTRIBUTE')                             ! [0200-0200] 
ac_ga                                           STRING(9),NAME('ac_ga|STRING(9)|@S9|[0201-0209]|PR(''Star:'')|CO(''ST'')|ATTRIBUTE')                                               ! [0201-0209] Star.
ac_gb                                           STRING(9),NAME('ac_gb|STRING(9)|@S9|[0210-0218]|PR(''Planet:'')|CO(''PT'')|ATTRIBUTE')                                             ! [0210-0218] Planet.
ac_gc                                           STRING(9),NAME('ac_gc|STRING(9)|@S9|[0219-0227]|PR(''Continent:'')|CO(''CO'')|ATTRIBUTE')                                          ! [0219-0227] Continent.
ac_gd                                           STRING(9),NAME('ac_gd|STRING(9)|@S9|[0228-0236]|PR(''Continent Area:'')|CO(''AR'')|ATTRIBUTE')                                     ! [0228-0236] Continent area.
ac_ge                                           STRING(9),NAME('ac_ge|STRING(9)|@S9|[0237-0245]|PR(''Country:'')|CO(''CY'')|ATTRIBUTE')                                            ! [0237-0245] Country.
ac_g1                                           STRING(9),NAME('ac_g1|STRING(9)|@S9|[0246-0254]|PR(''ADM1:'')|CO(''A1'')|ATTRIBUTE')                                               ! [0246-0254] ADM1:
ac_g2                                           STRING(9),NAME('ac_g2|STRING(9)|@S9|[0255-0263]|PR(''ADM2:'')|CO(''A2'')|ATTRIBUTE')                                               ! [0255-0263] ADM2:
ac_g3                                           STRING(9),NAME('ac_g3|STRING(9)|@S9|[0264-0272]|PR(''ADM3:'')|CO(''A3'')|ATTRIBUTE')                                               ! [0264-0272] ADM3:
ac_g4                                           STRING(9),NAME('ac_g4|STRING(9)|@S9|[0273-0281]|PR(''ADM4:'')|CO(''A4'')|ATTRIBUTE')                                               ! [0273-0281] ADM4:
ac_g5                                           STRING(9),NAME('ac_g5|STRING(9)|@S9|[0282-0290]|PR(''ADM5:'')|CO(''A5'')|ATTRIBUTE')                                               ! [0282-0290] ADM5:
ac_g6                                           STRING(9),NAME('ac_g6|STRING(9)|@S9|[0291-0299]|PR(''ADM6:'')|CO(''A6'')|ATTRIBUTE')                                               ! [0291-0299] ADM6:
ac_g7                                           STRING(9),NAME('ac_g7|STRING(9)|@S9|[0300-0308]|PR(''ADM7:'')|CO(''A7'')|ATTRIBUTE')                                               ! [0300-0308] ADM7:
ac_g8                                           STRING(9),NAME('ac_g8|STRING(9)|@S9|[0309-0317]|PR(''ADM8:'')|CO(''A8'')|ATTRIBUTE')                                               ! [0309-0317] ADM8:
ac_g9                                           STRING(9),NAME('ac_g9|STRING(9)|@S9|[0318-0326]|PR(''ADM9:'')|CO(''A9'')|ATTRIBUTE')                                               ! [0318-0326] ADM9:
                                              END                                                                                                                                  ! [0326-0326] 
a_code                                        STRING(9),DIM(14),OVER(area_code_def),NAME('a_code|STRING(9)|@S9|[0326-0326]|PR(''A-CODE:'')|CO(''A-CODE'')|ATTRIBUTE')              ! [0326-0326] A-CODE:
area_guid_def                                 GROUP,NAME('area_guid_def|GROUP|@S1|[0326-0326]|PR(''area guid def:'')|CO(''area guid def'')|ATTRIBUTE')                             ! [0326-0326] 
ag_ga                                           STRING(16),NAME('ag_ga|STRING(16)|@S16|[0327-0342]|PR(''Star:'')|CO(''ST'')|ATTRIBUTE')                                            ! [0327-0342] Star.
ag_gb                                           STRING(16),NAME('ag_gb|STRING(16)|@S16|[0343-0358]|PR(''Planet:'')|CO(''PT'')|ATTRIBUTE')                                          ! [0343-0358] Planet.
ag_gc                                           STRING(16),NAME('ag_gc|STRING(16)|@S16|[0359-0374]|PR(''Continent:'')|CO(''CO'')|ATTRIBUTE')                                       ! [0359-0374] Continent.
ag_gd                                           STRING(16),NAME('ag_gd|STRING(16)|@S16|[0375-0390]|PR(''Continent Area:'')|CO(''AR'')|ATTRIBUTE')                                  ! [0375-0390] Continent area.
ag_ge                                           STRING(16),NAME('ag_ge|STRING(16)|@S16|[0391-0406]|PR(''Country:'')|CO(''CY'')|ATTRIBUTE')                                         ! [0391-0406] Country.
ag_g1                                           STRING(16),NAME('ag_g1|STRING(16)|@S16|[0407-0422]|PR(''ADM1:'')|CO(''A1'')|ATTRIBUTE')                                            ! [0407-0422] ADM1:
ag_g2                                           STRING(16),NAME('ag_g2|STRING(16)|@S16|[0423-0438]|PR(''ADM2:'')|CO(''A2'')|ATTRIBUTE')                                            ! [0423-0438] ADM2:
ag_g3                                           STRING(16),NAME('ag_g3|STRING(16)|@S16|[0439-0454]|PR(''ADM3:'')|CO(''A3'')|ATTRIBUTE')                                            ! [0439-0454] ADM3:
ag_g4                                           STRING(16),NAME('ag_g4|STRING(16)|@S16|[0455-0470]|PR(''ADM4:'')|CO(''A4'')|ATTRIBUTE')                                            ! [0455-0470] ADM4:
ag_g5                                           STRING(16),NAME('ag_g5|STRING(16)|@S16|[0471-0486]|PR(''ADM5:'')|CO(''A5'')|ATTRIBUTE')                                            ! [0471-0486] ADM5:
ag_g6                                           STRING(16),NAME('ag_g6|STRING(16)|@S16|[0487-0502]|PR(''ADM6:'')|CO(''A6'')|ATTRIBUTE')                                            ! [0487-0502] ADM6:
ag_g7                                           STRING(16),NAME('ag_g7|STRING(16)|@S16|[0503-0518]|PR(''ADM7'')|CO(''A7'')|ATTRIBUTE')                                             ! [0503-0518] ADM7:
ag_g8                                           STRING(16),NAME('ag_g8|STRING(16)|@S16|[0519-0534]|PR(''ADM8:'')|CO(''A8'')|ATTRIBUTE')                                            ! [0519-0534] ADM8:
ag_g9                                           STRING(16),NAME('ag_g9|STRING(16)|@S16|[0535-0550]|PR(''ADM9:'')|CO(''A9'')|ATTRIBUTE')                                            ! [0535-0550] ADM9:
                                              END                                                                                                                                  ! [0550-0550] 
a_guid                                        STRING(16),DIM(14),OVER(area_guid_def),NAME('a_guid|STRING(16)|@S16|[0550-0550]|PR(''A-GUID:'')|CO(''A-GUID'')|ATTRIBUTE')           ! [0550-0550] A-GUID:
                                            END                                                                                                                                    ! [0550-0550] 
                                          END
!EndRegion
!Region QueueDefinition
!
!-Queue-
!
GTINTL_qRec                               QUEUE(GTINTL_tRec),TYPE,BINDABLE,PRE(qGTINTL)
                                          END
!EndRegion
!Region FieldEquates
!
!-Equates-
!
C_GTINTL_IC_LED                             EQUATE(1)
C_GTINTL_IC_LE                              EQUATE(2)
C_GTINTL_IC_CU                              EQUATE(3)
C_GTINTL_IC_CR                              EQUATE(4)
C_GTINTL_IC_TZ                              EQUATE(5)
C_GTINTL_IC_MC                              EQUATE(6)
C_GTINTL_IC_MD                              EQUATE(7)
C_GTINTL_IC_MU                              EQUATE(8)
C_GTINTL_I_CODE                             EQUATE(9)
C_GTINTL_IG_LED                             EQUATE(10)
C_GTINTL_IG_LE                              EQUATE(11)
C_GTINTL_IG_CU                              EQUATE(12)
C_GTINTL_IG_CR                              EQUATE(13)
C_GTINTL_IG_TZ                              EQUATE(14)
C_GTINTL_IG_MC                              EQUATE(15)
C_GTINTL_IG_MD                              EQUATE(16)
C_GTINTL_IG_MU                              EQUATE(17)
C_GTINTL_I_GUID                             EQUATE(18)
C_GTINTL_AC_GA                              EQUATE(19)
C_GTINTL_AC_GB                              EQUATE(20)
C_GTINTL_AC_GC                              EQUATE(21)
C_GTINTL_AC_GD                              EQUATE(22)
C_GTINTL_AC_GE                              EQUATE(23)
C_GTINTL_AC_G1                              EQUATE(24)
C_GTINTL_AC_G2                              EQUATE(25)
C_GTINTL_AC_G3                              EQUATE(26)
C_GTINTL_AC_G4                              EQUATE(27)
C_GTINTL_AC_G5                              EQUATE(28)
C_GTINTL_AC_G6                              EQUATE(29)
C_GTINTL_AC_G7                              EQUATE(30)
C_GTINTL_AC_G8                              EQUATE(31)
C_GTINTL_AC_G9                              EQUATE(32)
C_GTINTL_A_CODE                             EQUATE(33)
C_GTINTL_AG_GA                              EQUATE(34)
C_GTINTL_AG_GB                              EQUATE(35)
C_GTINTL_AG_GC                              EQUATE(36)
C_GTINTL_AG_GD                              EQUATE(37)
C_GTINTL_AG_GE                              EQUATE(38)
C_GTINTL_AG_G1                              EQUATE(39)
C_GTINTL_AG_G2                              EQUATE(40)
C_GTINTL_AG_G3                              EQUATE(41)
C_GTINTL_AG_G4                              EQUATE(42)
C_GTINTL_AG_G5                              EQUATE(43)
C_GTINTL_AG_G6                              EQUATE(44)
C_GTINTL_AG_G7                              EQUATE(45)
C_GTINTL_AG_G8                              EQUATE(46)
C_GTINTL_AG_G9                              EQUATE(47)
C_GTINTL_A_GUID                             EQUATE(48)
!
!EndRegion
!Region Class_YES
!-------------------------------------------------------------------------------------------------!
! Control:      ?gtINTL_ListQ                                                                     !
! Object Name:  gtINTL_oListClass                                                                 !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?gtINTL_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '36L(0)|M~ST~@s9@#19#' & |
!   '36L(0)|M~PT~@s9@#20#' & |
!   '36L(0)|M~CO~@s9@#21#' & |
!   '36L(0)|M~AR~@s9@#22#' & |
!   '36L(0)|M~CY~@s9@#23#' & |
!   '36L(0)|M~A1~@s9@#24#' & |
!   '36L(0)|M~A2~@s9@#25#' & |
!   '36L(0)|M~A3~@s9@#26#' & |
!   '36L(0)|M~A4~@s9@#27#' & |
!   '36L(0)|M~A5~@s9@#28#' & |
!   '36L(0)|M~A6~@s9@#29#' & |
!   '36L(0)|M~A7~@s9@#30#' & |
!   '36L(0)|M~A8~@s9@#31#' & |
!   '36L(0)|M~A9~@s9@#32#' & |
!   '64L(0)|M~ST~@s16@#34#' & |
!   '64L(0)|M~PT~@s16@#35#' & |
!   '64L(0)|M~CO~@s16@#36#' & |
!   '64L(0)|M~AR~@s16@#37#' & |
!   '64L(0)|M~CY~@s16@#38#' & |
!   '64L(0)|M~A1~@s16@#39#' & |
!   '64L(0)|M~A2~@s16@#40#' & |
!   '64L(0)|M~A3~@s16@#41#' & |
!   '64L(0)|M~A4~@s16@#42#' & |
!   '64L(0)|M~A5~@s16@#43#' & |
!   '64L(0)|M~A6~@s16@#44#' & |
!   '64L(0)|M~A7~@s16@#45#' & |
!   '64L(0)|M~A8~@s16@#46#' & |
!   '64L(0)|M~A9~@s16@#47#' & |
!   '36L(0)|M~I-CODE~@s9@#9#' & |
!   '88L(0)|M~I-GUID~@s16@#18#' & |
!   '36L(0)|M~A-CODE~@s9@#33#' & |
!   '88L(0)|M~A-GUID~@s16@#48#' & |
!   '36L(0)|M~LED~@s9@#1#' & |
!   '36L(0)|M~LE~@s9@#2#' & |
!   '36L(0)|M~CU~@s9@#3#' & |
!   '36L(0)|M~CR~@s9@#4#' & |
!   '36L(0)|M~TZ~@s9@#5#' & |
!   '36L(0)|M~MC~@s9@#6#' & |
!   '36L(0)|M~MD:~@s9@#7#' & |
!   '36L(0)|M~MU~@s9@#8#' & |
!   '64L(0)|M~LED~@s16@#10#' & |
!   '64L(0)|M~LE~@s16@#11#' & |
!   '64L(0)|M~CU~@s16@#12#' & |
!   '64L(0)|M~CR~@s16@#13#' & |
!   '64L(0)|M~TZ~@s16@#14#' & |
!   '64L(0)|M~MC~@s16@#15#' & |
!   '64L(0)|M~MD~@s16@#16#' & |
!   '64L(0)|M~MU~@s16@#17#' & |
!   ''), |
!   FROM(gtINTL_oListClass.ListQ), |
!   #FIELDS(gtINTL_oListClass.ListQ.ac_ga, |
!   gtINTL_oListClass.ListQ.ac_gb, |
!   gtINTL_oListClass.ListQ.ac_gc, |
!   gtINTL_oListClass.ListQ.ac_gd, |
!   gtINTL_oListClass.ListQ.ac_ge, |
!   gtINTL_oListClass.ListQ.ac_g1, |
!   gtINTL_oListClass.ListQ.ac_g2, |
!   gtINTL_oListClass.ListQ.ac_g3, |
!   gtINTL_oListClass.ListQ.ac_g4, |
!   gtINTL_oListClass.ListQ.ac_g5, |
!   gtINTL_oListClass.ListQ.ac_g6, |
!   gtINTL_oListClass.ListQ.ac_g7, |
!   gtINTL_oListClass.ListQ.ac_g8, |
!   gtINTL_oListClass.ListQ.ac_g9, |
!   gtINTL_oListClass.ListQ.ag_ga, |
!   gtINTL_oListClass.ListQ.ag_gb, |
!   gtINTL_oListClass.ListQ.ag_gc, |
!   gtINTL_oListClass.ListQ.ag_gd, |
!   gtINTL_oListClass.ListQ.ag_ge, |
!   gtINTL_oListClass.ListQ.ag_g1, |
!   gtINTL_oListClass.ListQ.ag_g2, |
!   gtINTL_oListClass.ListQ.ag_g3, |
!   gtINTL_oListClass.ListQ.ag_g4, |
!   gtINTL_oListClass.ListQ.ag_g5, |
!   gtINTL_oListClass.ListQ.ag_g6, |
!   gtINTL_oListClass.ListQ.ag_g7, |
!   gtINTL_oListClass.ListQ.ag_g8, |
!   gtINTL_oListClass.ListQ.ag_g9, |
!   gtINTL_oListClass.ListQ.i_code, |
!   gtINTL_oListClass.ListQ.i_guid, |
!   gtINTL_oListClass.ListQ.a_code, |
!   gtINTL_oListClass.ListQ.a_guid, |
!   gtINTL_oListClass.ListQ.ic_led, |
!   gtINTL_oListClass.ListQ.ic_le, |
!   gtINTL_oListClass.ListQ.ic_cu, |
!   gtINTL_oListClass.ListQ.ic_cr, |
!   gtINTL_oListClass.ListQ.ic_tz, |
!   gtINTL_oListClass.ListQ.ic_mc, |
!   gtINTL_oListClass.ListQ.ic_md, |
!   gtINTL_oListClass.ListQ.ic_mu, |
!   gtINTL_oListClass.ListQ.ig_led, |
!   gtINTL_oListClass.ListQ.ig_le, |
!   gtINTL_oListClass.ListQ.ig_cu, |
!   gtINTL_oListClass.ListQ.ig_cr, |
!   gtINTL_oListClass.ListQ.ig_tz, |
!   gtINTL_oListClass.ListQ.ig_mc, |
!   gtINTL_oListClass.ListQ.ig_md, |
!   gtINTL_oListClass.ListQ.ig_mu)
!
!EndRegion
!Region Class_NO
!-------------------------------------------------------------------------------------------------!
! Control:      ?gtINTL_ListQ                                                                     !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?gtINTL_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '36L(0)|M~ST~@s9@#19#' & |
!   '36L(0)|M~PT~@s9@#20#' & |
!   '36L(0)|M~CO~@s9@#21#' & |
!   '36L(0)|M~AR~@s9@#22#' & |
!   '36L(0)|M~CY~@s9@#23#' & |
!   '36L(0)|M~A1~@s9@#24#' & |
!   '36L(0)|M~A2~@s9@#25#' & |
!   '36L(0)|M~A3~@s9@#26#' & |
!   '36L(0)|M~A4~@s9@#27#' & |
!   '36L(0)|M~A5~@s9@#28#' & |
!   '36L(0)|M~A6~@s9@#29#' & |
!   '36L(0)|M~A7~@s9@#30#' & |
!   '36L(0)|M~A8~@s9@#31#' & |
!   '36L(0)|M~A9~@s9@#32#' & |
!   '64L(0)|M~ST~@s16@#34#' & |
!   '64L(0)|M~PT~@s16@#35#' & |
!   '64L(0)|M~CO~@s16@#36#' & |
!   '64L(0)|M~AR~@s16@#37#' & |
!   '64L(0)|M~CY~@s16@#38#' & |
!   '64L(0)|M~A1~@s16@#39#' & |
!   '64L(0)|M~A2~@s16@#40#' & |
!   '64L(0)|M~A3~@s16@#41#' & |
!   '64L(0)|M~A4~@s16@#42#' & |
!   '64L(0)|M~A5~@s16@#43#' & |
!   '64L(0)|M~A6~@s16@#44#' & |
!   '64L(0)|M~A7~@s16@#45#' & |
!   '64L(0)|M~A8~@s16@#46#' & |
!   '64L(0)|M~A9~@s16@#47#' & |
!   '36L(0)|M~I-CODE~@s9@#9#' & |
!   '88L(0)|M~I-GUID~@s16@#18#' & |
!   '36L(0)|M~A-CODE~@s9@#33#' & |
!   '88L(0)|M~A-GUID~@s16@#48#' & |
!   '36L(0)|M~LED~@s9@#1#' & |
!   '36L(0)|M~LE~@s9@#2#' & |
!   '36L(0)|M~CU~@s9@#3#' & |
!   '36L(0)|M~CR~@s9@#4#' & |
!   '36L(0)|M~TZ~@s9@#5#' & |
!   '36L(0)|M~MC~@s9@#6#' & |
!   '36L(0)|M~MD:~@s9@#7#' & |
!   '36L(0)|M~MU~@s9@#8#' & |
!   '64L(0)|M~LED~@s16@#10#' & |
!   '64L(0)|M~LE~@s16@#11#' & |
!   '64L(0)|M~CU~@s16@#12#' & |
!   '64L(0)|M~CR~@s16@#13#' & |
!   '64L(0)|M~TZ~@s16@#14#' & |
!   '64L(0)|M~MC~@s16@#15#' & |
!   '64L(0)|M~MD~@s16@#16#' & |
!   '64L(0)|M~MU~@s16@#17#' & |
!   ''), |
!   FROM(ListQ), |
!   #FIELDS(ListQ.ac_ga, |
!   ListQ.ac_gb, |
!   ListQ.ac_gc, |
!   ListQ.ac_gd, |
!   ListQ.ac_ge, |
!   ListQ.ac_g1, |
!   ListQ.ac_g2, |
!   ListQ.ac_g3, |
!   ListQ.ac_g4, |
!   ListQ.ac_g5, |
!   ListQ.ac_g6, |
!   ListQ.ac_g7, |
!   ListQ.ac_g8, |
!   ListQ.ac_g9, |
!   ListQ.ag_ga, |
!   ListQ.ag_gb, |
!   ListQ.ag_gc, |
!   ListQ.ag_gd, |
!   ListQ.ag_ge, |
!   ListQ.ag_g1, |
!   ListQ.ag_g2, |
!   ListQ.ag_g3, |
!   ListQ.ag_g4, |
!   ListQ.ag_g5, |
!   ListQ.ag_g6, |
!   ListQ.ag_g7, |
!   ListQ.ag_g8, |
!   ListQ.ag_g9, |
!   ListQ.i_code, |
!   ListQ.i_guid, |
!   ListQ.a_code, |
!   ListQ.a_guid, |
!   ListQ.ic_led, |
!   ListQ.ic_le, |
!   ListQ.ic_cu, |
!   ListQ.ic_cr, |
!   ListQ.ic_tz, |
!   ListQ.ic_mc, |
!   ListQ.ic_md, |
!   ListQ.ic_mu, |
!   ListQ.ig_led, |
!   ListQ.ig_le, |
!   ListQ.ig_cu, |
!   ListQ.ig_cr, |
!   ListQ.ig_tz, |
!   ListQ.ig_mc, |
!   ListQ.ig_md, |
!   ListQ.ig_mu)
!
!EndRegion
!
!EOF
