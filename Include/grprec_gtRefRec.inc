!BOF
!
! File:         C:\_GIT_\RobertArtigas\real\Include\grprec_gtRefRec.inc
! Date-Time:    2022/05/02 - 10:59:53AM
! Purpose:      Generated File Records as Groups
! Author:       GenerateGroups Template
! Narative:     This template is used to pass records structures
!               back and forth between DLL's when the files
!               are not shared. Since file definitions are not
!               available, data has to be passed in areas.
!
!Region
! Name:         gtRefRec
! Prefix:       gtRR00
! Description:  Reference Record Definitions
!EndRegion
!
!-Record-
!
!Region
GTRR00_tRec                               GROUP,TYPE,BINDABLE,PRE(rGTRR00)
ReferenceAny                                ANY,NAME('ReferenceAny|ANY|@N13|[0001-0004]|PR(''Reference Any:'')|CO(''RefAny'')')                                                    ! [0001-0004] Define ANY reference
ReferenceFile                               &FILE,NAME('ReferenceFile|&FILE|@N13|[0005-0008]|PR(''Reference File:'')|CO(''RefFile'')')                                             ! [0005-0008] Define FILE reference
ReferenceRecord                             &RECORD,NAME('ReferenceRecord|&RECORD|@N13|[0009-0012]|PR(''Reference Record:'')|CO(''RefRecord'')')                                   ! [0009-0012] Define RECORD reference
ReferenceKey                                &KEY,NAME('ReferenceKey|&KEY|@N13|[0013-0016]|PR(''Reference Key:'')|CO(''RefKey'')')                                                  ! [0013-0016] Define KEY reference
ReferenceField                              &FIELD,NAME('ReferenceField|&FIELD|@N13|[0017-0020]|PR(''Reference Field:'')|CO(''RefField'')')                                        ! [0017-0020] Define FIELD reference
ReferenceView                               &VIEW,NAME('ReferenceView|&VIEW|@N13|[0021-0024]|PR(''Reference View:'')|CO(''RefView'')')                                             ! [0021-0024] Define VIEW reference
ReferenceWindow                             &WINDOW,NAME('ReferenceWindow|&WINDOW|@N13|[0025-0028]|PR(''Reference Window:'')|CO(''RefWindow'')')                                   ! [0025-0028] Define WINDOW reference
ReferenceReport                             &REPORT,NAME('ReferenceReport|&REPORT|@N13|[0029-0032]|PR(''Reference Report:'')|CO(''RefReport'')')                                   ! [0029-0032] Define REPORT reference
ReferenceClass                              &CLASS,NAME('ReferenceClass|&CLASS|@N13|[0033-0036]|PR(''Reference Class:'')|CO(''RefClass'')')                                        ! [0033-0036] Define CLASS reference
ReferenceGroup                              &GROUP,NAME('ReferenceGroup|&GROUP|@N13|[0037-0040]|PR(''Reference Group:'')|CO(''RefGroup'')')                                        ! [0037-0040] Define GROUP reference
ReferenceQueue                              &QUEUE,NAME('ReferenceQueue|&QUEUE|@N13|[0041-0044]|PR(''Reference Queue:'')|CO(''RefQueue'')')                                        ! [0041-0044] Define QUEUE reference
ReferenceLike                               &LIKE,NAME('ReferenceLike|&LIKE|@N13|[0045-0048]|PR(''Reference Like:'')|CO(''RefLike'')')                                             ! [0045-0048] Define LIKE reference
ReferencePicture                            &PICTURE,NAME('ReferencePicture|&PICTURE|@N13|[0049-0052]|PR(''Reference Picture:'')|CO(''RefPicture'')')                              ! [0049-0052] Define PICTURE reference
ReferenceType                               &TYPE,NAME('ReferenceType|&TYPE|@N13|[0053-0056]|PR(''Reference Type:'')|CO(''RefType'')')                                             ! [0053-0056] Define TYPE reference
ReferenceName                               &NAME,NAME('ReferenceName|&NAME|@N13|[0057-0060]|PR(''Reference Name:'')|CO(''RefName'')')                                             ! [0057-0060] Define NAME reference
ReferenceMemo                               &MEMO,NAME('ReferenceMemo|&MEMO|@N13|[0061-0064]|PR(''Reference Memo:'')|CO(''RefMemo'')')                                             ! [0061-0064] Define MEMO reference
ReferenceBlob                               &BLOB,NAME('ReferenceBlob|&BLOB|@N13|[0065-0068]|PR(''Reference Blob:'')|CO(''RefBlob'')')                                             ! [0065-0068] Define BLOB reference
                                          END
!EndRegion
!
!-Queue-
!
!Region
GTRR00_qRec                               QUEUE(GTRR00_tRec),TYPE,BINDABLE,PRE(qGTRR00)
                                          END
!EndRegion
!
!-Equates-
!
!Region
C_GTRR00_REFERENCEANY                       EQUATE(1)
C_GTRR00_REFERENCEFILE                      EQUATE(2)
C_GTRR00_REFERENCERECORD                    EQUATE(3)
C_GTRR00_REFERENCEKEY                       EQUATE(4)
C_GTRR00_REFERENCEFIELD                     EQUATE(5)
C_GTRR00_REFERENCEVIEW                      EQUATE(6)
C_GTRR00_REFERENCEWINDOW                    EQUATE(7)
C_GTRR00_REFERENCEREPORT                    EQUATE(8)
C_GTRR00_REFERENCECLASS                     EQUATE(9)
C_GTRR00_REFERENCEGROUP                     EQUATE(10)
C_GTRR00_REFERENCEQUEUE                     EQUATE(11)
C_GTRR00_REFERENCELIKE                      EQUATE(12)
C_GTRR00_REFERENCEPICTURE                   EQUATE(13)
C_GTRR00_REFERENCETYPE                      EQUATE(14)
C_GTRR00_REFERENCENAME                      EQUATE(15)
C_GTRR00_REFERENCEMEMO                      EQUATE(16)
C_GTRR00_REFERENCEBLOB                      EQUATE(17)
!EndRegion
!
!EOF
