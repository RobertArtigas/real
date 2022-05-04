  !BOF
  !
  ! File:         C:\_GIT_\RobertArtigas\real\Include\lbd_gtNameAttr.inc
  ! Table:        gtNA01:gtNameAttr
  ! Date-Time:    2022/04/28 - 03:11:49PM
  ! Purpose:      Generated List box format for Clarion
  ! Author:       Create List Box Template
  ! Narative:     This template is used to create list box formats
  !               from dictionary entries.
  !
  !Region Class_YES
  !-------------------------------------------------------------------------------------------------!
  ! Control:      ?gtNA01_ListQ                                                                     !
  ! Class Name:   gtNA01_oListClass                                                                 !
  ! Queue List:   ListQ                                                                             !
  !-------------------------------------------------------------------------------------------------!
  ! This LIST structure is created to replace the one generated by the ABC templates.               !
  ! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
  !-------------------------------------------------------------------------------------------------!
  ! LIST,AT(4,40,400,40),USE(?gtNA01_ListQ),HVSCROLL, |
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
  !   FROM(gtNA01_oListClass.ListQ), |
  !   #FIELDS(gtNA01_oListClass.ListQ.FieldNumber, |
  !   gtNA01_oListClass.ListQ.FieldSalt, |
  !   gtNA01_oListClass.ListQ.FieldFrom, |
  !   gtNA01_oListClass.ListQ.FieldTo, |
  !   gtNA01_oListClass.ListQ.FieldName, |
  !   gtNA01_oListClass.ListQ.FieldWhom, |
  !   gtNA01_oListClass.ListQ.FieldType, |
  !   gtNA01_oListClass.ListQ.FieldFormat, |
  !   gtNA01_oListClass.ListQ.FieldRange, |
  !   gtNA01_oListClass.ListQ.FieldPrompt, |
  !   gtNA01_oListClass.ListQ.FieldColumn, |
  !   gtNA01_oListClass.ListQ.FieldTypeSQL, |
  !   gtNA01_oListClass.ListQ.FieldFormatSQL, |
  !   gtNA01_oListClass.ListQ.FieldTemp)
  !EndRegion
  !
  !Region Class_NO
  !-------------------------------------------------------------------------------------------------!
  ! Control:      ?gtNA01_ListQ                                                                     !
  ! Queue List:   ListQ                                                                             !
  !-------------------------------------------------------------------------------------------------!
  ! This LIST structure is created to replace the one generated by the ABC templates.               !
  ! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
  !-------------------------------------------------------------------------------------------------!
  ! LIST,AT(4,40,400,40),USE(?gtNA01_ListQ),HVSCROLL, |
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
  !EndRegion
  !
  !EOF