!BOF
!
!Region Generate
!
! Dictionary:   C:\_GIT_\RobertArtigas\real\Dictionary\rybennaad.dct
! File:         C:\_GIT_\RobertArtigas\real\Include\table_entity.inc
! Date-Time:    2022/06/29 - 01:18:53PM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!EndRegion
!Region Header
! Name:         entity
! Prefix:       E301
! Description:  Entity definitions
!EndRegion
!Region KeyDocs
!
!-Keys Docs-
!
! timestampkey                            timestamp(ASCENDING)
! servertimestampkey                      servertimestamp(ASCENDING)
! deletedtimestampkey                     deletedtimestamp(ASCENDING)
! key0_entity_pkey                        guid(ASCENDING)
! key1_entity_ukey                        data_code(ASCENDING)
!                                         guid(ASCENDING)
! key9_entity_ukey                        active_flag(ASCENDING)
!                                         data_code(ASCENDING)
!                                         guid(ASCENDING)
! keya_entity_ukey                        p_order(ASCENDING)
!                                         data_code(ASCENDING)
!                                         guid(ASCENDING)
!EndRegion
!Region KeyDefinitions
!
!-Keys-
!
E301_tKey_timestampkey                    GROUP,TYPE,BINDABLE,PRE(kE301_Key01)
timestamp                                   REAL,NAME('ts|REAL|@N15.0B|[0001-0008]|PR(''TS:'')|CO(''TS'')')                                                                        ! [0001-0008] Local time stamp.
                                          END 
E301_tKey_servertimestampkey              GROUP,TYPE,BINDABLE,PRE(kE301_Key02)
servertimestamp                             REAL,NAME('sts|REAL|@N15.0B|[0001-0008]|PR(''STS:'')|CO(''STS'')')                                                                     ! [0001-0008] Server time stamp.
                                          END 
E301_tKey_deletedtimestampkey             GROUP,TYPE,BINDABLE,PRE(kE301_Key03)
deletedtimestamp                            REAL,NAME('dts|REAL|@N15.0B|[0001-0008]|PR(''DTS:'')|CO(''DTS'')')                                                                     ! [0001-0008] Deleted time stamp.
                                          END 
E301_tKey_key0_entity_pkey                GROUP,TYPE,BINDABLE,PRE(kE301_Key04)
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0001-0016]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0001-0016] Primary identifier.
                                          END 
E301_tKey_key1_entity_ukey                GROUP,TYPE,BINDABLE,PRE(kE301_Key05)
data_code                                   STRING(9),NAME('data_code|STRING(9)|@S9|[0001-0009]|PR(''Code:'')|CO(''Code'')')                                                       ! [0001-0009] Data code.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0010-0025]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0010-0025] Primary identifier.
                                          END 
E301_tKey_key9_entity_ukey                GROUP,TYPE,BINDABLE,PRE(kE301_Key06)
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0001-0001]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0001-0001] Active flag.
data_code                                   STRING(9),NAME('data_code|STRING(9)|@S9|[0002-0010]|PR(''Code:'')|CO(''Code'')')                                                       ! [0002-0010] Data code.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0011-0026]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0011-0026] Primary identifier.
                                          END 
E301_tKey_keya_entity_ukey                GROUP,TYPE,BINDABLE,PRE(kE301_Key07)
p_order                                     SHORT,NAME('p_order|SHORT|@N-4|[0001-0002]|PR(''Order:'')|CO(''Order'')')                                                              ! [0001-0002] Presentation order.
data_code                                   STRING(9),NAME('data_code|STRING(9)|@S9|[0003-0011]|PR(''Code:'')|CO(''Code'')')                                                       ! [0003-0011] Data code.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0012-0027]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0012-0027] Primary identifier.
                                          END 
!EndRegion
!Region RecordDefinition
!
!-Record-
!
E301_tRec                                 GROUP,TYPE,BINDABLE,PRE(rE301)
timestamp                                   REAL,NAME('ts|REAL|@N15.0B|[0001-0008]|PR(''TS:'')|CO(''TS'')')                                                                        ! [0001-0008] Local time stamp.
servertimestamp                             REAL,NAME('sts|REAL|@N15.0B|[0009-0016]|PR(''STS:'')|CO(''STS'')')                                                                     ! [0009-0016] Server time stamp.
deletedtimestamp                            REAL,NAME('dts|REAL|@N15.0B|[0017-0024]|PR(''DTS:'')|CO(''DTS'')')                                                                     ! [0017-0024] Deleted time stamp.
encryptionversion                           LONG,NAME('encryptionversion|LONG|@N-14|[0025-0028]|PR(''Encryption Version:'')|CO(''EV'')')                                           ! [0025-0028] Encryption version.
date_update                                 DATE,NAME('date_update|DATE|@D010-B|[0029-0032]|PR(''Date update:'')|CO(''DateUp'')')                                                  ! [0029-0032] Date update.
time_update                                 TIME,NAME('time_update|TIME|@T04B|[0033-0036]|PR(''Time update:'')|CO(''TimeUp'')')                                                    ! [0033-0036] Time update.
user_update                                 STRING(20),NAME('user_update|STRING(20)|@S20|[0037-0056]|PR(''User Update:'')|CO(''UserUp'')')                                         ! [0037-0056] User update.
active_flag                                 STRING(1),NAME('active_flag|STRING(1)|@S1|[0057-0057]|PR(''Active flag:'')|CO(''A'')')                                                 ! [0057-0057] Active flag.
guid                                        STRING(16),NAME('guid|STRING(16)|@S16|[0058-0073]|PR(''GUID:'')|CO(''GUID'')|Salt')                                                    ! [0058-0073] Primary identifier.
hash_name                                   STRING(128),NAME('hash_name|STRING(128)|@S128|[0074-0201]|PR(''hash name:'')|CO(''hash name'')')                                       ! [0074-0201] Name hash.
p_order                                     SHORT,NAME('p_order|SHORT|@N-4|[0202-0203]|PR(''Order:'')|CO(''Order'')')                                                              ! [0202-0203] Presentation order.
data_code                                   STRING(9),NAME('data_code|STRING(9)|@S9|[0204-0212]|PR(''Code:'')|CO(''Code'')')                                                       ! [0204-0212] Data code.
data_name                                   STRING(240),NAME('data_name|STRING(240)|@S240|[0213-0452]|PR(''Name:'')|CO(''Name'')|Hash(HASH_NAME)|Encrypted(MYTABLE)')              ! [0213-0452] Data name.
                                          END
!EndRegion
!Region QueueDefinition
!
!-Queue-
!
E301_qRec                                 QUEUE(E301_tRec),TYPE,BINDABLE,PRE(qE301)
                                          END
!EndRegion
!Region FieldEquates
!
!-Equates-
!
C_E301_TIMESTAMP                            EQUATE(1)
C_E301_SERVERTIMESTAMP                      EQUATE(2)
C_E301_DELETEDTIMESTAMP                     EQUATE(3)
C_E301_ENCRYPTIONVERSION                    EQUATE(4)
C_E301_DATE_UPDATE                          EQUATE(5)
C_E301_TIME_UPDATE                          EQUATE(6)
C_E301_USER_UPDATE                          EQUATE(7)
C_E301_ACTIVE_FLAG                          EQUATE(8)
C_E301_GUID                                 EQUATE(9)
C_E301_HASH_NAME                            EQUATE(10)
C_E301_P_ORDER                              EQUATE(11)
C_E301_DATA_CODE                            EQUATE(12)
C_E301_DATA_NAME                            EQUATE(13)
!
!EndRegion
!Region Class_YES
!-------------------------------------------------------------------------------------------------!
! Control:      ?E301_ListQ                                                                       !
! Object Name:  E301_oListClass                                                                   !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?E301_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '10C(0)|M~A~@s1@#8#' & |
!   '28R(0)|M~Order~@n-4@#11#' & |
!   '36L(0)|M~Code~@s9@#12#' & |
!   '120L(0)|M~Name~@s240@#13#' & |
!   '60L(0)|M~TS~@n15.0B@#1#' & |
!   '60L(0)|M~STS~@n15.0B@#2#' & |
!   '60L(0)|M~DTS~@n15.0B@#3#' & |
!   '16R(0)|M~EV~@n-14@#4#' & |
!   '44L(0)|M~DateUp~@D010-B@#5#' & |
!   '44L(0)|M~TimeUp~@T04B@#6#' & |
!   '80L(0)|M~UserUp~@s20@#7#' & |
!   '88L(0)|M~GUID~@s16@#9#' & |
!   '120L(0)|M~hash name~@s128@#10#' & |
!   ''), |
!   FROM(E301_oListClass.ListQ), |
!   #FIELDS(E301_oListClass.ListQ.active_flag, |
!   E301_oListClass.ListQ.p_order, |
!   E301_oListClass.ListQ.data_code, |
!   E301_oListClass.ListQ.data_name, |
!   E301_oListClass.ListQ.timestamp, |
!   E301_oListClass.ListQ.servertimestamp, |
!   E301_oListClass.ListQ.deletedtimestamp, |
!   E301_oListClass.ListQ.encryptionversion, |
!   E301_oListClass.ListQ.date_update, |
!   E301_oListClass.ListQ.time_update, |
!   E301_oListClass.ListQ.user_update, |
!   E301_oListClass.ListQ.guid, |
!   E301_oListClass.ListQ.hash_name)
!
!EndRegion
!Region Class_NO
!-------------------------------------------------------------------------------------------------!
! Control:      ?E301_ListQ                                                                       !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?E301_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '10C(0)|M~A~@s1@#8#' & |
!   '28R(0)|M~Order~@n-4@#11#' & |
!   '36L(0)|M~Code~@s9@#12#' & |
!   '120L(0)|M~Name~@s240@#13#' & |
!   '60L(0)|M~TS~@n15.0B@#1#' & |
!   '60L(0)|M~STS~@n15.0B@#2#' & |
!   '60L(0)|M~DTS~@n15.0B@#3#' & |
!   '16R(0)|M~EV~@n-14@#4#' & |
!   '44L(0)|M~DateUp~@D010-B@#5#' & |
!   '44L(0)|M~TimeUp~@T04B@#6#' & |
!   '80L(0)|M~UserUp~@s20@#7#' & |
!   '88L(0)|M~GUID~@s16@#9#' & |
!   '120L(0)|M~hash name~@s128@#10#' & |
!   ''), |
!   FROM(ListQ), |
!   #FIELDS(ListQ.active_flag, |
!   ListQ.p_order, |
!   ListQ.data_code, |
!   ListQ.data_name, |
!   ListQ.timestamp, |
!   ListQ.servertimestamp, |
!   ListQ.deletedtimestamp, |
!   ListQ.encryptionversion, |
!   ListQ.date_update, |
!   ListQ.time_update, |
!   ListQ.user_update, |
!   ListQ.guid, |
!   ListQ.hash_name)
!
!EndRegion
!
!EOF
