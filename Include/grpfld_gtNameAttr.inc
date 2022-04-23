!BOF
!
! File:         C:\_GIT_\RobertArtigas\real\Include\grpfld_gtNameAttr.inc
! Date-Time:    2022/04/10 - 05:47:04PM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!Region
! Name:         gtNameAttr
! Prefix:       gtNA01
! Description:  Name Attributes
!EndRegion
!
!-Keys-
!
!Region
!EndRegion
!
!-Keys-
!
!Region
!EndRegion
!
!-Record-
!
!Region
GTNA01_tRec                               GROUP,TYPE,BINDABLE,PRE(rGTNA01)
FieldNumber                                 SHORT,NAME('FieldNumber|SHORT|@N4B|[0001-0004]|PR(''Field Number:'')|CO(''Number'')')                                                  ! [0001-0004] Field number.
FieldSalt                                   BYTE,NAME('FieldSalt|BYTE|@N1B|[0005-0005]|PR(''Field Salt:'')|CO(''Salt'')')                                                          ! [0005-0005] Is a SALT encryption?
FieldFrom                                   LONG,NAME('FieldFrom|LONG|@N04|[0006-0009]|PR(''Field From:'')|CO(''From'')')                                                          ! [0006-0009] Field starting location.
FieldTo                                     LONG,NAME('FieldTo|LONG|@N04|[0010-0013]|PR(''Field To:'')|CO(''To'')')                                                                ! [0010-0013] Field ending location.
FieldName                                   CSTRING(49),NAME('FieldName|CSTRING(49)|@S48|[0014-0062]|PR(''Field Name:'')|CO(''Name'')')                                            ! [0014-0062] Field name.
FieldWhom                                   CSTRING(49),NAME('FieldWhom|CSTRING(49)|@S48|[0063-0111]|PR(''Field Whom:'')|CO(''Whom'')')                                            ! [0063-0111] Field whom it is.
FieldType                                   CSTRING(49),NAME('FieldType|CSTRING(49)|@S48|[0112-0160]|PR(''Field Type:'')|CO(''Type'')')                                            ! [0112-0160] Field type clarion.
FieldFormat                                 CSTRING(49),NAME('FieldFormat|CSTRING(49)|@S48|[0161-0209]|PR(''Field Format:'')|CO(''Format'')')                                      ! [0161-0209] Field format clarion.
FieldRange                                  CSTRING(49),NAME('FieldRange|CSTRING(49)|@S48|[0210-0258]|PR(''Field Range:'')|CO(''Range'')')                                         ! [0210-0258] Field range location.
FieldPrompt                                 CSTRING(129),NAME('FieldPrompt|CSTRING(129)|@S128|[0259-0387]|PR(''Field Prompt:'')|CO(''Prompt'')')                                   ! [0259-0387] Field prompt literal.
FieldColumn                                 CSTRING(129),NAME('FieldColumn|CSTRING(129)|@S128|[0388-0516]|PR(''Field Column:'')|CO(''Column'')')                                   ! [0388-0516] Field column literal.
FieldTypeSQL                                CSTRING(129),NAME('FieldTypeSQL|CSTRING(129)|@S128|[0517-0645]|PR(''SQL Type:'')|CO(''SQLType'')')                                     ! [0517-0645] Field type SQL.
FieldFormatSQL                              CSTRING(129),NAME('FieldFormatSQL|CSTRING(129)|@S128|[0646-0774]|PR(''SQL Format:'')|CO(''SQLFormat'')')                               ! [0646-0774] Field format SQL.
FieldTemp                                   CSTRING(241),NAME('FieldTemp|CSTRING(241)|@S240|[0775-1015]|PR(''Field Temp:'')|CO(''Temp'')')                                         ! [0775-1015] Field attributes temporary.
                                          END
!EndRegion
!
!-Queue-
!
!Region
GTNA01_qRec                               QUEUE(GTNA01_tRec),TYPE,BINDABLE,PRE(qGTNA01)
                                          END
!EndRegion
!
!-Equates-
!
!Region
C_GTNA01_FIELDNUMBER                        EQUATE(1)
C_GTNA01_FIELDSALT                          EQUATE(2)
C_GTNA01_FIELDFROM                          EQUATE(3)
C_GTNA01_FIELDTO                            EQUATE(4)
C_GTNA01_FIELDNAME                          EQUATE(5)
C_GTNA01_FIELDWHOM                          EQUATE(6)
C_GTNA01_FIELDTYPE                          EQUATE(7)
C_GTNA01_FIELDFORMAT                        EQUATE(8)
C_GTNA01_FIELDRANGE                         EQUATE(9)
C_GTNA01_FIELDPROMPT                        EQUATE(10)
C_GTNA01_FIELDCOLUMN                        EQUATE(11)
C_GTNA01_FIELDTYPESQL                       EQUATE(12)
C_GTNA01_FIELDFORMATSQL                     EQUATE(13)
C_GTNA01_FIELDTEMP                          EQUATE(14)
!EndRegion
!
!EOF
