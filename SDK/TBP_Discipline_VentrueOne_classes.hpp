#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_Discipline_VentrueOne_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Discipline_VentrueOne.TBP_Discipline_VentrueOne_C
// 0x0008 (0x00D0 - 0x00C8)
class UTBP_Discipline_VentrueOne_C : public UTigerDisciplineVentrueOne
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_Discipline_VentrueOne.TBP_Discipline_VentrueOne_C"));
		return ptr;
	}


	void OnHitCharacter(class ATigerCharacter* InCharacter);
	void ExecuteUbergraph_TBP_Discipline_VentrueOne(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
