#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Basic.hpp"
#include "TigerAnimGraphRuntime_enums.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_AddMetaData
// 0x0020 (0x0030 - 0x0010)
struct FTigerAnimNode_AddMetaData : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                     // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	class UTigerAnimMetaDataAsset*                     AnimMetaDataAsset;                                        // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FName                                       AnimMetaDataName;                                         // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_ApplyAdditiveFiltered
// 0x0008 (0x00D0 - 0x00C8)
struct FTigerAnimNode_ApplyAdditiveFiltered : public FAnimNode_ApplyAdditive
{
	class UTigerAnimationFilter*                       FilterAsset;                                              // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_BlendByBoolWSettle
// 0x0010 (0x00B0 - 0x00A0)
struct FTigerAnimNode_BlendByBoolWSettle : public FAnimNode_BlendListByBool
{
	ETigerBoolSettleTriggerDirection                   SettleTriggerDirection;                                   // 0x00A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              SettleTriggerValue;                                       // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      SettleEventEnum;                                          // 0x00A8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_CPUProfileTrace
// 0x0038 (0x0048 - 0x0010)
struct FTigerAnimNode_CPUProfileTrace : public FAnimNode_Base
{
	struct FPoseLink                                   Input;                                                    // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FName                                       Name;                                                     // 0x0020(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
};

// ScriptStruct TigerAnimGraphRuntime.TigerFilteredLayeredBlend
// 0x0008 (0x00C8 - 0x00C0)
struct FTigerFilteredLayeredBlend : public FAnimNode_LayeredBoneBlend
{
	class UTigerAnimationFilter*                       FilterAsset;                                              // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_RandomPlayer
// 0x0060 (0x0098 - 0x0038)
struct FTigerAnimNode_RandomPlayer : public FAnimNode_AssetPlayerBase
{
	bool                                               bShuffleMode;                                             // 0x0038(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	class UTigerRandomSequenceList*                    SequenceList;                                             // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0048(0x0048) MISSED OFFSET
	class UTigerRandomSequenceList*                    ActiveSequenceList;                                       // 0x0090(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
