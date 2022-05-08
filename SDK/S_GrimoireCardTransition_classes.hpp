#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "S_GrimoireCardTransition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass S_GrimoireCardTransition.SequenceDirector_C
// 0x0008 (0x0038 - 0x0030)
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0030(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass S_GrimoireCardTransition.SequenceDirector_C"));
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void Enable_Floating(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void Disable_Floating(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
