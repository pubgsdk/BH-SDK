#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TigerWeaponMetaData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TigerWeaponMetaData.TigerWeaponMetaData_C
// 0x0001 (0x0029 - 0x0028)
class UTigerWeaponMetaData_C : public UAnimMetaData
{
public:
	bool                                               ShouldUseWeaponAO;                                        // 0x0028(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TigerWeaponMetaData.TigerWeaponMetaData_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
