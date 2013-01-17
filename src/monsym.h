#ifndef MONSYM_H
#define MONSYM_H

/* I/O designators.  */

#define _PRIIN 0000100 /* Primary input designator.  */
#define _PRIOU 0000101 /* Primary output designator.  */
#define _NULIO 0377777 /* Null designator.  */
#define _SIGIO 0677777 /* Signal JFN.  */
#define _CTTRM 0777777 /* The job's controlling terminal.  */


/* GTJFN bits.  */

#define GJ_FOU 0400000000000 /* Create next higher generation.  */
#define GJ_NEW 0200000000000 /* Must be a new file.  */
#define GJ_OLD 0100000000000 /* Must be an existing file.  */
#define GJ_MSG 0040000000000 /* Print message after getting file spec.  */
#define GJ_CFM 0020000000000 /* Require user confirmation.  */
#define GJ_TMP 0010000000000 /* Temporary file.  */
#define GJ_NS  0004000000000 /* Search first file spec only.  */
#define GJ_ACC 0002000000000 /* No access by inferior processes.  */
#define GJ_DEL 0001000000000 /* Consider deleted files.  */
#define GJ_IFG 0000100000000 /* Wildcards allowed.  */
#define GJ_OFG 0000040000000 /* Don't associate with a file.  */
#define GJ_FLG 0000020000000 /* Return flags in left half of AC1.  */
#define GJ_PHY 0000010000000 /* Use physical device.  */
#define GJ_XTN 0000004000000
#define GJ_FNS 0000002000000 /* AC2 = input and output JFN.  */
#define GJ_SHT 0000001000000 /* Short form.  */
#define _GJDEF 0000000000000 /* Next higher or highest existing generation
				number, depending on GJ_FOU.  */
#define _GJNHG 0000000777777 /* Next higher generation number.  */
#define _GJLEG 0000000777776 /* Lowest existing generation number.  */
#define _GJALL 0000000777775 /* All generation numbers.  */


/* OPENF bits.  */

#define OF_BSZ 0770000000000
#define OF_MOD 0007400000000
#define OF_HER 0000000400000
#define OF_RD  0000000200000 /* Read access.  */
#define OF_WR  0000000100000 /* Write access.  */
#define OF_EX  0000000040000 /* Execute access.  */
#define OF_APP 0000000020000 /* Append access.  */
#define OF_RDU 0000000010000 /* Unrestricted read access.  */
#define OF_THW 0000000002000 /* Thawed access.  */
#define OF_AWT 0000000001000 /* Block until access is permitted.  */
#define OF_PDT 0000000000400 /* Don't update access dates.  */
#define OF_NWT 0000000000200 /* Return error if access not permitted.  */
#define OF_RTD 0000000000100 /* Restrict access to one process.  */
#define OF_PLN 0000000000040 /* Do not check for line numbers.  */
#define OF_DUD 0000000000020
#define OF_OFL 0000000000010
#define OF_FDT 0000000000004
#define OF_RAR 0000000000002


/* Error codes.  */

#define ABRKX1 602123 /* Address break not available on this system.  */
#define ABRKX2 602475 /* Address break facility is in use for system
			 debugging.  */
#define ABRKX3 602476 /* Use .ABRRG function to read break conditions.  */
#define ABRKX4 602477 /* AB%SEC is invalid on this processor.  */
#define ABRKX5 602500 /* Lower and upper bounds must be equal on this
			 processor.  */
#define ACESX1 601341 /* Argument block too small.  */
#define ACESX2 601342 /* Insufficient system resources.  */
#define ACESX3 601431 /* Password is required.  */
#define ACESX4 601432 /* Function not allowed for another job.  */
#define ACESX5 601433 /* No function specified for ACCES.  */
#define ACESX6 601435 /* Directory is not accessed.  */
#define ACESX7 602137 /* Directory is "files-only" and cannot be
                         accessed.  */
#define ALCX1  601137 /* Invalid function.  */
#define ALCX2  601140 /* WHEEL or OPERATOR capability required.  */
#define ALCX3  601141 /* Device is not assignable.  */
#define ALCX4  601142 /* Invalid job number.  */
#define ALCX5  601143 /* Device already assigned to another job.  */
#define ALCX6  601153 /* Device assigned to user job, but will be
			 given to allocator when released.  */
#define ANTX01 602454 /* No more network terminals available.  */
#define ARCFX2 602312 /* File already has archive status.  */
#define ARCFX3 602313 /* Cannot perform ARCF functions on nonmultiple
			 directory devices.  */
#define ARCFX4 602314 /* File is not on line.  */
#define ARCFX5 602315 /* Files not on the same device or structure.  */
#define ARCFX6 602316 /* File does not have archive status.  */
#define ARCFX7 602317 /* Invalid parameter.  */
#define ARCFX8 602320 /* Archive not complete.  */
#define ARCFX9 602321 /* File not off line.  */
#define ARCX10 602322 /* Archive prohibited.  */
#define ARCX11 602323 /* Archive requested, modification prohibited.  */
#define ARCX12 602324 /* Archive requested, delete prohibited.  */
#define ARCX13 602325 /* Archive system request not completed.  */
#define ARCX14 602332 /* File restore failed.  */
#define ARCX15 602333 /* Migration prohibited.  */
#define ARCX16 602334 /* Cannot exempt off-line file.  */
#define ARCX17 602335 /* FDB incorrect format for ARCF JSYS.  */
#define ARCX18 602336 /* Retrieval request cannot be fulfilled for
			 waiting process.  */
#define ARCX19 602337 /* Migration already pending.  */
#define ARGX01 601705 /* Invalid password.  */
#define ARGX02 601713 /* Invalid function.  */
#define ARGX03 601714 /* Illegal to change specified bits.  */
#define ARGX04 601715 /* Argument block too small.  */
#define ARGX05 601716 /* Argument block too long.  */
#define ARGX06 601717 /* Invalid page number.  */
#define ARGX07 601720 /* Invalid job number.  */
#define ARGX08 601721 /* No such job.  */
#define ARGX09 601722 /* Invalid byte size.  */
#define ARGX10 601723 /* Invalid access requested.  */
#define ARGX11 601724 /* Invalid directory number.  */
#define ARGX12 601725 /* Invalid process handle.  */
#define ARGX13 601726 /* Invalid software interrupt channel number.  */
#define ARGX14 601733 /* Invalid account identifier.  */
#define ARGX15 601734 /* Job is not logged in.  */
#define ARGX16 601741 /* Password is required.  */
#define ARGX17 601742 /* Invalid argument block length.  */
#define ARGX18 601743 /* Invalid structure name.  */
#define ARGX19 602033 /* Invalid unit number.  */
#define ARGX20 602171 /* Invalid arithmetic trap argument.  */
#define ARGX21 602172 /* Invalid LUUO trap argument.  */
#define ARGX22 602173 /* Invalid flags.  */
#define ARGX23 602177 /* Invalid section number.  */
#define ARGX24 602200 /* Invalid count.  */
#define ARGX25 602246 /* Invalid class.  */
#define ARGX26 602340 /* File is off line.  */
#define ARGX27 602341 /* Off line expiration time cannot exceed system
			 or directory maximum.  */
#define ARGX28 602412 /* not available on this system.  */
#define ARGX29 602414 /* Invalid class share.  */
#define ARGX30 602415 /* Invalid KNOB value.  */
#define ARGX31 602416 /* Class Scheduler already enabled.  */
#define ARGX32 605600 /* On line expiration cannot exceed system or
			 directory maximum.  */
#define ARPNSP 603457 /* Insufficient system resources (No space for
			 ARP buffers.  */
#define ASNDX1 600300 /* Device is not assignable.  */
#define ASNDX2 600301 /* Illegal to assign this device.  */
#define ASNDX3 600302 /* No such device.  */
#define ASNSX1 600740 /* Insufficient system resources (All special
			 queues in use).  */
#define ASNSX2 600741 /* Link(s) assigned to another special queue.  */
#define ATACX1 600320 /* Invalid job number.  */
#define ATACX2 600321 /* Job already attached.  */
#define ATACX3 600322 /* Incorrect user number.  */
#define ATACX4 600323 /* Invalid password.  */
#define ATACX5 600324 /* This job has no controlling terminal.  */
#define ATACX6 601502 /* Terminal is already attached to a job.  */
#define ATACX7 601503 /* Illegal terminal number.  */
#define ATIX1  600352 /* Invalid software interrupt channel number.  */
#define ATIX2  600353 /* Control-C capability required.  */
#define ATNX1  600710 /* Invalid receive JFN.  */
#define ATNX10 600721 /* Send JFN is not a NET connection.  */
#define ATNX11 600722 /* Send JFN has been used.  */
#define ATNX12 600723 /* Send connection refused.  */
#define ATNX13 600724 /* Insufficient system resources (No NVT's).  */
#define ATNX2  600711 /* Receive JFN not opened for read.  */
#define ATNX3  600712 /* Receive JFN not open.  */
#define ATNX4  600713 /* Receive JFN is not a NET connection.  */
#define ATNX5  600714 /* Receive JFN has been used.  */
#define ATNX6  600715 /* Receive connection refused.  */
#define ATNX7  600716 /* Invalid send JFN.  */
#define ATNX8  600717 /* Send JFN not opened for write.  */
#define ATNX9  600720 /* Send JFN not open.  */
#define ATSX01 602146 /* Invalid mode.  */
#define ATSX02 602147 /* Illegal to declare mode twice.  */
#define ATSX03 602150 /* Illegal to declare mode after acquiring
                         terminal.  */
#define ATSX04 602151 /* Invalid event code.  */
#define ATSX05 602152 /* Invalid function code for channel assignment.  */
#define ATSX06 602153 /* JFN is not an ATS JFN.  */
#define ATSX07 602154 /* Table length too small.  */
#define ATSX08 602155 /* Table lengths must be the same.  */
#define ATSX09 602156 /* Table length too large.  */
#define ATSX10 602157 /* Maximum applications terminals for system
			 already assigned.  */
#define ATSX11 602160 /* Byte count is too large.  */
#define ATSX12 602161 /* Terminal not assigned to this JFN.  */
#define ATSX13 602162 /* Terminal is XOFF'd.  */
#define ATSX14 602163 /* Terminal has been released.  */
#define ATSX15 602164 /* Terminal identifier is not assigned.  */
#define ATSX16 602166 /* Invalid Host Terminal Number.  */
#define ATSX17 602167 /* Output failed -- monitor internal error.  */
#define ATSX18 602174 /* ATS input message too long for internal
                         buffers.  */
#define ATSX19 602175 /* Monitor internal error - ATS input message
                         truncated.  */
#define ATSX20 602176 /* Illegal to close JFN with terminal assigned.  */
#define ATSX21 602213 /* Maximum applications terminals for job
			 already assigned.  */
#define ATSX22 602214 /* Failed to acquire applications terminal.  */
#define ATSX23 602215 /* Invalid device name.  */
#define ATSX24 602216 /* Invalid server name.  */
#define ATSX25 602217 /* Terminal is already released.  */
#define ATSX26 602226 /* Invalid host name.  */
#define ATSX27 602276 /* Terminal is not open.  */
#define ATSX28 602277 /* Unknown error received.  */
#define ATSX29 602300 /* Receive error threshold exceeded.  */
#define ATSX30 602301 /* Reply threshold exceeded.  */
#define ATSX31 602302 /* NAK threshold exceeded.  */
#define ATSX32 602303 /* Terminal protocol error.  */
#define ATSX33 602304 /* Intervention required at terminal.  */
#define ATSX34 602305 /* Powerfail.  */
#define ATSX35 602306 /* Data pipe was disconnected.  */
#define ATSX36 602307 /* Dialup terminal was attached.  */
#define BKJFX1 600454 /* Illegal to back up terminal pointer twice.  */
#define BOTX01 602016 /* Invalid DTE-20 number.  */
#define BOTX02 602017 /* Invalid byte size.  */
#define BOTX03 602031 /* Invalid protocol version number.  */
#define BOTX04 602114 /* Byte count is not positive.  */
#define BOTX05 602132 /* Protocol initialization failed.  */
#define BOTX06 602434 /* GTJFN failed for dump file.  */
#define BOTX07 602435 /* OPENF failed for dump file.  */
#define BOTX08 602436 /* Dump failed.  */
#define BOTX09 602437 /* To -10 error on dump.  */
#define BOTX10 602440 /* To -11 error on dump.  */
#define BOTX11 602441 /* Failed to assign page on dump.  */
#define BOTX12 602442 /* Reload failed.  */
#define BOTX13 602443 /* -11 didn't power down.  */
#define BOTX14 602444 /* -11 didn't power up.  */
#define BOTX15 602445 /* ROM did not ACK the -10.  */
#define BOTX16 602446 /* -11 boot program did not make it to -11.  */
#define BOTX17 602447 /* -11 took more than 1 minute to reload.  Will
			 cause retry.  */
#define BOTX18 602450 /* Unknown BOOT error.  */
#define BOTX19 602467 /* Overdue To-11 transfer aborted.  */
#define BOTX20 602470 /* Overdue To-10 transfer aborted.  */
#define CACTX1 600045 /* Invalid account identifier.  */
#define CACTX2 600046 /* Job is not logged in.  */
#define CAPX1  600615 /* WHEEL or OPERATOR capability required.  */
#define CAPX2  601231 /* WHEEL, OPERATOR, or MAINTENANCE capability
                         required.  */
#define CAPX3  601706 /* WHEEL capability required.  */
#define CAPX4  601707 /* WHEEL or IPCF capability required.  */
#define CAPX6  601711 /* ENQ/DEQ capability required.  */
#define CAPX7  601712 /* Confidential Information Access Capability
                         required.  */
#define CFDBX1 600430 /* Invalid displacement.  */
#define CFDBX2 600431 /* Illegal to change specified bits.  */
#define CFDBX3 600432 /* Write or owner access required.  */
#define CFDBX4 600433 /* Invalid value for specified bits.  */
#define CFDBX5 600434 /* No FDB for non-directory devices.  */
#define CFGAAB 602741 /* Error accessing argument block.  */
#define CFGBFC 602736 /* Function code out of range.  */
#define CFGBTS 602737 /* Argument block too short.  */
#define CFGIAB 602740 /* Invalid argument block address.  */
#define CFGINA 602742 /* Information not available for this function.  */
#define CFRKX3 600363 /* Insufficient system resources.  */
#define CIBDCD 601471 /* Bad CI op code.  */
#define CIBDFQ 601501 /* BAD CI FREE QUEUE.  */
#define CIBDOF 601465 /* BAD BDT offset given.  */
#define CILNER 601474 /* CI length error.  */
#define CIMXND 601463 /* Maximum memory driver nodes assigned.  */
#define CINOFQ 601466 /* No CI free queue entries left.  */
#define CINOND 601464 /* No LCS node slots availble.  */
#define CINOND 601473 /* Dead LCS node.  */
#define CINOPG 601467 /* No BDT page slots left.  */
#define CINPTH 601470 /* Target CI LCS node is dead, no path to it.  */
#define CIUNOP 601472 /* Undefined op code (in range but not yet
                         defined).  */
#define CKAX1  601154 /* Argument block too small.  */
#define CKAX2  601155 /* Invalid directory number.  */
#define CKAX3  601156 /* Invalid access code.  */
#define CKAX4  601271 /* File is not on disk.  */
#define CLSX1  600160 /* File is not open.  */
#define CLSX2  600161 /* File cannot be closed by this process.  */
#define CLSX3  601151 /* File still mapped.  */
#define CLSX4  601217 /* Device still active.  */
#define CNDIX1 600200 /* Invalid password.  */
#define CNDIX2 601241 /* WHEEL or OPERATOR capability required.  */
#define CNDIX3 600202 /* Invalid directory number.  */
#define CNDIX4 601242 /* Invalid job number.  */
#define CNDIX5 600204 /* Job is not logged in.  */
#define CNDIX6 601243 /* Job is not logged in.  */
#define CNDIX7 602004 /* The CNDIR JSYS has been replaced by ACCES.  */
#define COMNX1 601257 /* Invalid COMND function code.  */
#define COMNX2 601260 /* Field too long for internal buffer.  */
#define COMNX3 601261 /* Command too long for internal buffer.  */
#define COMNX4 601262 /* Invalid character in input.  */
#define COMNX5 601265 /* Invalid string pointer argument.  */
#define COMNX6 601266 /* Problem in indirect file.  */
#define COMNX7 601267 /* Error in command.  */
#define COMNX8 601321 /* Number base out of range 2-10.  */
#define COMNX9 601413 /* End of input file reached.  */
#define COMX10 601767 /* Invalid default string.  */
#define COMX11 602035 /* Invalid CMRTY pointer.  */
#define COMX12 602036 /* Invalid CMBFP pointer.  */
#define COMX13 602037 /* Invalid CMPTR pointer.  */
#define COMX14 602040 /* Invalid CMABP pointer.  */
#define COMX15 602041 /* Invalid default string pointer.  */
#define COMX16 602042 /* Invalid help message pointer.  */
#define COMX17 602043 /* Invalid byte pointer in function block.  */
#define COMX18 602134 /* Invalid character in node name.  */
#define COMX19 602135 /* Too many characters in node name.  */
#define COMX20 602212 /* Invalid node name.  */
#define COMX21 602452 /* Node name doesn't contain an alphabetic
                         character.  */
#define COMX22 605603 /* Invalid use of quoting character in directory
                         name.  */
#define COMX23 605604 /* Invalid use of quoting character in username.  */
#define CRDI10 601170 /* Maximum directory number exceeded; index
			 table needs expanding.  */
#define CRDI11 601427 /* Invalid terminating bracket on directory.  */
#define CRDI12 601451 /* Structure is not mounted.  */
#define CRDI13 602101 /* Request exceeds superior directory working
                         quota.  */
#define CRDI14 602102 /* Request exceeds superior directory permanent
                         quota.  */
#define CRDI15 602103 /* Request exceeds superior directory
			 subdirectory quota.  */
#define CRDI16 602104 /* Invalid user group.  */
#define CRDI17 602117 /* Illegal to create non-files-only subdirectory
			 under files-only directory.  */
#define CRDI18 602127 /* Illegal to delete logged-in directory.  */
#define CRDI19 602130 /* Illegal to delete connected directory.  */
#define CRDI20 602133 /* WHEEL, OPERATOR, or requested capability
                         required.  */
#define CRDI21 602136 /* Working space insufficient for current
                         allocation.  */
#define CRDI22 602140 /* Subdirectory quota insufficient for existing
			 subdirectories.  */
#define CRDI23 602141 /* Superior directory does not exist.  */
#define CRDI24 602144 /* Invalid subdirectory quota.  */
#define CRDI25 602540 /* Maximum number of remote aliases exceeded.  */
#define CRDI26 602541 /* CRDIR block does not include password
			 encryption version.  */
#define CRDI27 602542 /* Attempt to use encrypted password on
			 unencrypted structure.  */
#define CRDI28 602544 /* Invalid password encryption version number.  */
#define CRDI29 602772 /* Illegal to disallow subdirectory user group
			 while in use.  */
#define CRDI30 605631 /* Insufficient password length.  */
#define CRDI31 605637 /* Password expiration date is too far in the
                         future.  */
#define CRDI32 605640 /* Password expiration is not enabled on this
                         system.  */
#define CRDI33 605641 /* Password found in system password dictionary.  */
#define CRDIX1 600620 /* WHEEL or OPERATOR capability required.  */
#define CRDIX2 600621 /* Illegal to change number of old directory.  */
#define CRDIX3 600622 /* Insufficient system resources (Job Storage
			 Block full).  */
#define CRDIX4 600623 /* Superior directory full.  */
#define CRDIX5 600624 /* Directory name not given.  */
#define CRDIX6 601412 /* Directory file is mapped.  */
#define CRDIX7 600626 /* File(s) open in directory.  */
#define CRDIX8 601166 /* Invalid directory number.  */
#define CRDIX9 601167 /* Internal format of directory is incorrect.  */
#define CRJBX1 600020 /* Invalid parameter or function bit
                         combination.  */
#define CRJBX2 600021 /* Illegal for created job to enter MINI-EXEC.  */
#define CRJBX3 600022 /* Reserved.  */
#define CRJBX4 600023 /* Terminal is not available.  */
#define CRJBX5 600024 /* Unknown name for LOGIN.  */
#define CRJBX6 600025 /* Insufficient system resources.  */
#define CRJBX7 600026 /* Reserved.  */
#define CRLNX1 601000 /* Logical name is not defined.  */
#define CRLNX2 601134 /* WHEEL or OPERATOR capability required.  */
#define CRLNX3 601152 /* Invalid function.  */
#define CTSX01 601600 /* CTSOP% Function Code Out of Range.  */
#define CTSX02 601601 /* Undefined CTSOP% Function.  */
#define CTSX03 601602 /* Insufficient System Resources (No JSB Free
                         Space).  */
#define CTSX04 601603 /* No Default Canonical Library Name.  */
#define CTSX05 601604 /* Illegal to Issue CTSOP% .CTCAL Function from
			 Section Zero.  */
#define CTSX06 601605 /* Stack Overflow During CTSOP% .CTCAL Function.  */
#define CTSX07 601606 /* Illegal Memory Write During CTSOP% .CTCAL
                         Function.  */
#define CTSX08 601607 /* Invalid Function Code Given During CTSOP%
			 .CTCAL Function.  */
#define CTSX09 601610 /* No Address of CTS Descriptor Block Found in
			 Library Descriptor Block of Library.  */
#define CTSX10 601611 /* Length of CTS Descriptor Block Incorrect.  */
#define CTSX11 601612 /* Invalid Number of Pages in CTS Descriptor
                         Block.  */
#define CTSX12 601613 /* No Monitor Pages Available for Terminal Data
                         Base.  */
#define CTSX13 601614 /* Unimplemented Canonical Terminal Operation.  */
#define CVHST1 600727 /* No string for that Host number.  */
#define CVSKX1 600730 /* Invalid network JFN.  */
#define CVSKX2 600731 /* Local socket invalid in this context.  */
#define DAPX0  602501 /* Illegal DAP% function code.  */
#define DAPX1  602502 /* Nested ACLREPs in formatting table not
                         allowed.  */
#define DAPX10 602513 /* LENGTH or LEN256 field present in message
                         block.  */
#define DAPX11 602514 /* Protocol error on receive, DAP length exceeds
			 DECnet length.  */
#define DAPX12 602515 /* Message type is not DATA, yet there is a
			 BITCNT field.  */
#define DAPX13 602516 /* Field following ACLREP is not VALUE1 or
                         VALUE2.  */
#define DAPX14 602517 /* Invalid link handle.  */
#define DAPX15 602520 /* Transmission in progress, AC2 has retry
			 message block addr.  */
#define DAPX16 602521 /* CONTINUE TRANSFER message cannot be sent as
			 normal message.  */
#define DAPX17 602522 /* Only CONTINUE TRANSFER messages can be sent
			 as interrupt.  */
#define DAPX18 602523 /* Interrupt messages cannot be sent blocked.  */
#define DAPX19 602524 /* There is already an interrupt transmission is
			 progress.  */
#define DAPX2  602503 /* Parse error, fixed length field has wrong
                         length.  */
#define DAPX20 602525 /* Receive in progress.  */
#define DAPX21 602526 /* There is no interrupt message available.  */
#define DAPX22 602527 /* Illegal function for passive link.  */
#define DAPX23 602530 /* Illegal function for active link.  */
#define DAPX24 602531 /* There is no message available.  */
#define DAPX25 602532 /* Protocol error on receive, message was too
			 long DAPX2 6602533 Too many message blocks
			 chained together.  */
#define DAPX27 602534 /* Illegal function for this state.  */
#define DAPX28 602535 /* Feature not supported by remote server.  */
#define DAPX29 602536 /* Protocol error on receive - wrong message
                         type.  */
#define DAPX3  602504 /* Parse error, expecting more bytes.  */
#define DAPX30 602537 /* No alias for this node.  */
#define DAPX4  602505 /* Message byte length was too long for this
                         link.  */
#define DAPX5  602506 /* Parse error, variable length field was too
                         long.  */
#define DAPX6  602507 /* Parse error, bit mask was too long.  */
#define DAPX7  602510 /* Illegal DAP% message type.  */
#define DAPX8  602511 /* Protocol error on receive, LEN256 field
			 without LENGTH field.  */
#define DAPX9  602512 /* Parse error on receive, extra bytes at end of
			 message.  */
#define DATEX1 600466 /* Year out of range.  */
#define DATEX2 600467 /* Month is not less than 12.  */
#define DATEX3 600470 /* Day of month too large.  */
#define DATEX4 600471 /* Day of week is not less than 7.  */
#define DATEX5 600472 /* Date out of range.  */
#define DATEX6 600473 /* System date and time are not set.  */
#define DATEX7 602310 /* Julian day is out of range.  */
#define DBRKX1 601275 /* No interrupts in progress.  */
#define DCNX1  602020 /* Invalid network file name.  */
#define DCNX11 602026 /* Link aborted.  */
#define DCNX12 602027 /* String exceeds 16 bytes.  */
#define DCNX13 602202 /* Node not accessible.  */
#define DCNX14 602203 /* Previous interrupt message outstanding.  */
#define DCNX15 602204 /* No interrupt message available.  */
#define DCNX16 602554 /* Illegal operation for current link state.  */
#define DCNX2  602122 /* Interrupt message must be read first.  */
#define DCNX3  602022 /* Invalid object.  */
#define DCNX4  602023 /* Invalid task name.  */
#define DCNX5  602021 /* No more logical links available.  */
#define DCNX8  602025 /* Invalid network operation.  */
#define DCNX9  602024 /* Object is already defined.  */
#define DECRSV 601456 /* DEC reserved bits not zero.  */
#define DELDX1 601171 /* WHEEL or OPERATOR capability required.  */
#define DELDX2 601172 /* Invalid directory number.  */
#define DELF10 602100 /* Directory still contains subdirectory.  */
#define DELFX1 600170 /* Delete access required.  */
#define DELFX2 601303 /* File cannot be expunged because it is
                         currently open.  */
#define DELFX3 601304 /* System scratch area depleted; file not
                         deleted.  */
#define DELFX4 601305 /* Directory symbol table could not be rebuilt.  */
#define DELFX5 601306 /* Directory symbol table needs rebuilding.  */
#define DELFX6 601307 /* Internal format of directory is incorrect.  */
#define DELFX7 601310 /* FDB formatted incorrectly; file not deleted.  */
#define DELFX8 601311 /* FDB not found; file not deleted.  */
#define DELFX9 601411 /* File is not a directory file.  */
#define DELX11 602330 /* File has archive status, delete is not
                         permitted.  */
#define DELX12 602331 /* File has no pointer to offline storage.  */
#define DELX13 602453 /* File is marked "Never Delete".  */
#define DESX1  600150 /* Invalid source/destination designator.  */
#define DESX10 601417 /* Structure is dismounted.  */
#define DESX11 602410 /* Invalid operation for this label type.  */
#define DESX2  600151 /* Terminal is not available to this job.  */
#define DESX3  600152 /* JFN is not assigned.  */
#define DESX4  600153 /* Invalid use of terminal designator or string
                         pointer.  */
#define DESX5  600154 /* File is not open.  */
#define DESX6  600155 /* Device is not a terminal.  */
#define DESX7  600156 /* Illegal use of parse-only JFN or output
			 wildcard-designators.  */
#define DESX8  600157 /* File is not on disk.  */
#define DESX9  601340 /* Invalid operation for this device.  */
#define DEVX1  600335 /* Invalid device designator.  */
#define DEVX2  600336 /* Device already assigned to another job.  */
#define DEVX3  600337 /* Device is not on line.  */
#define DEVX4  601737 /* Device is not assignable.  */
#define DEVX5  601744 /* No such device.  */
#define DEVX6  602275 /* Job has open JFN on device.  */
#define DEVX7  602417 /* Null device name given.  */
#define DIAG10 601205 /* Subunit does not exist.  */
#define DIAG11 602406 /* Unit already online.  */
#define DIAG12 602407 /* Unit not online.  */
#define DIAG13 602614 /* Datagram buffer not available.  */
#define DIAG14 602705 /* Port doesn't exist or is not a CI port.  */
#define DIAG15 602706 /* CI counters not available.  */
#define DIAG16 602707 /* Fork doesn't own CI counters.  */
#define DIAG17 602712 /* CI chan is not enabled.  */
#define DIAG20 602713 /* Diagnostic owns the channel.  */
#define DIAG21 601513 /* Performance counter read timed out.  */
#define DIAG21 602767 /* DIAG% Illegal for Dual Ported Disks.  */
#define DIAG22 601515 /* Illegal CI node number.  */
#define DIAG23 601516 /* No System Block for Remote CI Node.  */
#define DIAG24 601517 /* Remote CI Node does not support this
                         function.  */
#define DIAG25 601520 /* Remote CI Node not in correct state for this
			 function.  */
#define DIAG26 601521 /* Illegal argument for this DIAG% function.  */
#define DIAG27 601522 /* Read/Write of CI Maintenance data timed out.  */
#define DIAG30 601523 /* Read/Write of CI Maintenance data finished
			 with an error.  */
#define DIAGX1 601174 /* Invalid function.  */
#define DIAGX2 601175 /* Device is not assigned.  */
#define DIAGX3 601176 /* Argument block too small.  */
#define DIAGX4 601177 /* Invalid device type.  */
#define DIAGX5 601200 /* WHEEL, OPERATOR, or MAINTENANCE capability
                         required.  */
#define DIAGX6 601201 /* Invalid channel command list.  */
#define DIAGX7 601202 /* Illegal to do I/O across page boundary.  */
#define DIAGX8 601203 /* No such device.  */
#define DIAGX9 601204 /* Unit does not exist.  */
#define DILFX1 600464 /* Invalid date format.  */
#define DIRX1  601313 /* Invalid directory number.  */
#define DIRX2  601314 /* Insufficient system resources.  */
#define DIRX3  601315 /* Internal format of directory is incorrect.  */
#define DIRX4  601745 /* Invalid directory specification.  */
#define DIRX5  602342 /* Directory too large.  */
#define DKOP01 602757 /* Illegal disk address.  */
#define DKOP02 602760 /* Transfer too large.  */
#define DKOP03 602761 /* Invalid unit specified.  */
#define DKOP04 602762 /* Illegal address specified.  */
#define DKOP05 602763 /* Size not sector size.  */
#define DKOP06 602770 /* Data or device error.  */
#define DKOP07 602771 /* Device is offline.  */
#define DLFX10 602010 /* Cannot delete directory; file still mapped.  */
#define DLFX11 602011 /* Cannot delete directory file in this manner.  */
#define DOBX01 601615 /* Not a BUGCHK or BUGINF.  */
#define DOBX02 601616 /* DOB is disabled.  */
#define DOBX03 601617 /* DOB already disabled.  */
#define DOBX04 601620 /* DOB already enabled.  */
#define DOBX05 601621 /* Dump was not requested for this BUG.  */
#define DOBX06 601622 /* Dump was already requested for this BUG.  */
#define DOBX07 601623 /* Structure is not dumpable.  */
#define DOBX08 601624 /* DOB timeout out of range.  */
#define DSKOX1 601343 /* Channel number too large.  */
#define DSKOX2 601344 /* Unit number too large.  */
#define DSKOX3 601416 /* Invalid structure number.  */
#define DSKOX4 601420 /* Invalid address type specified.  */
#define DSKOX5 601533 /* Invalid word count.  */
#define DSKOX6 601534 /* Invalid buffer address.  */
#define DSKX01 601365 /* Invalid structure number.  */
#define DSKX02 601366 /* Bit table is being initialized.  */
#define DSKX03 601367 /* Bit table has not been initialized.  */
#define DSKX04 601370 /* Bit table being initialized by another job.  */
#define DSKX05 601763 /* Disk assignments and deassignments are
			 currently prohibited.  */
#define DSKX06 601764 /* Invalid disk address.  */
#define DSKX07 601765 /* Address cannot be deassigned because it is
			 not assigned.  */
#define DSKX08 601766 /* Address cannot be assigned because it is
			 already assigned.  */
#define DSMX1  600555 /* File(s) not closed.  */
#define DUMPX1 600440 /* Command list error.  */
#define DUMPX2 600441 /* JFN is not open in dump mode.  */
#define DUMPX3 600442 /* Address error (too big or crosses end of
                         memory).  */
#define DUMPX4 600443 /* Access error (cannot read or write data in
                         memory).  */
#define DUMPX5 601214 /* No-wait dump mode not supported for this
                         device.  */
#define DUMPX6 601215 /* Dump mode not supported for this device.  */
#define DYNX01 601561 /* DYNLB% Function Code Out of Range.  */
#define DYNX02 601562 /* Undefined DYNLB% Function.  */
#define DYNX03 601563 /* No Free Section In Which to Map Dynamic
                         Library.  */
#define DYNX04 601564 /* Unable to Get a JFN on Dynamic Library File.  */
#define DYNX05 601565 /* Unable to Get Dynamic Library.  */
#define DYNX06 601566 /* No Program Data Vector Found in Dynamic
                         Library.  */
#define DYNX07 601567 /* More Than One Dynamic Library in File.  */
#define DYNX08 601570 /* Unable to Un-Map Section During De-Link
                         Operation.  */
#define DYNX09 601571 /* No Transfer Vector Address in Library
			 Descriptor Block of Dynamic Library.  */
#define DYNX10 601572 /* Library Name String Too Long.  */
#define DYNX11 601573 /* Unable to Make Library Known (No JSB Free
                         Space).  */
#define EFCTX1 600050 /* WHEEL or OPERATOR capability required.  */
#define EFCTX2 600051 /* Entry cannot be longer than 64 words.  */
#define EFCTX3 600052 /* Fatal error when accessing FACT file.  */
#define ENACX1 602105 /* Account validation data base file not
			 completely closed.  */
#define ENACX2 602106 /* Cannot get a JFN for
                         <SYSTEM>ACCOUNTS-TABLE.BIN.  */
#define ENACX3 602107 /* Account validation data base file too long.  */
#define ENACX4 602110 /* Cannot get an OFN for
                         <SYSTEM>ACCOUNTS-TABLE.BIN.  */
#define ENACX5 602131 /* Account validation data base file is empty.  */
#define ENQX1  601055 /* Invalid function.  */
#define ENQX10 601066 /* Invalid argument block length.  */
#define ENQX11 601067 /* Invalid software interrupt channel number.  */
#define ENQX12 601070 /* Invalid number of resources requested.  */
#define ENQX13 601071 /* Indirect or indexed byte pointer not allowed.  */
#define ENQX14 601072 /* Invalid byte size.  */
#define ENQX15 601073 /* ENQ/DEQ capability required.  */
#define ENQX16 601074 /* WHEEL or OPERATOR capability required.  */
#define ENQX17 601075 /* Invalid JFN.  */
#define ENQX18 601076 /* Quota exceeded.  */
#define ENQX19 601077 /* String too long.  */
#define ENQX2  601056 /* Level number too small.  */
#define ENQX20 601100 /* Locked JFN cannot be closed.  */
#define ENQX21 601101 /* Job is not logged in.  */
#define ENQX22 602121 /* Invalid mask block length.  */
#define ENQX23 602120 /* Mismatched mask block lengths.  */
#define ENQX24 602773 /* Internal resources exhausted (No more SCA
                         buffers).  */
#define ENQX3  601057 /* Request and lock level numbers do not match.  */
#define ENQX4  601060 /* Number of pool and lock resources do not
                         match.  */
#define ENQX5  601061 /* Lock already requested.  */
#define ENQX6  601062 /* Requested locks are not all locked.  */
#define ENQX7  601063 /* No ENQ on this lock.  */
#define ENQX8  601064 /* Invalid access change requested.  */
#define ENQX9  601065 /* Invalid number of blocks specified.  */
#define FDFRX1 600700 /* Not a multiple-directory device.  */
#define FDFRX2 600701 /* Invalid directory number.  */
#define FFFFX1 601457 /* No free pages in file.  */
#define FFUFX1 600544 /* File is not open.  */
#define FFUFX2 600545 /* File is not on multiple-directory device.  */
#define FFUFX3 600546 /* No used page found.  */
#define FILX01 601704 /* File is not open.  */
#define FILX02 601735 /* Write or owner access required.  */
#define FILX03 601736 /* List access required.  */
#define FILX04 601740 /* File is not on multiple-directory device.  */
#define FILX05 601746 /* File expunged.  */
#define FLINX1 600650 /* First character is not blank or numeric.  */
#define FLINX2 600651 /* Number too small.  */
#define FLINX3 600652 /* Number too large.  */
#define FLINX4 600653 /* Invalid format.  */
#define FLOTX1 600660 /* Column overflow in field 1 or 2.  */
#define FLOTX2 600661 /* Column overflow in field 3.  */
#define FLOTX3 600662 /* Invalid format specified.  */
#define FRKHX1 600250 /* Invalid process handle.  */
#define FRKHX2 600251 /* Illegal to manipulate a superior process.  */
#define FRKHX3 600252 /* Invalid use of multiple process handle.  */
#define FRKHX4 600253 /* Process is running.  */
#define FRKHX5 600254 /* Process has not been started.  */
#define FRKHX6 600255 /* All relative process handles in use.  */
#define FRKHX7 601312 /* Process page cannot exceed 777.  */
#define FRKHX8 602170 /* Illegal to manipulate an execute-only
                         process.  */
#define GACCX1 601272 /* Invalid job number.  */
#define GACCX2 601273 /* No such job.  */
#define GACCX3 601301 /* Confidential Information Access capability
                         required.  */
#define GACTX1 600540 /* File is not on multiple-directory device.  */
#define GACTX2 600541 /* File expunged.  */
#define GACTX3 601173 /* Internal format of directory is incorrect.  */
#define GETX1  600373 /* Invalid save file format.  */
#define GETX2  600374 /* System Special Pages Table full.  */
#define GETX3  601703 /* Illegal to overlay existing pages.  */
#define GETX4  601557 /* Illegal to relocate (via .GBASE) a
			 multi-section exe file.  */
#define GETX5  601560 /* Exe file directory entry specifies a
			 section-crossing.  */
#define GFDBX1 600424 /* Invalid displacement.  */
#define GFDBX2 600425 /* Invalid number of words.  */
#define GFDBX3 600426 /* List access required.  */
#define GFKSX1 601011 /* Area too small to hold process structure.  */
#define GFRKX1 600371 /* Invalid process handle.  */
#define GFUSX1 601371 /* Invalid function.  */
#define GFUSX2 601372 /* Insufficient system resources.  */
#define GFUSX3 601452 /* File expunged.  */
#define GFUSX4 601453 /* Internal format of directory is incorrect.  */
#define GJFX1  600055 /* Desired JFN invalid.  */
#define GJFX10 600066 /* Generation number is not numeric.  */
#define GJFX11 600067 /* More than one generation number field is not
                         allowed.  */
#define GJFX12 600070 /* More than one account field is not allowed.  */
#define GJFX13 600071 /* More than one protection field is not
                         allowed.  */
#define GJFX14 600072 /* Invalid protection.  */
#define GJFX15 600073 /* Invalid confirmation character.  */
#define GJFX16 600074 /* No such device.  */
#define GJFX17 600075 /* No such directory name.  */
#define GJFX18 600076 /* No such filename.  */
#define GJFX19 600077 /* No such file type.  */
#define GJFX2  600056 /* Desired JFN not available.  */
#define GJFX20 600100 /* No such generation number.  */
#define GJFX21 600101 /* File was expunged.  */
#define GJFX22 600102 /* Insufficient system resources (Job Storage
			 Block full).  */
#define GJFX23 600103 /* Exceeded maximum number of files per
                         directory.  */
#define GJFX24 600104 /* File not found.  */
#define GJFX27 600107 /* File already exists (new file required).  */
#define GJFX28 600110 /* Device is not on line.  */
#define GJFX29 600111 /* Device is not available to this job.  */
#define GJFX3  600057 /* No JFN available.  */
#define GJFX30 600112 /* Account is not numeric.  */
#define GJFX31 600113 /* Invalid wildcard designator.  */
#define GJFX32 600114 /* No files match this specification.  */
#define GJFX33 600115 /* Filename was not specified.  */
#define GJFX34 600116 /* Invalid character "?" in file specification.  */
#define GJFX35 600117 /* Directory access privileges required.  */
#define GJFX36 600760 /* Internal format of directory is incorrect.  */
#define GJFX37 601133 /* Input deleted.  */
#define GJFX38 601164 /* File not found because output-only device was
			 specified.  */
#define GJFX39 601165 /* Logical name loop detected.  */
#define GJFX4  600060 /* Invalid character in filename.  */
#define GJFX40 601225 /* Undefined attribute in file specification.  */
#define GJFX41 601277 /* File name must not exceed 6 characters.  */
#define GJFX42 601300 /* File type must not exceed 3 characters.  */
#define GJFX43 601754 /* More than one ;T specification is not
                         allowed.  */
#define GJFX44 602012 /* Account string does not match.  */
#define GJFX45 602060 /* Illegal to request multiple specifications
			 for the same attribute.  */
#define GJFX46 602061 /* Attribute value is required.  */
#define GJFX47 602062 /* Attribute does not take a value.  */
#define GJFX48 602064 /* GTJFN input buffer is empty.  */
#define GJFX49 602065 /* Invalid attribute for this device.  */
#define GJFX5  600061 /* Field cannot be longer than 39 characters.  */
#define GJFX50 602205 /* Invalid argument for attribute.  */
#define GJFX51 602211 /* Byte count too small.  */
#define GJFX52 602420 /* End of tape encountered while searching for
                         file.  */
#define GJFX53 602461 /* Tape label filename specification exceeds 17
			 characters.  */
#define GJFX54 602466 /* Node name not first field in filespec.  */
#define GJFX55 602546 /* Illegal to use node name.  */
#define GJFX6  600062 /* Device field not in a valid position.  */
#define GJFX7  600063 /* Directory field not in a valid position.  */
#define GJFX8  600064 /* Directory terminating delimiter is not
			 preceded by a valid beginning delimiter.  */
#define GJFX9  600065 /* More than one name field is not allowed.  */
#define GNJFX1 601054 /* No more files in this specification.  */
#define GNJFX2 605601 /* Could not step to next file because current
			 file no longer exists.  */
#define GOKER1 602220 /* Illegal function.  */
#define GOKER2 602221 /* Request denied by Access Control Facility.  */
#define GOKER3 602421 /* JSYS not executed within ACJ fork.  */
#define GTABX1 600267 /* Invalid table number.  */
#define GTABX2 600270 /* Invalid table index.  */
#define GTABX3 600271 /* GETAB capability required.  */
#define GTDIX1 600640 /* WHEEL or OPERATOR capability required.  */
#define GTDIX2 600641 /* Invalid directory number.  */
#define GTHSX1 600703 /* No DNS name servers configured.  */
#define GTHSX2 600704 /* Unknown host number.  */
#define GTHSX3 600705 /* Unknown host name.  */
#define GTHSX4 600706 /* Format error in DNS message.  */
#define GTHSX5 600707 /* No interface to specified network.  */
/*	GTHSX6	       * Invalid class for function.  */
/*	GTHSX7	       * Server failed to find data (non-authoritative).  */
/*	GTHSX8	       * Data not found in namespace (authoritative).  */
/*	GTHSX9	       * String argument is too long GTHX10 System host
			 tables full.  */
#define GTJIX1 601013 /* Invalid index.  */
#define GTJIX2 601014 /* Invalid terminal line number.  */
#define GTJIX3 601015 /* Invalid job number.  */
#define GTJIX4 601254 /* No such job.  */
#define GTNCX1 600746 /* Invalid network JFN.  */
#define GTNCX2 600747 /* Invalid or inactive NVT.  */
#define HFRKX1 600370 /* Illegal to halt self with HFORK.  */
#define HPTX1  600670 /* Undefined clock number.  */
#define IFIXX1 600414 /* Radix is not in range 2 to 36.  */
#define IFIXX2 600415 /* First nonspace character is not a digit.  */
#define IFIXX3 600416 /* Overflow (number is equal to or greater than
                         235 ).  */
#define ILINS1 600770 /* Undefined operation code.  */
#define ILINS2 600771 /* Undefined JSYS.  */
#define ILINS3 600772 /* UUO simulation facility not available.  */
#define ILINS4 601255 /* UUO simulation is disabled.  */
#define ILINS5 601256 /* RMS facility is not available.  */
#define ILLX01 601774 /* Illegal memory read.  */
#define ILLX02 601775 /* Illegal memory write.  */
#define ILLX03 601776 /* Memory data parity error.  */
#define ILLX04 601777 /* Reference to non-existent page.  */
#define ILLX05 602471 /* Illegal memory reference, section greater
                         than 37.  */
#define INFX01 605606 /* Invalid INFO% function.  */
#define INFX02 605607 /* Invalid CI node number.  */
#define INFX03 605610 /* WHEEL or OPERATOR capability required.  */
#define INFX04 605611 /* CI node disconnected before information was
                         returned.  */
#define INFX05 605612 /* Remote node not supplying information.  */
#define INFX06 605613 /* Insufficient system resources - no more
			 swappable free space.  */
#define INFX07 605614 /* User not logged in.  */
#define INFX08 605615 /* Insufficient system resources on remote node
			 (no more free space).  */
#define INFX09 605616 /* Unimplemented function on remote system.  */
#define INFX10 605617 /* Insufficient SCA buffers to process request.  */
#define INFX11 605620 /* Remote system not running CLUDGR SYSAP.  */
#define INFX12 605621 /* Invalid argument block.  */
#define INFX13 605622 /* Job not logged in.  */
#define INFX14 605623 /* Remote node could not execute given function.  */
#define INFX15 605624 /* Bad argument block length.  */
#define INFX16 605625 /* Insufficient credit to send request to remote
                         system.  */
#define INFX17 605627 /* Remote XPEEK% can only return 512 words.  */
#define INLNX1 601001 /* Index is beyond end of logical name table.  */
#define INLNX2 601135 /* Invalid function.  */
#define IOX1   600215 /* File is not opened for reading.  */
#define IOX10  601240 /* Record is longer than user requested.  */
#define IOX11  601440 /* Quota exceeded.  */
#define IOX12  601441 /* Insufficient system resources (Swapping space
                         full).  */
#define IOX13  602227 /* Invalid segment type.  */
#define IOX14  602230 /* Invalid segment size.  */
#define IOX15  602231 /* Illegal tape format for dump mode.  */
#define IOX16  602232 /* Density specified does not match tape
                         density.  */
#define IOX17  602233 /* Invalid tape label.  */
#define IOX2   600216 /* File is not opened for writing.  */
#define IOX20  602234 /* Illegal tape record size.  */
#define IOX21  602235 /* Tape HDR1 missing.  */
#define IOX22  602236 /* Invalid tape HDR1 sequence number.  */
#define IOX23  602237 /* Tape label read error.  */
#define IOX24  602240 /* Logical end of tape encountered.  */
#define IOX25  602241 /* Invalid tape format.  */
#define IOX26  602243 /* Tape write date has not expired.  */
#define IOX27  602244 /* Tape is domestic and HDR2 is missing.  */
#define IOX3   600217 /* File is not open for random access.  */
#define IOX30  602245 /* Tape has invalid access character.  */
#define IOX31  602343 /* Invalid record descriptor in labeled tape.  */
#define IOX32  602422 /* Tape position is indeterminate.  */
#define IOX33  602423 /* TTY input buffer full.  */
#define IOX34  602462 /* Disk structure completely full.  */
#define IOX35  602463 /* Disk structure damaged, cannot allocate
                         space.  */
#define IOX4   600220 /* End of file reached.  */
#define IOX5   600221 /* Device or data error.  */
#define IOX6   600222 /* Illegal to write beyond absolute end of file.  */
#define IOX7   601211 /* Insufficient system resources (Job Storage
			 Block full).  */
#define IOX8   601212 /* Monitor internal error.  */
#define IOX9   601216 /* Function legal for sequential write only.  */
#define IPARP1 603460 /* Cannot start ARP until TCPNI service is
                         running.  */
#define IPCF10 601027 /* WHEEL capability required.  */
#define IPCF11 601030 /* WHEEL or IPCF capability required.  */
#define IPCF12 601031 /* No free PID's available.  */
#define IPCF13 601032 /* PID quota exceeded.  */
#define IPCF14 601033 /* No PID's available to this job.  */
#define IPCF15 601034 /* No PID's available to this process.  */
#define IPCF16 601035 /* Receive and message data modes do not match.  */
#define IPCF17 601036 /* Argument block too small.  */
#define IPCF18 601037 /* Invalid MUTIL JSYS function.  */
#define IPCF19 601040 /* No PID for [SYSTEM] INFO.  */
#define IPCF20 601041 /* Invalid process handle.  */
#define IPCF21 601042 /* Invalid job number.  */
#define IPCF22 601043 /* Invalid software interrupt channel number.  */
#define IPCF23 601044 /* [SYSTEM] INFO already exists.  */
#define IPCF24 601045 /* Invalid message size.  */
#define IPCF25 601046 /* PID does not belong to this job.  */
#define IPCF26 601047 /* PID does not belong to this process.  */
#define IPCF27 601050 /* PID is not defined.  */
#define IPCF28 601051 /* PID not accessible by this process.  */
#define IPCF29 601052 /* PID already being used by another process.  */
#define IPCF30 601053 /* Job is not logged in.  */
#define IPCF31 601102 /* Invalid page number.  */
#define IPCF32 601103 /* Page is not private.  */
#define IPCF33 601130 /* Invalid index into system PID table.  */
#define IPCF34 601320 /* Cannot receive into an existing page.  */
#define IPCF35 602125 /* Invalid IPCF quota.  */
#define IPCF36 605000 /* PID not assigned on this LCS processor.  */
#define IPCFX1 601016 /* Length of packet descriptor block cannot be
			 less than 4.  */
#define IPCFX2 601017 /* No message for this PID.  */
#define IPCFX3 601020 /* Data too long for user's buffer.  */
#define IPCFX4 601021 /* Receiver's PID invalid.  */
#define IPCFX5 601022 /* Receiver's PID disabled.  */
#define IPCFX6 601023 /* Send quota exceeded.  */
#define IPCFX7 601024 /* Receiver quota exceeded.  */
#define IPCFX8 601025 /* IPCF free space exhausted.  */
#define IPCFX9 601026 /* Sender's PID invalid.  */
#define IPFLAD 603456 /* Local Internet host number not in GHT.  */
#define IPHCHK 603451 /* Computed GHT checksum does not match.  */
#define IPHCNT 603452 /* GHT entry count argument is not correct.  */
#define IPHEMX 603454 /* Exceeded maximum number of GHT entries.  */
#define IPHNSP 603453 /* Insufficient system resources (No free space
			 for GHT).  */
#define IPHSEQ 603455 /* GHT Internet host numbers not in ascending
                         order.  */
#define KDPX01 602206 /* KMC11 not running.  */
#define KFRKX1 600365 /* Illegal to kill top level process.  */
#define KFRKX2 600366 /* Illegal to kill self.  */
#define KLPX1  602547 /* No BHDs available.  */
#define KLPX10 602734 /* Don't know our CI node number.  */
#define KLPX11 602735 /* Queue is empty.  */
#define KLPX12 602746 /* Virtual circuit is not closed.  */
#define KLPX13 602752 /* Named Buffer transfer error.  */
#define KLPX14 602754 /* Timed out waiting for KLIPA disable to
                         complete.  */
#define KLPX15 602755 /* Timed out waiting for KLIPA enable to
                         complete.  */
#define KLPX2  602550 /* No BSDs available.  */
#define KLPX3  602551 /* No datagrams buffers available.  */
#define KLPX4  602552 /* No message buffers available.  */
#define KLPX5  602727 /* KLIPA is not enabled.  */
#define KLPX6  602730 /* KLIPA is in maintenance mode.  */
#define KLPX7  602731 /* No KLIPA on system.  */
#define KLPX8  602732 /* Packet is bad.  */
#define KLPX9  602733 /* No virtual circuit.  */
#define LATX01 605010 /* Buffer size too small for available data.  */
#define LATX02 605011 /* LAT parameter value out of range.  */
#define LATX03 605012 /* LAT is not operational.  */
#define LATX04 605013 /* Invalid or unknown LAT server name.  */
#define LATX05 605014 /* Invalid LAT parameter.  */
#define LATX06 605015 /* Invalid LAT parameter value.  */
#define LATX07 605016 /* Invalid or unknown LAT service name.  */
#define LATX08 605017 /* Insufficient LAT Resources.  */
#define LATX09 605020 /* LAT Host name already set.  */
#define LATX10 605021 /* Invalid or unknown LAT port name.  */
#define LATX11 605022 /* Invalid or unknown LAT connect id.  */
#define LCBDBP 601475 /* Bad byte pointer passed to LCS.  */
#define LCLNER 601476 /* LCS length error.  */
#define LCNOND 601477 /* LCS No such node.  */
#define LGINX1 600010 /* Invalid account identifier.  */
#define LGINX2 600011 /* Directory is "files-only" and cannot be
                         logged in to.  */
#define LGINX3 600012 /* Internal format of directory is incorrect.  */
#define LGINX4 600013 /* Invalid password.  */
#define LGINX5 600014 /* Job is already logged in.  */
#define LGINX6 601337 /* No more job slots available for logging-in.  */
#define LLMX01 604000 /* Transmit Datagram Failed.  */
#define LLMX02 604001 /* LLMOP State is OFF.  */
#define LLMX03 604002 /* Invalid byte pointer.  */
#define LLMX04 604003 /* Nonexistent Request Number.  */
#define LLMX05 604004 /* Invalid KLNI channel specified.  */
#define LLMX06 604005 /* Configurator interrupts assigned to another
                         process.  */
#define LLMX99 604777 /* LLMOP Internal Error.  */
#define LNGFX1 601317 /* Page table does not exist and file not open
			 for write.  */
#define LNSTX1 601002 /* No such logical name.  */
#define LNSTX2 601136 /* Invalid function.  */
#define LOCKX1 601771 /* Illegal to lock other than a private page.  */
#define LOCKX2 601772 /* Requested page unavailable.  */
#define LOCKX3 601773 /* Attempt to lock too much memory.  */
#define LOUTX1 600035 /* Illegal to specify job number when logging
			 out own job.  */
#define LOUTX2 600036 /* Invalid job number.  */
#define LOUTX3 601227 /* WHEEL or OPERATOR capability required.  */
#define LOUTX4 601230 /* LOG capability required.  */
#define LOUTX5 601753 /* Illegal to log out job 0.  */
#define LPINX1 601333 /* Invalid unit number.  */
#define LPINX2 601334 /* WHEEL or OPERATOR capability required.  */
#define LPINX3 601335 /* Illegal to load RAM or VFU while device is
                         OPEN.  */
#define LSTRX1 601405 /* Process has not encountered any errors.  */
#define LTLBLX 602347 /* Too many user labels.  */
#define LTLBX1 602350 /* Undefined record format on non-TOPS20 tape.  */
#define METRX1 602352 /* METER% not supported on this processor.  */
#define MLKBX1 601003 /* Lock facility already in use.  */
#define MLKBX2 601004 /* Too many pages to be locked.  */
#define MLKBX3 601005 /* Page is not available.  */
#define MLKBX4 601006 /* Illegal to remove previous contents of user
                         map.  */
#define MNTX1  600345 /* Internal format of directory is incorrect.  */
#define MNTX2  600346 /* Device is not on line.  */
#define MNTX3  600347 /* Device is not mountable.  */
#define MONX01 601727 /* Insufficient system resources.  */
#define MONX02 601730 /* Insufficient system resources (JSB full).  */
#define MONX03 601731 /* Monitor internal error.  */
#define MONX04 601732 /* Insufficient system resources (Swapping space
                         full).  */
#define MONX05 602032 /* Insufficient system resources (no resident
			 free space).  */
#define MONX06 602433 /* Insufficient system resources (No swappable
			 free space).  */
#define MONX07 602553 /* Insufficient system resources (no DECnet free
                         space).  */
#define MREQ10 602261 /* Density mismatch between request and volume.  */
#define MREQ11 602262 /* Drive type mismatch between request and
                         volume.  */
#define MREQ12 602263 /* Label type mismatch between request and
                         volume.  */
#define MREQ13 602264 /* Structural error in mount message.  */
#define MREQ14 602265 /* Setname mismatch between request and volume.  */
#define MREQ15 602266 /* Mount refused by operator.  */
#define MREQ16 602267 /* Volume identifiers not supplied by operator.  */
#define MREQ17 602270 /* Volume-identifier list missing.  */
#define MREQ18 602271 /* End of volume-identifier list reached while
                         reading.  */
#define MREQ19 602272 /* Requested tape drive type not available to
                         system.  */
#define MREQ20 602273 /* Structural error in mount entry.  */
#define MREQ21 602274 /* Mount requested for unknown device type.  */
#define MREQ22 602311 /* Structure name not specified.  */
#define MREQ23 602344 /* Dismount refused by operator.  */
#define MREQ24 602345 /* Illegal to dismount connected structure.  */
#define MREQ25 602346 /* Structure not found.  */
#define MREQ26 602351 /* Tape mounting function disabled by
                         installation.  */
#define MREQ27 602402 /* Structure is set IGNORED.  */
#define MREQ28 602403 /* Cannot overwrite volume - first file is not
                         expired.  */
#define MREQ29 602404 /* Cannot overwrite volume - write access
                         required.  */
#define MREQ30 602405 /* Tape label format error.  */
#define MREQ31 602430 /* Insufficient MOUNTR resources.  */
#define MREQX1 602250 /* Request canceled by user.  */
#define MREQX2 602251 /* Labeled tapes not permitted on 7-track
                         drives.  */
#define MREQX3 602252 /* Unknown density specified.  */
#define MREQX4 602253 /* Unknown drive type specified.  */
#define MREQX5 602254 /* Unknown label type specified.  */
#define MREQX6 602255 /* Set name illegal or not specified.  */
#define MREQX7 602256 /* Illegal starting-volume specification.  */
#define MREQX8 602257 /* Attempt to switch to volume outside set.  */
#define MREQX9 602260 /* Illegal volume identifier specified.  */
#define MSCPX1 600517 /* No MSCP server in current monitor.  */
#define MSCPX2 600520 /* Drive type error.  */
#define MSCPX3 600521 /* Requested drive not found.  */
#define MSCPX4 605502 /* MSCP server not currently running.  */
#define MSTRX1 601345 /* Invalid function.  */
#define MSTRX2 601346 /* WHEEL or OPERATOR capability required.  */
#define MSTRX3 601347 /* Argument block too small.  */
#define MSTRX4 601350 /* Insufficient system resources.  */
#define MSTRX5 601351 /* Drive is not on-line.  */
#define MSTRX6 601352 /* Home blocks are bad.  */
#define MSTRX7 601353 /* Invalid structure name.  */
#define MSTRX8 601354 /* Could not get OFN for ROOT-DIRECTORY.  */
#define MSTRX9 601355 /* Could not MAP ROOT-DIRECTORY.  */
#define MSTX10 601356 /* ROOT-DIRECTORY bad.  */
#define MSTX11 601357 /* Could not initialize Index Table.  */
#define MSTX12 601360 /* Could not OPEN Bit Table File.  */
#define MSTX13 601361 /* Backup copy of ROOT-DIRECTORY is bad.  */
#define MSTX14 601362 /* Invalid channel number.  */
#define MSTX15 601363 /* Invalid unit number.  */
#define MSTX16 601364 /* Invalid controller number.  */
#define MSTX17 601421 /* All units in a structure must be of the same
                         type.  */
#define MSTX18 601422 /* No more units in system.  */
#define MSTX19 601423 /* Unit is already part of a mounted structure.  */
#define MSTX20 601424 /* Data error reading HOME blocks.  */
#define MSTX21 601425 /* Structure is not mounted.  */
#define MSTX22 601426 /* Illegal to change specified bits.  */
#define MSTX23 601430 /* Could not write HOME blocks.  */
#define MSTX24 601750 /* Illegal to dismount the System Structure.  */
#define MSTX25 601751 /* Invalid number of swapping pages.  */
#define MSTX26 601752 /* Invalid number of Front-End-Filesystem pages.  */
#define MSTX27 601757 /* Specified unit is not a disk.  */
#define MSTX28 601760 /* Could not initialize bit table for structure.  */
#define MSTX29 601761 /* Could not reconstruct ROOT-DIRECTORY.  */
#define MSTX30 601770 /* Incorrect Bit Table counts on structure.  */
#define MSTX31 602000 /* Structure already mounted.  */
#define MSTX32 602001 /* Structure was not mounted.  */
#define MSTX33 602002 /* Structure is unavailable for mounting.  */
#define MSTX34 602063 /* Unit is write-locked.  */
#define MSTX35 602201 /* Too many units in structure.  */
#define MSTX36 602223 /* Illegal while JFNs assigned.  */
#define MSTX37 602224 /* Illegal while connected to structure.  */
#define MSTX40 602225 /* Invalid PSI channel number given.  */
#define MSTX41 601461 /* Channel does not exist.  */
#define MSTX42 601462 /* Controller does not exist.  */
#define MSTX43 603033 /* Illegal to dismount structure during
                         initialization.  */
#define MSTX44 605001 /* Mount type refused by another CFS processor.  */
#define MSTX45 602615 /* Structure naming or drive serial number
			 conflict in CFS cluster.  */
#define MSTX46 602616 /* Illegal to specify mount attribute.  */
#define MSTX47 601525 /* Shared access denied; already set exclusive
			 in CFS cluster.  */
#define MSTX48 601526 /* Exclusive access denied; access conflict in
			 CFS cluster.  */
#define MSTX49 601527 /* Structure naming conflict in CFS cluster.  */
#define MSTX50 601531 /* Mount type refused by this CFS processor.  */
#define MSTX51 601532 /* Insufficient system resources (structure
			 limit exceeded).  */
#define MTNX01 601514 /* Serial number out of range.  */
#define MTOX1  601210 /* Invalid function.  */
#define MTOX10 601323 /* VFU or RAM file cannot be OPENed.  */
#define MTOX11 601324 /* Data too large for buffers.  */
#define MTOX12 601325 /* Input error or not all data read.  */
#define MTOX13 601326 /* Argument block too small.  */
#define MTOX14 601327 /* Invalid software interrupt channel number.  */
#define MTOX15 601331 /* Device does not have Direct Access
			 (programmable) VFU.  */
#define MTOX16 601332 /* VFU or Translation Ram file must be on disk.  */
#define MTOX17 601336 /* Device is not on line.  */
#define MTOX18 601407 /* Invalid software interrupt channel number.  */
#define MTOX19 601755 /* Invalid terminal page width.  */
#define MTOX2  601220 /* Record size was not set before I/O was done.  */
#define MTOX20 601756 /* Invalid terminal page length.  */
#define MTOX21 602753 /* Illegal two character escape sequence.  */
#define MTOX3  601221 /* Function not legal in dump mode.  */
#define MTOX4  601222 /* Invalid record size.  */
#define MTOX5  601213 /* Invalid hardware data mode for magnetic tape.  */
#define MTOX6  601223 /* Invalid magnetic tape density.  */
#define MTOX7  601226 /* WHEEL or OPERATOR capability required.  */
#define MTOX8  601274 /* Argument block too long.  */
#define MTOX9  601322 /* Output still pending.  */
#define NIEANE 605424 /* Address Not Enabled.  */
#define NIECAB 605436 /* Command abort.  */
#define NIECCF 605431 /* Carrier check failed.  */
#define NIECIO 605501 /* Channel is owned by another fork.  */
#define NIEDNS 605422 /* Datagram Not Sent.  */
#define NIEEXC 605421 /* Excessive Collisions.  */
#define NIEIBP 605420 /* Illegal Byte Pointer.  */
#define NIEIBS 605413 /* Illegal Buffer Size.  */
#define NIEICA 605426 /* Illegal Channel Address.  */
#define NIEICS 605435 /* Illegal channel state.  */
#define NIEIFB 605412 /* Improperly Formatted Buffer.  */
#define NIEIMA 605425 /* Illegal Multicast Address.  */
#define NIEIVP 605405 /* Illegal Protocol Type.  */
#define NIELER 605416 /* Length Error.  */
#define NIENPE 605417 /* No Protocol Type Enabled For This Portal.  */
#define NIENRE 605423 /* No Room For Entry.  */
#define NIENSC 605403 /* No Such Channel.  */
#define NIENSP 605411 /* No Such Portal.  */
#define NIEOPN 605433 /* Open circuit.  */
#define NIEPIU 605406 /* Protocol Type In Use.  */
#define NIEPRA 605407 /* Promiscuous Receiver Active.  */
#define NIEPWS 605427 /* Portal in Wrong State.  */
#define NIERAB 605415 /* Receive Aborted.  */
#define NIERDL 605414 /* Received Datagram Too Long.  */
#define NIERFD 605434 /* Remote failure to defer.  */
#define NIERTE 605500 /* Receive or Transmit quota exceeded.  */
#define NIESHT 605432 /* Short circuit.  */
#define NODX01 602115 /* Node name exceeds 6 characters.  */
#define NODX02 602207 /* Line not turned off.  */
#define NODX03 602210 /* Another line already looped.  */
#define NODX04 602576 /* No local node name defined.  */
#define NODX05 602577 /* Function no longer supported.  */
#define NODX06 602600 /* Resource allocation failure.  */
#define NODX07 602647 /* Argument block not long enough.  */
#define NODX10 602650 /* Channel number out of range.  */
#define NODX11 602651 /* Job number out of range.  */
#define NODX12 602700 /* Bad table designator.  */
#define NODX13 602701 /* Bad 1st argument.  */
#define NODX14 602702 /* Bad 2nd argument.  */
#define NODX15 602703 /* No such table.  */
#define NODX16 602756 /* DECnet has already initialized.  */
#define NODX17 602766 /* Illegal parameter value.  */
#define NOUTX1 600407 /* Radix is not in range 2 to 36.  */
#define NOUTX2 600410 /* Column overflow.  */
#define NPX2CL 602413 /* Two colons required on node name.  */
#define NPXAMB 602044 /* Ambiguous.  */
#define NPXCMA 602057 /* Comma not given.  */
#define NPXICN 602052 /* Invalid character in number.  */
#define NPXIDT 602053 /* Invalid device terminator.  */
#define NPXINW 602050 /* Invalid guide word.  */
#define NPXNC  602051 /* Not confirmed.  */
#define NPXNMD 602056 /* Does not match directory or user name, or
			 structure not mounted.  */
#define NPXNMT 602055 /* Does not match token.  */
#define NPXNOM 602046 /* Does not match switch or keyword.  */
#define NPXNQS 602054 /* Not a quoted string - quote missing at
			 beginning or end.  */
#define NPXNSW 602045 /* Not a switch - does not begin with slash.  */
#define NPXNUL 602047 /* Null switch or keyword given.  */
#define NSJX01 602555 /* WHEEL or OPERATOR capability required.  */
#define NSJX02 602556 /* Allocation failure.  */
#define NSJX03 602557 /* Wrong number of arguments.  */
#define NSJX04 602560 /* Illegal function.  */
#define NSJX05 602561 /* Connect block length error.  */
#define NSJX06 602562 /* Address Error.  */
#define NSJX07 602563 /* Argument Block Format Error.  */
#define NSJX08 602564 /* Process block length error.  */
#define NSJX09 602565 /* Bad format type in process block.  */
#define NSPX00 602353 /* Reject or disconnect by object.  */
#define NSPX01 602354 /* Resource allocation failure.  */
#define NSPX02 602355 /* Destination node does not exist.  */
#define NSPX03 602356 /* Remote node shutting down.  */
#define NSPX04 602357 /* Destination process does not exist.  */
#define NSPX05 602360 /* Invalid process name field.  */
#define NSPX06 602361 /* Object is busy.  */
#define NSPX07 602362 /* Unspecified error.  */
#define NSPX08 602363 /* Abort by management.  */
#define NSPX09 602364 /* Abort by object.  */
#define NSPX10 602365 /* Flow control violation.  */
#define NSPX11 602366 /* Too many connections to node.  */
#define NSPX12 602367 /* Too many connections to destination process.  */
#define NSPX13 602370 /* Access not permitted.  */
#define NSPX14 602371 /* Logical link services mismatch.  */
#define NSPX15 602372 /* Invalid account.  */
#define NSPX16 602373 /* SEGSIZE too small.  */
#define NSPX17 602374 /* No response from destination process.  */
#define NSPX18 602375 /* Node unreachable.  */
#define NSPX19 602376 /* Link aborted due to data loss.  */
#define NSPX20 602377 /* Destination process does not exist.  */
#define NSPX21 602400 /* Confirmation of DI.  */
#define NSPX22 602401 /* Image data field too long.  */
#define NSPX23 602411 /* Invalid NSP reason code.  */
#define NSPX24 602456 /* Node name not assigned to a network node.  */
#define NSPX25 602457 /* Illegal DECnet node number.  */
#define NSPX26 602460 /* Table of topology watchers is full.  */
#define NSPX27 602545 /* Local node shut.  */
#define NTMX1  602451 /* Network Management unable to complete
                         request.  */
#define NTMX2  602751 /* Event resource already in use.  */
#define NTMX3  602765 /* DECnet is not initialized.  */
#define NTWZX1 600737 /* NET WIZARD capability required.  */
#define ODTNX1 600462 /* Time zone must be USA or Greenwich.  */
#define OPNX1  600120 /* File is already open.  */
#define OPNX10 600131 /* Entire file structure full.  */
#define OPNX12 600133 /* List access required.  */
#define OPNX13 600134 /* Invalid access requested.  */
#define OPNX14 600135 /* Invalid mode requested.  */
#define OPNX15 600136 /* Read/write access required.  */
#define OPNX16 600137 /* File has bad index block.  */
#define OPNX17 600140 /* No room in job for long file page table.  */
#define OPNX18 600141 /* Unit Record Devices are not available.  */
#define OPNX19 600142 /* IMP is not up.  */
#define OPNX2  600121 /* File does not exist.  */
#define OPNX20 600143 /* Host is not up.  */
#define OPNX21 600144 /* Connection refused.  */
#define OPNX22 600145 /* Connection byte size does not match.  */
#define OPNX23 601132 /* Disk quota exceeded.  */
#define OPNX25 601224 /* Device is write locked.  */
#define OPNX26 601410 /* Illegal to open a string pointer.  */
#define OPNX3  600122 /* Read access required.  */
#define OPNX30 602326 /* File has archive status, modification is
                         prohibited.  */
#define OPNX31 602327 /* File is off line.  */
#define OPNX4  600123 /* Write access required.  */
#define OPNX5  600124 /* Execute access required.  */
#define OPNX6  600125 /* Append access required.  */
#define OPNX7  600126 /* Device already assigned to another job.  */
#define OPNX8  600127 /* Device is not on line.  */
#define OPNX9  600130 /* Invalid simultaneous access.  */
#define PAGPTN 601530 /* Page table entry nonzero.  (DEC internal
			 error code.).  */
#define PDVX01 601554 /* Address in .POADE must be as large as address
			 in .POADR.  */
#define PDVX02 601555 /* Addresses in .PODAT block must be in strict
			 ascending order.  */
#define PDVX03 601556 /* Address in .POADR must be a program data
			 vector address.  */
#define PEEKX2 600617 /* Read access failure on monitor page.  */
#define PMAPX1 600240 /* Invalid access requested.  */
#define PMAPX2 600241 /* Invalid use of PMAP.  */
#define PMAPX3 601104 /* Illegal to move shared page into file.  */
#define PMAPX4 601105 /* Illegal to move file page into process.  */
#define PMAPX5 601106 /* Illegal to move special page into file.  */
#define PMAPX6 601107 /* Disk quota exceeded.  */
#define PMAPX7 601415 /* Illegal to map file on dismounted structure.  */
#define PMAPX8 602464 /* Indirect page map loop detected.  */
#define PMCLX1 602005 /* Illegal page state or state transition.  */
#define PMCLX2 602006 /* Requested physical page is unavailable.  */
#define PMCLX3 602007 /* Requested physical page contains errors.  */
#define PMCLX4 602165 /* No more error information.  */
#define PPNX1  601444 /* Invalid PPN.  */
#define PPNX2  601445 /* Structure is not mounted.  */
#define PPNX3  601446 /* Insufficient system resources.  */
#define PPNX4  601447 /* Invalid directory number.  */
#define PRAX1  601263 /* Invalid PRARG function code.  */
#define PRAX2  601264 /* No room in monitor data base for argument
                         block.  */
#define PRAX3  601270 /* PRARG argument block too large.  */
#define QUEUX1 601504 /* Illegal argument list passed to QUEUE%.  */
#define QUEUX2 601505 /* Invalid function.  */
#define QUEUX3 601506 /* Fatal error returned from application.  */
#define QUEUX4 601507 /* Invalid message returned from ORION.  */
#define QUEUX5 601510 /* Insufficient system resources (Job Storage
			 Block full).  */
#define QUEUX6 601511 /* Illegal response length.  */
#define QUEUX7 601512 /* Argument block too small.  */
#define RCDIX1 601376 /* Insufficient system resources.  */
#define RCDIX2 601377 /* Invalid directory specification.  */
#define RCDIX3 601400 /* Invalid structure name.  */
#define RCDIX4 601401 /* Monitor internal error.  */
#define RCUSX1 601402 /* Insufficient system resources.  */
#define RDDIX1 600560 /* Illegal to read directory for this device.  */
#define RDTX1  601010 /* Invalid string pointer.  */
#define RFRKX1 600367 /* Processes are not frozen.  */
#define RIRX1  602426 /* RIR JSYS incompatible with previous XSIR.  */
#define RJFNX1 600165 /* File is not closed.  */
#define RJFNX2 600166 /* JFN is being used to accumulate filename.  */
#define RJFNX3 600167 /* JFN is not accessible by this process.  */
#define RNAMX1 600450 /* Files are not on same device.  */
#define RNAMX2 600451 /* Destination file expunged.  */
#define RNAMX3 600452 /* Write or owner access to destination file
                         required.  */
#define RNAMX4 600453 /* Quota exceeded in destination of rename.  */
#define RNAMX5 600750 /* Destination file is not closed.  */
#define RNAMX6 600751 /* Destination file has bad page table.  */
#define RNAMX7 600752 /* Source file expunged.  */
#define RNAMX8 600753 /* Write or owner access to source file
                         required.  */
#define RNAMX9 600754 /* Source file is nonexistent.  */
#define RNMX10 600755 /* Source file is not closed.  */
#define RNMX11 600756 /* Source file has bad page table.  */
#define RNMX12 600757 /* Illegal to rename to self.  */
#define RNMX13 601454 /* Insufficient system resources.  */
#define RSCNX1 600361 /* Overflowed rescan buffer, input string
                         truncated.  */
#define RSCNX2 600362 /* Invalid function code.  */
#define RUNTX1 600273 /* Invalid process handle -3 or -4.  */
#define SACTX1 600530 /* File is not on multiple-directory device.  */
#define SACTX2 600531 /* Insufficient system resources (Job Storage
			 Block full).  */
#define SACTX3 600532 /* Directory requires numeric account.  */
#define SACTX4 600533 /* Write or owner access required.  */
#define SAVX1  601330 /* Illegal to save files on this device.  */
#define SCAPTL 602602 /* Message to long.  */
#define SCLX01 602652 /* No connect data to read.  */
#define SCLX02 602653 /* Percentage input out of bounds.  */
#define SCLX03 602654 /* Function called in wrong state.  */
#define SCLX04 602655 /* Unexpected state - disconnect sent.  */
#define SCLX05 602656 /* Unexpected state - disconnect confirmed.  */
#define SCLX06 602657 /* Unexpected state - no confidence.  */
#define SCLX07 602660 /* Unexpected state - no link.  */
#define SCLX08 602661 /* Unexpected state - no communication.  */
#define SCLX09 602662 /* Unexpected state - no resources.  */
#define SCLX10 602663 /* Unrecognized object.  */
#define SCLX11 602664 /* Object too busy.  */
#define SCLX12 602665 /* Disconnect complete.  */
#define SCLX13 602666 /* Image field too long.  */
#define SCLX14 602667 /* Unspecified reject reason.  */
#define SCLX15 602670 /* Bad combination of SAEOM & SAWAI flags.  */
#define SCLX16 602671 /* Address error in user argument.  */
#define SCLX17 602672 /* Illegal message format detected.  */
#define SCLX18 602673 /* Unexpected state - connect wait.  */
#define SCLX19 602674 /* Unexpected state - connect received.  */
#define SCLX20 602675 /* Unexpected state - connect sent.  */
#define SCLX21 602676 /* Unexpected state - reject.  */
#define SCLX22 602677 /* Unexpected state - run.  */
#define SCSAAB 602571 /* Error accessing argument block.  */
#define SCSBAS 602716 /* Internal error, bad argument to subroutine.  */
#define SCSBFC 602566 /* Function code out of range.  */
#define SCSBTS 602567 /* Argument block too short.  */
#define SCSCWS 602714 /* Connection in incorrect state for function.  */
#define SCSDCB 602575 /* Datagram send text crosses a page boundry.  */
#define SCSDTL 602611 /* DMA buffer to long.  */
#define SCSENB 602704 /* Excessive number of buffers in queue request.  */
#define SCSFRK 602617 /* Fork does not own this SCS% data.  */
#define SCSIAA 602623 /* Invalid address in arguments.  */
#define SCSIAB 602570 /* Invalid argument block address.  */
#define SCSIBN 602764 /* Invalid buffer name.  */
#define SCSIBP 602624 /* Invalid byte pointer.  */
#define SCSIDM 602726 /* Invalid DMA transmission mode.  */
#define SCSIFL 602724 /* Invalid forward link in buffer chain.  */
#define SCSIID 602603 /* Invalid connect ID.  */
#define SCSIPC 602722 /* PSI channel out of range.  */
#define SCSIPS 602723 /* Invalid path spec.  */
#define SCSISB 602621 /* Invalid node number.  */
#define SCSIST 602725 /* Invalid SCS% interrupt type.  */
#define SCSJBD 602646 /* No user address found for sent packet.  */
#define SCSNBA 602605 /* Internal resources exhausted (No more SCA
                         buffers).  */
#define SCSNDQ 602645 /* No datagram buffers queued.  */
#define SCSNEB 602720 /* Insufficient buffers to fill request.  */
#define SCSNEC 602715 /* Not enough credit.  */
#define SCSNEP 602573 /* Not enough privileges enabled.  */
#define SCSNKP 602721 /* No known KLIPA on this system.  */
#define SCSNMQ 602620 /* No buffers queued for message reception.  */
#define SCSNPA 602604 /* No packet address.  */
#define SCSNRT 602601 /* No room in table for address entry.  */
#define SCSNSB 602717 /* No such buffer.  */
#define SCSNSC 602574 /* No such connect ID.  */
#define SCSNSD 602610 /* No such DMA buffer name.  */
#define SCSNSH 602622 /* Not enough room for SCA headers.  */
#define SCSNSN 602572 /* No source process name specified on
			 connection request.  */
#define SCSQIE 602613 /* Queue is empty.  */
#define SCSSCP 602607 /* DMA segment crosses a page boundry.  */
#define SCSSTL 602710 /* DMA buffer segment to long.  */
#define SCSTBF 601524 /* No slots left in CID tables.  */
#define SCSTMS 602711 /* Too many DMA buffer segments.  */
#define SCSUPC 602612 /* Unknown PSI code.  */
#define SCSZLP 602606 /* Zero length packet text.  */
#define SCTX1  601550 /* Invalid function code.  */
#define SCTX2  601551 /* Terminal already in use as controlling
                         terminal.  */
#define SCTX3  601552 /* Illegal to redefine the job's controlling
                         terminal.  */
#define SCTX4  601553 /* SC%SCT capability required.  */
#define SEVEX1 600610 /* Entry vector length is not less than 1000.  */
#define SFBSX1 600210 /* Illegal to change byte size for this opening
                         of file.  */
#define SFBSX2 600211 /* Invalid byte size.  */
#define SFPTX1 600175 /* File is not open.  */
#define SFPTX2 600176 /* Illegal to reset pointer for this file.  */
#define SFPTX3 600177 /* Invalid byte number.  */
#define SFRVX1 600377 /* Invalid position in entry vector.  */
#define SFUSX1 601373 /* Invalid function.  */
#define SFUSX2 601374 /* Insufficient system resources.  */
#define SFUSX3 601375 /* No such user name.  */
#define SFUSX4 601700 /* File expunged.  */
#define SFUSX5 601701 /* Write or owner access required.  */
#define SFUSX6 601702 /* No such user name.  */
#define SIRX1  600570 /* Table address is not greater than 20.  */
#define SIRX2  602425 /* SIR JSYS invoked from non-zero section.  */
#define SJBX1  601244 /* Invalid function.  */
#define SJBX2  601245 /* Invalid magnetic tape density.  */
#define SJBX3  601246 /* Invalid magnetic tape data mode.  */
#define SJBX4  601251 /* Invalid job number.  */
#define SJBX5  601252 /* Job is not logged in.  */
#define SJBX6  601253 /* WHEEL or OPERATOR capability required.  */
#define SJBX7  602077 /* Remark exceeds 39 characters.  */
#define SJBX8  601455 /* Illegal to perform this function.  */
#define SJPRX1 601276 /* Job is not logged in.  */
#define SKDX1  602247 /* Cannot change class.  */
#define SMAPX1 602431 /* Attempt to delete a section still shared.  */
#define SMAPX2 602465 /* Indirect section map loop detected.  */
#define SMONX1 600516 /* WHEEL or OPERATOR capability required.  */
#define SMONX2 601250 /* Invalid SMON function.  */
#define SMONX3 601677 /* Timeout interval out of range.  */
#define SMONX4 605630 /* Minimum password length must be between 1 and
			 39 characters.  */
#define SMONX5 605634 /* ACJ fork already running.  */
#define SMONX6 605635 /* Invalid request SMONX7 Password expiration
day count must be between 1 and 366.  */
#define SNDIX1 600732 /* Invalid message size.  */
#define SNDIX2 600733 /* Insufficient system resources (No buffers
                         available).  */
#define SNDIX3 600734 /* Illegal to specify NCP links 0 - 72.  */
#define SNDIX4 600735 /* Invalid header value for this queue.  */
#define SNDIX5 600736 /* IMP down.  */
#define SNOP10 601121 /* Breakpoints already inserted.  */
#define SNOP11 601122 /* Breakpoints not inserted.  */
#define SNOP12 601123 /* Invalid format for program name symbol.  */
#define SNOP13 601124 /* No such program name symbol.  */
#define SNOP14 601125 /* No such symbol.  */
#define SNOP15 601126 /* Not enough free pages for snooping.  */
#define SNOP16 601127 /* Multiply defined symbol.  */
#define SNOP17 601131 /* Breakpoint already defined.  */
#define SNOP18 601163 /* Data page is not private or copy-on-write.  */
#define SNOPX1 601110 /* WHEEL or OPERATOR capability required.  */
#define SNOPX2 601111 /* Invalid function.  */
#define SNOPX3 601112 /* .SNPLC function must be first.  */
#define SNOPX4 601113 /* Only one .SNPLC function allowed.  */
#define SNOPX5 601114 /* Invalid page number.  */
#define SNOPX6 601115 /* Invalid number of pages to lock.  */
#define SNOPX7 601116 /* Illegal to define breakpoints after inserting
                         them.  */
#define SNOPX8 601117 /* Breakpoint is not set on instruction.  */
#define SNOPX9 601120 /* No more breakpoints allowed.  */
#define SPACX1 600245 /* Invalid access requested.  */
#define SPLBFC 600264 /* Bad function code.  */
#define SPLBTS 600263 /* Argument block too short.  */
#define SPLFX1 600260 /* Process is not inferior or equal to self.  */
#define SPLFX2 600261 /* Process is not inferior to self.  */
#define SPLFX3 600262 /* New superior process is inferior to intended
			 inferior.  */
#define SPLX1  601144 /* Invalid function.  */
#define SPLX2  601145 /* Argument block too small.  */
#define SPLX3  601146 /* Invalid device designator.  */
#define SPLX4  601147 /* WHEEL or OPERATOR capability required.  */
#define SPLX5  601150 /* Illegal to specify 0 as generation number for
			 first file.  */
#define SPLX6  601450 /* No directory to write spooled files into.  */
#define SQX1   600742 /* Special network queue handle out of range.  */
#define SQX2   600743 /* Special network queue not assigned.  */
#define SSAVX1 600600 /* Illegal to save files on this device.  */
#define SSAVX2 600601 /* Page count (left half of table entry) must be
			 negative.  */
#define SSAVX3 601232 /* Insufficient system resources (Job Storage
			 Block full).  */
#define SSAVX4 601233 /* Directory area of EXE file is more than one
                         page.  */
#define SSAVX5 601500 /* Number of PDVs grew during save.  */
#define STADX1 600275 /* WHEEL or OPERATOR capability required.  */
#define STADX2 600276 /* Invalid date or time.  */
#define STDIX1 602003 /* The STDIR JSYS has been replaced by RCDIR and
                         RCUSR.  */
#define STDVX1 600332 /* No such device.  */
#define STRX01 601436 /* Structure is not mounted.  */
#define STRX02 601437 /* Insufficient system resources.  */
#define STRX03 601442 /* No such directory name.  */
#define STRX04 601443 /* Ambiguous directory specification.  */
#define STRX05 601434 /* No such user name.  */
#define STRX06 601747 /* No such user number.  */
#define STRX07 602142 /* Invalid user number.  */
#define STRX08 602143 /* Invalid user name.  */
#define STRX09 602222 /* Prior structure mount required.  */
#define STRX10 601676 /* Structure is offline.  */
#define STRX11 601674 /* Invalid structure number.  */
#define STYPX1 601414 /* Invalid terminal type.  */
#define SWJFX1 601406 /* Illegal to swap same JFN.  */
#define SWJFX2 602242 /* Illegal to swap ATS JFN.  */
#define SYEX1  601206 /* Unreasonable SYSERR block size.  */
#define SYEX2  601207 /* No buffer space available for SYSERR.  */
#define TADDX1 601235 /* Table is full.  */
#define TADDX2 601236 /* Entry is already in table.  */
#define TCPX10 603411 /* Unable to decode TIMEOUT attribute in TCP
			 specification.  */
#define TCPX11 603412 /* Unable to decode TYPE-OF-SERVICE attribute in
			 TCP specification.  */
#define TCPX12 603413 /* Unable to decode SECURITY attribute in TCP
			 specification.  */
#define TCPX13 603414 /* Unable to decode COMPARTMENTS attribute in
			 TCP specification.  */
#define TCPX14 603415 /* Unable to decode HANDLING-RESTRICTIONS
			 attribute in TCP specification.  */
#define TCPX15 603416 /* Unable to decode TRANSMISSION-CONTROL
			 attribute in TCP specification.  */
#define TCPX16 603417 /* TCP not initialized and available.  */
#define TCPX17 603420 /* Illegal IO mode for TCP device.  */
#define TCPX18 603421 /* Illegal byte size for TCP device.  */
#define TCPX19 603422 /* TCP connection allready exists.  */
#define TCPX20 603423 /* Maximum TCP connections exceeded.  */
#define TCPX21 603424 /* Wheel, Operator, or Network Wizard needed for
			 special TCOPR function.  */
#define TCPX22 603425 /* Invalid TCOPR function requested.  */
#define TCPX23 603426 /* Invalid IPOPR function requested.  */
#define TCPX24 603427 /* Wheel, Operator, or Network Wizard needed for
			 special IPOPR function.  */
#define TCPX25 603430 /* Open failure.  */
#define TCPX26 603431 /* Illegal Persist parameters.  */
#define TCPX27 603432 /* Illegal TCOPR Function on an OPEN TCP JFN.  */
#define TCPX28 603433 /* Invalid BBN TCP JSYS call.  */
#define TCPX29 603434 /* Assigned JFN too large for TCPJFN.  */
#define TCPX30 603435 /* Illegal TCP IO mode.  */
#define TCPX31 603436 /* Connection error or connection rejected.  */
#define TCPX32 603437 /* Retransmission timeout.  */
#define TCPX33 603440 /* Connection closed or closing.  */
#define TCPX34 603441 /* TCOPR Argument.  */
#define TCPX35 603442 /* Illegal to reopen a TCP JFN.  */
#define TCPX36 603443 /* Illegal TCOPR Function on an UNOPEN TCP JFN.  */
#define TCPX37 603444 /* No free space for buffer.  */
#define TCPX40 603445 /* TCOPR Function not yet implemented.  */
#define TCPX41 603446 /* TCOPR DEC interrupt channels not off.  */
#define TCPX42 603447 /* TCOPR Invalid TCB offset.  */
#define TCPX43 603450 /* TCOPR Invalid argument block.  */
#define TCPX44 603461 /* Monitor does not support TCP over Ethernet.  */
#define TCPXX1 603400 /* No IP free space for TCB.  */
#define TCPXX2 603401 /* Unable to decode local side TCP of
                         specification.  */
#define TCPXX3 603402 /* Unable to decode foreign side TCP of
                         specification.  */
#define TCPXX4 603403 /* Generation found in TCP specification.  */
#define TCPXX5 603404 /* TCP specification atrribute not known to TCP.  */
#define TCPXX6 603405 /* Unable to decode CONNECTION attribute in TCP
			 specification.  */
#define TCPXX7 603406 /* Unable to decode FOREIGN-HOST attribute in
			 TCP specification.  */
#define TCPXX8 603407 /* Unable to decode LOCAL-HOST attribute in TCP
			 specification.  */
#define TCPXX9 603410 /* Unable to decode PERSIST attribute in TCP
			 specification.  */
#define TDELX1 601234 /* Table is empty.  */
#define TDELX2 601403 /* Invalid table entry location.  */
#define TERMX1 600350 /* Invalid terminal code.  */
#define TFRKX1 600375 /* Undefined function code.  */
#define TFRKX2 600376 /* Unassigned fork handle or not immediate
                         inferior.  */
#define TFRKX3 600411 /* Fork(s) not frozen.  */
#define TILFX1 600465 /* Invalid time format.  */
#define TIMEX1 600460 /* Time cannot be greater than 24 hours.  */
#define TIMEX2 601302 /* Downtime cannot be more than 7 days in the
                         future.  */
#define TIMX1  601157 /* Invalid function.  */
#define TIMX10 601541 /* No system date and time.  */
#define TIMX2  601160 /* Invalid process handle.  */
#define TIMX3  601161 /* Time limit already set.  */
#define TIMX4  601162 /* Illegal to clear time limit.  */
#define TIMX5  601404 /* Invalid software interrupt channel number.  */
#define TIMX6  601535 /* Time has already passed.  */
#define TIMX7  601536 /* No space available for a clock.  */
#define TIMX8  601537 /* User clock allocation exceeded.  */
#define TIMX9  601540 /* No such clock entry found.  */
#define TLNKX1 600351 /* Illegal to set remote to object before object
			 to remote.  */
#define TLNKX2 600356 /* Link was not received within 15 seconds.  */
#define TLNKX3 600357 /* Links full.  */
#define TLUKX1 601237 /* Internal format of table is incorrect.  */
#define TMONX1 601247 /* Invalid TMON function.  */
#define TTMSX1 602432 /* Could not send message within timeout
                         interval.  */
#define TTMSX2 602743 /* User is refusing messages and/or links.  */
#define TTMSX3 605605 /* Invalid CI node number.  */
#define TTMSX4 605626 /* Remote node not accepting remote sendalls.  */
#define TTYX01 602030 /* Line is not active.  */
#define TTYX02 602455 /* Illegal character specified.  */
#define TTYX03 602543 /* Line is temporarily active.  */
#define TTYX04 605602 /* Job is detached.  */
#define TTYX1  600360 /* Device is not a terminal.  */
#define UFPGX1 601316 /* File is not open for write.  */
#define USGX01 602113 /* Invalid USAGE entry type code.  */
#define USGX02 602116 /* Item not found in argument list.  */
#define USGX03 602124 /* Default item not allowed.  */
#define USGX04 601675 /* Invalid terminal line number.  */
#define UTSTX1 602013 /* Invalid function code.  */
#define UTSTX2 602014 /* Area of code too large to test.  */
#define UTSTX3 602015 /* UTEST facility in use by another process.  */
#define VACCX0 602111 /* Invalid account.  */
#define VACCX1 602112 /* Account string exceeds 39 characters.  */
#define VACCX2 602126 /* Account has expired.  */
#define VBCX1  601007 /* Display data area not locked in core.  */
#define WHELX1 600614 /* WHEEL or OPERATOR capability required.  */
#define WILDX1 601460 /* Second JFN cannot be wild.  */
#define XPEK01 602744 /* Illegal system fork number specified.  */
#define XPEK02 602745 /* Unassigned system fork number specified.  */
#define XPEK03 602747 /* Word count not positive.  */
#define XPEK04 602750 /* Word count too large.  Can not cross section
			 boundaries.  */
#define XSEVX1 602472 /* Illegal entry vector type.  */
#define XSEVX2 602473 /* Invalid entry vector length.  */
#define XSEVX3 602474 /* Cannot get extended values with this monitor
                         call.  */
#define XSIRX1 602424 /* Channel table crosses section boundary.  */
#define XSIRX2 602427 /* Level table crosses section boundary.  */
#define ZONEX1 600461 /* Time zone out of range.  */

#endif /* MONSYM_H */
