!BOF
!
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtBase.inc
! Date-Time:    2022/05/02 - 10:59:53AM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!Region
! Name:         gtBase
! Prefix:       gtBASE
! Description:  Base definitions
!EndRegion
!
!-Keys-
!
!Region
! timestampkey                            timestamp(ASCENDING)
! servertimestampkey                      servertimestamp(ASCENDING)
! deletedtimestampkey                     deletedtimestamp(ASCENDING)
! key0_base_pkey                          guid(ASCENDING)
! key1_base_ukey                          active_flag(ASCENDING)
!                                         guid(ASCENDING)
! key9_base_ukey                          active_flag(ASCENDING)
!                                         guid(ASCENDING)
! keya_base_ukey                          guid(ASCENDING)
!EndRegion
!
!-Keys-
!
!Region
GTBASE_tKey_timestampkey                  GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key01)
timestamp                                   REAL,NAME('ts|REAL|@N15.0B|[0001-0008]|PR(''TS:'')|CO(''TS'')')                                                                        ! [0001-0008] Local time stamp.
                                          END 
GTBASE_tKey_servertimestampkey            GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key02)
servertimestamp                             REAL,NAME('sts|REAL|@N15.0B|[0001-0008]|PR(''STS:'')|CO(''STS'')')                                                                     ! [0001-0008] Server time stamp.
                                          END 
GTBASE_tKey_deletedtimestampkey           GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key03)
deletedtimestamp                            REAL,NAME('dts|REAL|@N15.0B|[0001-0008]|PR(''DTS:'')|CO(''DTS'')')                                                                     ! [0001-0008] Deleted time stamp.
                                          END 
GTBASE_tKey_key0_base_pkey                GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key04)
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0001-0016]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0001-0016] Primary identifier.
                                          END 
GTBASE_tKey_key1_base_ukey                GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key05)
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0001-0001]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0001-0001] Active flag.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0002-0017]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0002-0017] Primary identifier.
                                          END 
GTBASE_tKey_key9_base_ukey                GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key06)
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0001-0001]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0001-0001] Active flag.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0002-0017]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0002-0017] Primary identifier.
                                          END 
GTBASE_tKey_keya_base_ukey                GROUP,TYPE,BINDABLE,PRE(kGTBASE_Key07)
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0001-0016]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0001-0016] Primary identifier.
                                          END 
!EndRegion
!
!-Record-
!
!Region
GTBASE_tRec                               GROUP,TYPE,BINDABLE,PRE(rGTBASE)
timestamp                                   REAL,NAME('ts|REAL|@N15.0B|[0001-0008]|PR(''TS:'')|CO(''TS'')')                                                                        ! [0001-0008] Local time stamp.
servertimestamp                             REAL,NAME('sts|REAL|@N15.0B|[0009-0016]|PR(''STS:'')|CO(''STS'')')                                                                     ! [0009-0016] Server time stamp.
deletedtimestamp                            REAL,NAME('dts|REAL|@N15.0B|[0017-0024]|PR(''DTS:'')|CO(''DTS'')')                                                                     ! [0017-0024] Deleted time stamp.
encryptionversion                           LONG,NAME('encryptionversion|LONG|@N-14|[0025-0028]|PR(''Encryption Version:'')|CO(''EV'')')                                           ! [0025-0028] Encryption version.
date_update                                 DATE,NAME('date_update|DATE|@D010-B|[0029-0032]|PR(''Date update:'')|CO(''DateUp'')')                                                  ! [0029-0032] Date update.
time_update                                 TIME,NAME('time_update|TIME|@T04B|[0033-0036]|PR(''Time update:'')|CO(''TimeUp'')')                                                    ! [0033-0036] Time update.
user_update                                 STRING(20),NAME('user_update|STRING(20)|@S20|[0037-0056]|PR(''User Update:'')|CO(''UserUp'')')                                         ! [0037-0056] User update.
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0057-0057]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0057-0057] Active flag.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0058-0073]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0058-0073] Primary identifier.
                                          END
!EndRegion
!
!-Queue-
!
!Region
GTBASE_qRec                               QUEUE(GTBASE_tRec),TYPE,BINDABLE,PRE(qGTBASE)
                                          END
!EndRegion
!
!-Equates-
!
!Region
C_GTBASE_TIMESTAMP                          EQUATE(1)
C_GTBASE_SERVERTIMESTAMP                    EQUATE(2)
C_GTBASE_DELETEDTIMESTAMP                   EQUATE(3)
C_GTBASE_ENCRYPTIONVERSION                  EQUATE(4)
C_GTBASE_DATE_UPDATE                        EQUATE(5)
C_GTBASE_TIME_UPDATE                        EQUATE(6)
C_GTBASE_USER_UPDATE                        EQUATE(7)
C_GTBASE_ACTIVE_FLAG                        EQUATE(8)
C_GTBASE_GUID                               EQUATE(9)
!EndRegion
!
!EOF