#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Discipline_VentrueClan_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Discipline_VentrueClan.TBP_Discipline_VentrueClan_C
// 0x0008 (0x00A0 - 0x0098)
class UTBP_Discipline_VentrueClan_C : public UTigerDisciplineVentrueClan
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Discipline_VentrueClan.TBP_Discipline_VentrueClan_C"));
		return ptr;
	}


	void OnDamageMitigatedCosmetic();
	void ExecuteUbergraph_TBP_Discipline_VentrueClan(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
