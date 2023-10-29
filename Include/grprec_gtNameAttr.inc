!BOF
!
!Region Generate
!
! Dictionary:   C:\_GIT_\RobertArtigas\real\Dictionary\rybabc.dct
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtNameAttr.inc
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
! Name:         gtNameAttr
! Prefix:       gtNAMEATTR
! Description:  Name Attributes
!EndRegion
!Region RecordDefinition
!
!-Record-
!
GTNAMEATTR_tRec                           GROUP,TYPE,BINDABLE,PRE(rGTNAMEATTR)
FieldNumber                                 SHORT,NAME('FieldNumber|SHORT|@N4B|[0001-0002]|PR(''Field Number:'')|CO(''Number'')|ATTRIBUTE')                                        ! [0001-0002] Field number.
FieldSalt                                   BYTE,NAME('FieldSalt|BYTE|@N1B|[0003-0003]|PR(''Field Salt:'')|CO(''Salt'')|BOOLEAN|ATTRIBUTE')                                        ! [0003-0003] Is a SALT encryption?
FieldHash                                   BYTE,NAME('FieldHash|BYTE|@N1B|[0004-0004]|PR(''Field Hash'')|CO(''Hash'')|BOOLEAN|ATTRIBUTE')                                         ! [0004-0004] Is a HASH encryption?
FieldEncrypt                                BYTE,NAME('FieldEncrypt|BYTE|@N1B|[0005-0005]|PR(''Field Encrypt'')|CO(''Encrypt'')|BOOLEAN|ATTRIBUTE')                                ! [0005-0005] Is a FIELD encryption?
FieldFrom                                   CSTRING(5),NAME('FieldFrom|CSTRING(5)|@S4|[0006-0010]|PR(''Field From:'')|CO(''From'')|ATTRIBUTE')                                     ! [0006-0010] Field starting location.
FieldTo                                     CSTRING(5),NAME('FieldTo|CSTRING(5)|@S4|[0011-0015]|PR(''Field To:'')|CO(''To'')|ATTRIBUTE')                                           ! [0011-0015] Field ending location.
FieldName                                   CSTRING(49),NAME('FieldName|CSTRING(49)|@S48|[0016-0064]|PR(''Field Name:'')|CO(''Name'')|ATTRIBUTE')                                  ! [0016-0064] Field name.
FieldWhom                                   CSTRING(49),NAME('FieldWhom|CSTRING(49)|@S48|[0065-0113]|PR(''Field Whom:'')|CO(''Whom'')|ATTRIBUTE')                                  ! [0065-0113] Field whom it is.
FieldType                                   CSTRING(49),NAME('FieldType|CSTRING(49)|@S48|[0114-0162]|PR(''Field Type:'')|CO(''Type'')|ATTRIBUTE')                                  ! [0114-0162] Field type clarion.
FieldFormat                                 CSTRING(49),NAME('FieldFormat|CSTRING(49)|@S48|[0163-0211]|PR(''Field Format:'')|CO(''Format'')|ATTRIBUTE')                            ! [0163-0211] Field format clarion.
FieldRange                                  CSTRING(49),NAME('FieldRange|CSTRING(49)|@S48|[0212-0260]|PR(''Field Range:'')|CO(''Range'')|ATTRIBUTE')                               ! [0212-0260] Field range location.
FieldPrompt                                 CSTRING(129),NAME('FieldPrompt|CSTRING(129)|@S128|[0261-0389]|PR(''Field Prompt:'')|CO(''Prompt'')|ATTRIBUTE')                         ! [0261-0389] Field prompt literal.
FieldColumn                                 CSTRING(129),NAME('FieldColumn|CSTRING(129)|@S128|[0390-0518]|PR(''Field Column:'')|CO(''Column'')|ATTRIBUTE')                         ! [0390-0518] Field column literal.
FieldTypeSQL                                CSTRING(129),NAME('FieldTypeSQL|CSTRING(129)|@S128|[0519-0647]|PR(''SQL Type:'')|CO(''SQLType'')|ATTRIBUTE')                           ! [0519-0647] Field type SQL.
FieldFormatSQL                              CSTRING(129),NAME('FieldFormatSQL|CSTRING(129)|@S128|[0648-0776]|PR(''SQL Format:'')|CO(''SQLFormat'')|ATTRIBUTE')                     ! [0648-0776] Field format SQL.
FieldLength                                 LONG,NAME('FieldLength|LONG|@N-4|[0777-0780]|PR(''Field Length:'')|CO(''Field Length'')|ATTRIBUTE')                                    ! [0777-0780] Name attribute string length.
FieldTemp                                   CSTRING(241),NAME('FieldTemp|CSTRING(241)|@S240|[0781-1021]|PR(''Field Temp:'')|CO(''Temp'')|ATTRIBUTE')                               ! [0781-1021] Field attributes temporary.
                                          END
!EndRegion
!Region QueueDefinition
!
!-Queue-
!
GTNAMEATTR_qRec                           QUEUE(GTNAMEATTR_tRec),TYPE,BINDABLE,PRE(qGTNAMEATTR)
                                          END
!EndRegion
!Region FieldEquates
!
!-Equates-
!
C_GTNAMEATTR_FIELDNUMBER                    EQUATE(1)
C_GTNAMEATTR_FIELDSALT                      EQUATE(2)
C_GTNAMEATTR_FIELDHASH                      EQUATE(3)
C_GTNAMEATTR_FIELDENCRYPT                   EQUATE(4)
C_GTNAMEATTR_FIELDFROM                      EQUATE(5)
C_GTNAMEATTR_FIELDTO                        EQUATE(6)
C_GTNAMEATTR_FIELDNAME                      EQUATE(7)
C_GTNAMEATTR_FIELDWHOM                      EQUATE(8)
C_GTNAMEATTR_FIELDTYPE                      EQUATE(9)
C_GTNAMEATTR_FIELDFORMAT                    EQUATE(10)
C_GTNAMEATTR_FIELDRANGE                     EQUATE(11)
C_GTNAMEATTR_FIELDPROMPT                    EQUATE(12)
C_GTNAMEATTR_FIELDCOLUMN                    EQUATE(13)
C_GTNAMEATTR_FIELDTYPESQL                   EQUATE(14)
C_GTNAMEATTR_FIELDFORMATSQL                 EQUATE(15)
C_GTNAMEATTR_FIELDLENGTH                    EQUATE(16)
C_GTNAMEATTR_FIELDTEMP                      EQUATE(17)
!
!EndRegion
!Region Class_YES
!-------------------------------------------------------------------------------------------------!
! Control:      ?gtNAMEATTR_ListQ                                                                 !
! Object Name:  gtNAMEATTR_oListClass                                                             !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?gtNAMEATTR_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '32L(2)|M~Number~@n4B@#1#' & |
!   '24L(2)|M~Salt~@n1B@#2#' & |
!   '24L(2)|M~Hash~@n1B@#3#' & |
!   '36L(2)|M~Encrypt~@n1B@#4#' & |
!   '16L(0)|M~From~@S4@#5#' & |
!   '16L(0)|M~To~@S4@#6#' & |
!   '120L(2)|M~Name~@s48@#7#' & |
!   '120L(2)|M~Whom~@s48@#8#' & |
!   '120L(2)|M~Type~@s48@#9#' & |
!   '120L(2)|M~Format~@s48@#10#' & |
!   '120L(2)|M~Range~@s48@#11#' & |
!   '120L(2)|M~Prompt~@s128@#12#' & |
!   '120L(2)|M~Column~@s128@#13#' & |
!   '120L(2)|M~SQLType~@s128@#14#' & |
!   '120L(2)|M~SQLFormat~@s128@#15#' & |
!   '56R(1)|M~Field Length~@n-4@#16#' & |
!   '120L(2)|M~Temp~@s240@#17#' & |
!   ''), |
!   FROM(gtNAMEATTR_oListClass.ListQ), |
!   #FIELDS(gtNAMEATTR_oListClass.ListQ.FieldNumber, |
!   gtNAMEATTR_oListClass.ListQ.FieldSalt, |
!   gtNAMEATTR_oListClass.ListQ.FieldHash, |
!   gtNAMEATTR_oListClass.ListQ.FieldEncrypt, |
!   gtNAMEATTR_oListClass.ListQ.FieldFrom, |
!   gtNAMEATTR_oListClass.ListQ.FieldTo, |
!   gtNAMEATTR_oListClass.ListQ.FieldName, |
!   gtNAMEATTR_oListClass.ListQ.FieldWhom, |
!   gtNAMEATTR_oListClass.ListQ.FieldType, |
!   gtNAMEATTR_oListClass.ListQ.FieldFormat, |
!   gtNAMEATTR_oListClass.ListQ.FieldRange, |
!   gtNAMEATTR_oListClass.ListQ.FieldPrompt, |
!   gtNAMEATTR_oListClass.ListQ.FieldColumn, |
!   gtNAMEATTR_oListClass.ListQ.FieldTypeSQL, |
!   gtNAMEATTR_oListClass.ListQ.FieldFormatSQL, |
!   gtNAMEATTR_oListClass.ListQ.FieldLength, |
!   gtNAMEATTR_oListClass.ListQ.FieldTemp)
!
!EndRegion
!Region Class_NO
!-------------------------------------------------------------------------------------------------!
! Control:      ?gtNAMEATTR_ListQ                                                                 !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?gtNAMEATTR_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '32L(2)|M~Number~@n4B@#1#' & |
!   '24L(2)|M~Salt~@n1B@#2#' & |
!   '24L(2)|M~Hash~@n1B@#3#' & |
!   '36L(2)|M~Encrypt~@n1B@#4#' & |
!   '16L(0)|M~From~@S4@#5#' & |
!   '16L(0)|M~To~@S4@#6#' & |
!   '120L(2)|M~Name~@s48@#7#' & |
!   '120L(2)|M~Whom~@s48@#8#' & |
!   '120L(2)|M~Type~@s48@#9#' & |
!   '120L(2)|M~Format~@s48@#10#' & |
!   '120L(2)|M~Range~@s48@#11#' & |
!   '120L(2)|M~Prompt~@s128@#12#' & |
!   '120L(2)|M~Column~@s128@#13#' & |
!   '120L(2)|M~SQLType~@s128@#14#' & |
!   '120L(2)|M~SQLFormat~@s128@#15#' & |
!   '56R(1)|M~Field Length~@n-4@#16#' & |
!   '120L(2)|M~Temp~@s240@#17#' & |
!   ''), |
!   FROM(ListQ), |
!   #FIELDS(ListQ.FieldNumber, |
!   ListQ.FieldSalt, |
!   ListQ.FieldHash, |
!   ListQ.FieldEncrypt, |
!   ListQ.FieldFrom, |
!   ListQ.FieldTo, |
!   ListQ.FieldName, |
!   ListQ.FieldWhom, |
!   ListQ.FieldType, |
!   ListQ.FieldFormat, |
!   ListQ.FieldRange, |
!   ListQ.FieldPrompt, |
!   ListQ.FieldColumn, |
!   ListQ.FieldTypeSQL, |
!   ListQ.FieldFormatSQL, |
!   ListQ.FieldLength, |
!   ListQ.FieldTemp)
!
!EndRegion
!
!EOF
