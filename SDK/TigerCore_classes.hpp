#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerCore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TigerCore.TigerAuthenticationManagerBase
// 0x0010 (0x0038 - 0x0028)
class UTigerAuthenticationManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerCore.TigerAuthenticationManagerBase"));
		return ptr;
	}

};


// Class TigerCore.TigerAnimationFilter
// 0x0048 (0x0078 - 0x0030)
class UTigerAnimationFilter : public UDataAsset
{
public:
	TArray<struct FName>                               BonesToFilter;                                            // 0x0030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	TArray<struct FName>                               BlendShapesToFilter;                                      // 0x0040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	class USkeleton*                                   Skeleton;                                                 // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TArray<int>                                        CurveIdsToFilter;                                         // 0x0058(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)
	TArray<bool>                                       BoneIdsToFilter;                                          // 0x0068(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerCore.TigerAnimationFilter"));
		return ptr;
	}


	void UpdateFilter();
};


// Class TigerCore.TigerAnimMetaDataAsset
// 0x0050 (0x0080 - 0x0030)
class UTigerAnimMetaDataAsset : public UDataAsset
{
public:
	TMap<struct FName, class UAnimMetaData*>           AnimMetaData;                                             // 0x0030(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_DisableEditOnInstance, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerCore.TigerAnimMetaDataAsset"));
		return ptr;
	}


	class UAnimMetaData* GetMetaData(const struct FName& InName);
};


// Class TigerCore.TigerRandomSequenceList
// 0x0010 (0x0038 - 0x0028)
class UTigerRandomSequenceList : public UObject
{
public:
	TArray<struct FRandomPlayerSequenceEntry>          RandomSequenceList;                                       // 0x0028(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_NativeAccessSpecifierPublic)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("Class TigerCore.TigerRandomSequenceList"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
