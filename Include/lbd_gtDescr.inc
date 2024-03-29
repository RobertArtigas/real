  !BOF
  !
  ! Dictionary:   C:\_GIT_\RobertArtigas\real\Dictionary\rybabc.dct
  ! File:         C:\_GIT_\RobertArtigas\real\Include\lbd_gtDescr.inc
  ! Table:        gtDESCR:gtDescr
  ! Date-Time:    2022/05/21 - 07:28:30AM
  ! Purpose:      Generated List box format for Clarion
  ! Author:       Create List Box Template
  ! Narative:     This template is used to create list box formats
  !               from dictionary entries.
  !
  !Region Class_YES
  !-------------------------------------------------------------------------------------------------!
  ! Control:      ?gtDESCR_ListQ                                                                    !
  ! Object Name:  gtDESCR_oListClass                                                                !
  ! Queue List:   ListQ                                                                             !
  !-------------------------------------------------------------------------------------------------!
  ! This LIST structure is created to replace the one generated by the ABC templates.               !
  ! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
  !-------------------------------------------------------------------------------------------------!
  ! LIST,AT(4,40,400,40),USE(?gtDESCR_ListQ),HVSCROLL, |
  !   FORMAT('' & |
  !   '10C(0)|M~A~@s1@#8#' & |
  !   '28R(0)|M~Order~@n-4@#10#' & |
  !   '36L(0)|M~Code~@s9@#11#' & |
  !   '120L(0)|M~Name~@s240@#12#' & |
  !   '60L(0)|M~TS~@n15.0B@#1#' & |
  !   '60L(0)|M~STS~@n15.0B@#2#' & |
  !   '60L(0)|M~DTS~@n15.0B@#3#' & |
  !   '16R(0)|M~EV~@n-14@#4#' & |
  !   '44L(0)|M~DateUp~@D010-B@#5#' & |
  !   '44L(0)|M~TimeUp~@T04B@#6#' & |
  !   '80L(0)|M~UserUp~@s20@#7#' & |
  !   '88L(0)|M~GUID~@s16@#9#' & |
  !   ''), |
  !   FROM(gtDESCR_oListClass.ListQ), |
  !   #FIELDS(gtDESCR_oListClass.ListQ.active_flag, |
  !   gtDESCR_oListClass.ListQ.p_order, |
  !   gtDESCR_oListClass.ListQ.data_code, |
  !   gtDESCR_oListClass.ListQ.data_name, |
  !   gtDESCR_oListClass.ListQ.timestamp, |
  !   gtDESCR_oListClass.ListQ.servertimestamp, |
  !   gtDESCR_oListClass.ListQ.deletedtimestamp, |
  !   gtDESCR_oListClass.ListQ.encryptionversion, |
  !   gtDESCR_oListClass.ListQ.date_update, |
  !   gtDESCR_oListClass.ListQ.time_update, |
  !   gtDESCR_oListClass.ListQ.user_update, |
  !   gtDESCR_oListClass.ListQ.guid)
  !
  !EndRegion
  !Region Class_NO
  !-------------------------------------------------------------------------------------------------!
  ! Control:      ?gtDESCR_ListQ                                                                    !
  ! Queue List:   ListQ                                                                             !
  !-------------------------------------------------------------------------------------------------!
  ! This LIST structure is created to replace the one generated by the ABC templates.               !
  ! Save your generated window structure first, then cut and paste replacing your LIST structure.   !
  !-------------------------------------------------------------------------------------------------!
  ! LIST,AT(4,40,400,40),USE(?gtDESCR_ListQ),HVSCROLL, |
  !   FORMAT('' & |
  !   '10C(0)|M~A~@s1@#8#' & |
  !   '28R(0)|M~Order~@n-4@#10#' & |
  !   '36L(0)|M~Code~@s9@#11#' & |
  !   '120L(0)|M~Name~@s240@#12#' & |
  !   '60L(0)|M~TS~@n15.0B@#1#' & |
  !   '60L(0)|M~STS~@n15.0B@#2#' & |
  !   '60L(0)|M~DTS~@n15.0B@#3#' & |
  !   '16R(0)|M~EV~@n-14@#4#' & |
  !   '44L(0)|M~DateUp~@D010-B@#5#' & |
  !   '44L(0)|M~TimeUp~@T04B@#6#' & |
  !   '80L(0)|M~UserUp~@s20@#7#' & |
  !   '88L(0)|M~GUID~@s16@#9#' & |
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
  !   ListQ.guid)
  !
  !EndRegion
  !
  !EOF
