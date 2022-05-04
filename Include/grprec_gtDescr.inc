!BOF
!
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtDescr.inc
! Date-Time:    2022/05/02 - 10:59:53AM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!Region
! Name:         gtDescr
! Prefix:       gtDESCR
! Description:  Description definitions
!EndRegion
!
!-Keys-
!
!Region
! timestampkey                            timestamp(ASCENDING)
! servertimestampkey                      servertimestamp(ASCENDING)
! deletedtimestampkey                     deletedtimestamp(ASCENDING)
! key0_descr_pkey                         guid(ASCENDING)
! key1_descr_ukey                         data_code(ASCENDING)
!                                         active_flag(ASCENDING)
!                                         guid(ASCENDING)
! keya_descr_ukey                         p_order(ASCENDING)
!                                         data_name(ASCENDING)
!                                         guid(ASCENDING)
!EndRegion
!
!-Keys-
!
!Region
GTDESCR_tKey_timestampkey                 GROUP,TYPE,BINDABLE,PRE(kGTDESCR_Key01)
timestamp                                   REAL,NAME('ts|REAL|@N15.0B|[0001-0008]|PR(''TS:'')|CO(''TS'')')                                                                        ! [0001-0008] Local time stamp.
                                          END 
GTDESCR_tKey_servertimestampkey           GROUP,TYPE,BINDABLE,PRE(kGTDESCR_Key02)
servertimestamp                             REAL,NAME('sts|REAL|@N15.0B|[0001-0008]|PR(''STS:'')|CO(''STS'')')                                                                     ! [0001-0008] Server time stamp.
                                          END 
GTDESCR_tKey_deletedtimestampkey          GROUP,TYPE,BINDABLE,PRE(kGTDESCR_Key03)
deletedtimestamp                            REAL,NAME('dts|REAL|@N15.0B|[0001-0008]|PR(''DTS:'')|CO(''DTS'')')                                                                     ! [0001-0008] Deleted time stamp.
                                          END 
GTDESCR_tKey_key0_descr_pkey              GROUP,TYPE,BINDABLE,PRE(kGTDESCR_Key04)
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0001-0016]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0001-0016] Primary identifier.
                                          END 
GTDESCR_tKey_key1_descr_ukey              GROUP,TYPE,BINDABLE,PRE(kGTDESCR_Key05)
data_code                                   STRING(9),NAME('data_code|STRING(9)|@S9|[0001-0009]|PR(''Code:'')|CO(''Code'')')                                                       ! [0001-0009] Data code.
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0010-0010]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0010-0010] Active flag.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0011-0026]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0011-0026] Primary identifier.
                                          END 
GTDESCR_tKey_keya_descr_ukey              GROUP,TYPE,BINDABLE,PRE(kGTDESCR_Key06)
p_order                                     SHORT,NAME('p_order|SHORT|@N-4|[0001-0002]|PR(''Order:'')|CO(''Order'')')                                                              ! [0001-0002] Presentation order.
data_name                                   STRING(240),NAME('data_name|STRING(240)|@S240|[0003-0242]|PR(''Name:'')|CO(''Name'')')                                                 ! [0003-0242] Data name.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0243-0258]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0243-0258] Primary identifier.
                                          END 
!EndRegion
!
!-Record-
!
!Region
GTDESCR_tRec                              GROUP,TYPE,BINDABLE,PRE(rGTDESCR)
timestamp                                   REAL,NAME('ts|REAL|@N15.0B|[0001-0008]|PR(''TS:'')|CO(''TS'')')                                                                        ! [0001-0008] Local time stamp.
servertimestamp                             REAL,NAME('sts|REAL|@N15.0B|[0009-0016]|PR(''STS:'')|CO(''STS'')')                                                                     ! [0009-0016] Server time stamp.
deletedtimestamp                            REAL,NAME('dts|REAL|@N15.0B|[0017-0024]|PR(''DTS:'')|CO(''DTS'')')                                                                     ! [0017-0024] Deleted time stamp.
encryptionversion                           LONG,NAME('encryptionversion|LONG|@N-14|[0025-0028]|PR(''Encryption Version:'')|CO(''EV'')')                                           ! [0025-0028] Encryption version.
date_update                                 DATE,NAME('date_update|DATE|@D010-B|[0029-0032]|PR(''Date update:'')|CO(''DateUp'')')                                                  ! [0029-0032] Date update.
time_update                                 TIME,NAME('time_update|TIME|@T04B|[0033-0036]|PR(''Time update:'')|CO(''TimeUp'')')                                                    ! [0033-0036] Time update.
user_update                                 STRING(20),NAME('user_update|STRING(20)|@S20|[0037-0056]|PR(''User Update:'')|CO(''UserUp'')')                                         ! [0037-0056] User update.
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0057-0057]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0057-0057] Active flag.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0058-0073]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0058-0073] Primary identifier.
p_order                                     SHORT,NAME('p_order|SHORT|@N-4|[0074-0075]|PR(''Order:'')|CO(''Order'')')                                                              ! [0074-0075] Presentation order.
data_code                                   STRING(9),NAME('data_code|STRING(9)|@S9|[0076-0084]|PR(''Code:'')|CO(''Code'')')                                                       ! [0076-0084] Data code.
data_name                                   STRING(240),NAME('data_name|STRING(240)|@S240|[0085-0324]|PR(''Name:'')|CO(''Name'')')                                                 ! [0085-0324] Data name.
                                          END
!EndRegion
!
!-Queue-
!
!Region
GTDESCR_qRec                              QUEUE(GTDESCR_tRec),TYPE,BINDABLE,PRE(qGTDESCR)
                                          END
!EndRegion
!
!-Equates-
!
!Region
C_GTDESCR_TIMESTAMP                         EQUATE(1)
C_GTDESCR_SERVERTIMESTAMP                   EQUATE(2)
C_GTDESCR_DELETEDTIMESTAMP                  EQUATE(3)
C_GTDESCR_ENCRYPTIONVERSION                 EQUATE(4)
C_GTDESCR_DATE_UPDATE                       EQUATE(5)
C_GTDESCR_TIME_UPDATE                       EQUATE(6)
C_GTDESCR_USER_UPDATE                       EQUATE(7)
C_GTDESCR_ACTIVE_FLAG                       EQUATE(8)
C_GTDESCR_GUID                              EQUATE(9)
C_GTDESCR_P_ORDER                           EQUATE(10)
C_GTDESCR_DATA_CODE                         EQUATE(11)
C_GTDESCR_DATA_NAME                         EQUATE(12)
!EndRegion
!
!EOF
