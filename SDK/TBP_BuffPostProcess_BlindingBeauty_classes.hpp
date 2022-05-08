#pragma once

// Bloodhunt (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TBP_BuffPostProcess_BlindingBeauty_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C
// 0x0017 (0x0278 - 0x0261)
class ATBP_BuffPostProcess_BlindingBeauty_C : public ATBP_BuffPostProcess_Master_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0261(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UCurveFloat*                                 FlashCurve;                                               // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C"));
		return ptr;
	}


	void SetParameters(float NormalizedDuration);
	void ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
