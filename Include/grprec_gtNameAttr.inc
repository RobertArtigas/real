!BOF
!
!Region Generate
!
! Dictionary:   C:\_GIT_\RobertArtigas\real\Dictionary\rybabc.dct
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtNameAttr.inc
! Date-Time:    2022/05/21 - 07:40:53AM
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
! Prefix:       gtNA00
! Description:  Name Attributes
!EndRegion
!Region RecordDefinition
!
!-Record-
!
GTNA00_tRec                               GROUP,TYPE,BINDABLE,PRE(rGTNA00)
FieldNumber                                 SHORT,NAME('FieldNumber|SHORT|@N4B|[0001-0002]|PR(''Field Number:'')|CO(''Number'')')                                                  ! [0001-0002] Field number.
FieldSalt                                   BYTE,NAME('FieldSalt|BYTE|@N1B|[0003-0003]|PR(''Field Salt:'')|CO(''Salt'')')                                                          ! [0003-0003] Is a SALT encryption?
FieldFrom                                   LONG,NAME('FieldFrom|LONG|@N04|[0004-0007]|PR(''Field From:'')|CO(''From'')')                                                          ! [0004-0007] Field starting location.
FieldTo                                     LONG,NAME('FieldTo|LONG|@N04|[0008-0011]|PR(''Field To:'')|CO(''To'')')                                                                ! [0008-0011] Field ending location.
FieldName                                   CSTRING(49),NAME('FieldName|CSTRING(49)|@S48|[0012-0060]|PR(''Field Name:'')|CO(''Name'')')                                            ! [0012-0060] Field name.
FieldWhom                                   CSTRING(49),NAME('FieldWhom|CSTRING(49)|@S48|[0061-0109]|PR(''Field Whom:'')|CO(''Whom'')')                                            ! [0061-0109] Field whom it is.
FieldType                                   CSTRING(49),NAME('FieldType|CSTRING(49)|@S48|[0110-0158]|PR(''Field Type:'')|CO(''Type'')')                                            ! [0110-0158] Field type clarion.
FieldFormat                                 CSTRING(49),NAME('FieldFormat|CSTRING(49)|@S48|[0159-0207]|PR(''Field Format:'')|CO(''Format'')')                                      ! [0159-0207] Field format clarion.
FieldRange                                  CSTRING(49),NAME('FieldRange|CSTRING(49)|@S48|[0208-0256]|PR(''Field Range:'')|CO(''Range'')')                                         ! [0208-0256] Field range location.
FieldPrompt                                 CSTRING(129),NAME('FieldPrompt|CSTRING(129)|@S128|[0257-0385]|PR(''Field Prompt:'')|CO(''Prompt'')')                                   ! [0257-0385] Field prompt literal.
FieldColumn                                 CSTRING(129),NAME('FieldColumn|CSTRING(129)|@S128|[0386-0514]|PR(''Field Column:'')|CO(''Column'')')                                   ! [0386-0514] Field column literal.
FieldTypeSQL                                CSTRING(129),NAME('FieldTypeSQL|CSTRING(129)|@S128|[0515-0643]|PR(''SQL Type:'')|CO(''SQLType'')')                                     ! [0515-0643] Field type SQL.
FieldFormatSQL                              CSTRING(129),NAME('FieldFormatSQL|CSTRING(129)|@S128|[0644-0772]|PR(''SQL Format:'')|CO(''SQLFormat'')')                               ! [0644-0772] Field format SQL.
FieldTemp                                   CSTRING(241),NAME('FieldTemp|CSTRING(241)|@S240|[0773-1013]|PR(''Field Temp:'')|CO(''Temp'')')                                         ! [0773-1013] Field attributes temporary.
                                          END
!EndRegion
!Region QueueDefinition
!
!-Queue-
!
GTNA00_qRec                               QUEUE(GTNA00_tRec),TYPE,BINDABLE,PRE(qGTNA00)
                                          END
!EndRegion
!Region FieldEquates
!
!-Equates-
!
C_GTNA00_FIELDNUMBER                        EQUATE(1)
C_GTNA00_FIELDSALT                          EQUATE(2)
C_GTNA00_FIELDFROM                          EQUATE(3)
C_GTNA00_FIELDTO                            EQUATE(4)
C_GTNA00_FIELDNAME                          EQUATE(5)
C_GTNA00_FIELDWHOM                          EQUATE(6)
C_GTNA00_FIELDTYPE                          EQUATE(7)
C_GTNA00_FIELDFORMAT                        EQUATE(8)
C_GTNA00_FIELDRANGE                         EQUATE(9)
C_GTNA00_FIELDPROMPT                        EQUATE(10)
C_GTNA00_FIELDCOLUMN                        EQUATE(11)
C_GTNA00_FIELDTYPESQL                       EQUATE(12)
C_GTNA00_FIELDFORMATSQL                     EQUATE(13)
C_GTNA00_FIELDTEMP                          EQUATE(14)
!
!EndRegion
!Region Class_YES
!-------------------------------------------------------------------------------------------------!
! Control:      ?gtNA00_ListQ                                                                     !
! Object Name:  gtNA00_oListClass                                                                 !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?gtNA00_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '32R(1)|M~Number~@n4B@#1#' & |
!   '24R(0)|M~Salt~@n1B@#2#' & |
!   '16L(0)|M~From~@n04@#3#' & |
!   '16L(0)|M~To~@n04@#4#' & |
!   '120L(0)|M~Name~@s48@#5#' & |
!   '120L(0)|M~Whom~@s48@#6#' & |
!   '120L(0)|M~Type~@s48@#7#' & |
!   '120L(0)|M~Format~@s48@#8#' & |
!   '120L(0)|M~Range~@s48@#9#' & |
!   '120L(0)|M~Prompt~@s128@#10#' & |
!   '120L(0)|M~Column~@s128@#11#' & |
!   '120L(0)|M~SQLType~@s128@#12#' & |
!   '120L(0)|M~SQLFormat~@s128@#13#' & |
!   '120L(0)|M~Temp~@s240@#14#' & |
!   ''), |
!   FROM(gtNA00_oListClass.ListQ), |
!   #FIELDS(gtNA00_oListClass.ListQ.FieldNumber, |
!   gtNA00_oListClass.ListQ.FieldSalt, |
!   gtNA00_oListClass.ListQ.FieldFrom, |
!   gtNA00_oListClass.ListQ.FieldTo, |
!   gtNA00_oListClass.ListQ.FieldName, |
!   gtNA00_oListClass.ListQ.FieldWhom, |
!   gtNA00_oListClass.ListQ.FieldType, |
!   gtNA00_oListClass.ListQ.FieldFormat, |
!   gtNA00_oListClass.ListQ.FieldRange, |
!   gtNA00_oListClass.ListQ.FieldPrompt, |
!   gtNA00_oListClass.ListQ.FieldColumn, |
!   gtNA00_oListClass.ListQ.FieldTypeSQL, |
!   gtNA00_oListClass.ListQ.FieldFormatSQL, |
!   gtNA00_oListClass.ListQ.FieldTemp)
!
!EndRegion
!Region Class_NO
!-------------------------------------------------------------------------------------------------!
! Control:      ?gtNA00_ListQ                                                                     !
! Queue List:   ListQ                                                                             !
!-------------------------------------------------------------------------------------------------!
! This LIST structure is created to replace the one generated by the ABC templates.               !
! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
!-------------------------------------------------------------------------------------------------!
! LIST,AT(4,40,400,40),USE(?gtNA00_ListQ),HVSCROLL, |
!   FORMAT('' & |
!   '32R(1)|M~Number~@n4B@#1#' & |
!   '24R(0)|M~Salt~@n1B@#2#' & |
!   '16L(0)|M~From~@n04@#3#' & |
!   '16L(0)|M~To~@n04@#4#' & |
!   '120L(0)|M~Name~@s48@#5#' & |
!   '120L(0)|M~Whom~@s48@#6#' & |
!   '120L(0)|M~Type~@s48@#7#' & |
!   '120L(0)|M~Format~@s48@#8#' & |
!   '120L(0)|M~Range~@s48@#9#' & |
!   '120L(0)|M~Prompt~@s128@#10#' & |
!   '120L(0)|M~Column~@s128@#11#' & |
!   '120L(0)|M~SQLType~@s128@#12#' & |
!   '120L(0)|M~SQLFormat~@s128@#13#' & |
!   '120L(0)|M~Temp~@s240@#14#' & |
!   ''), |
!   FROM(ListQ), |
!   #FIELDS(ListQ.FieldNumber, |
!   ListQ.FieldSalt, |
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
!   ListQ.FieldTemp)
!
!EndRegion
!
!EOF
