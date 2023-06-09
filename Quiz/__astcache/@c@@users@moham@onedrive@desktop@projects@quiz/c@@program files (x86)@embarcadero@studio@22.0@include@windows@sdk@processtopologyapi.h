﻿#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
/********************************************************************************
*                                                                               *
* processtopologyapi.h -- ApiSet Contract for api-ms-win-core-processtopology-l1 *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _PROCESSTOPOLOGYAPI_H_
#define _PROCESSTOPOLOGYAPI_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI
BOOL
WINAPI
GetProcessGroupAffinity(
    _In_ HANDLE hProcess,
    _Inout_ PUSHORT GroupCount,
    _Out_writes_(*GroupCount) PUSHORT GroupArray
    );


#endif // (_WIN32_WINNT >= 0x0601)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion


#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI
BOOL
WINAPI
GetThreadGroupAffinity(
    _In_ HANDLE hThread,
    _Out_ PGROUP_AFFINITY GroupAffinity
    );


WINBASEAPI
BOOL
WINAPI
SetThreadGroupAffinity(
    _In_ HANDLE hThread,
    _In_ CONST GROUP_AFFINITY* GroupAffinity,
    _Out_opt_ PGROUP_AFFINITY PreviousGroupAffinity
    );


#endif // (_WIN32_WINNT >= 0x0601)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _PROCESSTOPOLOGYAPI_H_
#pragma option pop /*P_O_Pop*/
