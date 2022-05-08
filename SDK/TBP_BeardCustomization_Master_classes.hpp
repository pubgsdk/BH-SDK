#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BeardCustomization_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BeardCustomization_Master.TBP_BeardCustomization_Master_C
// 0x0008 (0x0148 - 0x0140)
class UTBP_BeardCustomization_Master_C : public UTigerCharacterBeardCustomization
{
public:
	class UClass* /*UTBP_PoseableMesh_Master_C*/       PoseableMesh;                                             // 0x0140(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BeardCustomization_Master.TBP_BeardCustomization_Master_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
