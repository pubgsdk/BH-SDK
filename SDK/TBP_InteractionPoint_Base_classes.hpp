#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_InteractionPoint_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_InteractionPoint_Base.TBP_InteractionPoint_Base_C
// 0x0008 (0x0338 - 0x0330)
class ATBP_InteractionPoint_Base_C : public ATigerInteractivePoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_InteractionPoint_Base.TBP_InteractionPoint_Base_C"));
		return ptr;
	}


	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_InteractionPoint_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
